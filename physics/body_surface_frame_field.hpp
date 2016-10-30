#pragma once

#include "geometry/grassmann.hpp"
#include "geometry/named_quantities.hpp"
#include "geometry/rotation.hpp"
#include "physics/ephemeris.hpp"
#include "physics/frame_field.hpp"
#include "physics/rotating_body.hpp"

namespace principia {
namespace physics {
namespace internal_body_surface_frame_field {

using base::not_null;
using geometry::Instant;
using geometry::Position;
using geometry::Rotation;
using geometry::Vector;

//TODO(phl):comment
template<typename Frame, typename ThisFrame>
class BodySurfaceFrameField : public FrameField<Frame, ThisFrame> {
 public:
  BodySurfaceFrameField(Ephemeris<Frame> const& ephemeris,
                        Instant const& t,
                        not_null<RotatingBody<Frame> const*> const body);

  Rotation<ThisFrame, Frame> FromThisFrame(
      Position<Frame> const& q) const override;

 private:
  Vector<double, Frame> const body_axis_;
  Position<Frame> const body_position_;
};

}  // namespace internal_body_surface_frame_field

using internal_body_surface_frame_field::BodySurfaceFrameField;

}  // namespace physics
}  // namespace principia

#include "physics/body_surface_frame_field_body.hpp"
