// Warning!  This file was generated by running a program (see project |tools|).
// If you change it, the changes will be lost the next time the generator is
// run.  You should change the generator instead.

extern "C"
struct NavigationFrameParameters {
  int extension;
  int centre_index;
  int primary_index;
  int secondary_index;
};

static_assert(std::is_standard_layout<NavigationFrameParameters>::value,
              "NavigationFrameParameters is used for interfacing");

extern "C"
struct XYZ {
  double x;
  double y;
  double z;
};

static_assert(std::is_standard_layout<XYZ>::value,
              "XYZ is used for interfacing");

extern "C"
struct Burn {
  double thrust_in_kilonewtons;
  double specific_impulse_in_seconds_g0;
  NavigationFrameParameters frame;
  double initial_time;
  XYZ delta_v;
};

static_assert(std::is_standard_layout<Burn>::value,
              "Burn is used for interfacing");

extern "C"
struct NavigationManoeuvre {
  Burn burn;
  double initial_mass_in_tonnes;
  double final_mass_in_tonnes;
  double mass_flow;
  double duration;
  double final_time;
  double time_of_half_delta_v;
  double time_to_half_delta_v;
  XYZ direction;
};

static_assert(std::is_standard_layout<NavigationManoeuvre>::value,
              "NavigationManoeuvre is used for interfacing");

extern "C"
struct KSPPart {
  XYZ world_position;
  XYZ world_velocity;
  double mass_in_tonnes;
  XYZ gravitational_acceleration_to_be_applied_by_ksp;
  uint32_t id;
};

static_assert(std::is_standard_layout<KSPPart>::value,
              "KSPPart is used for interfacing");

extern "C"
struct QP {
  XYZ q;
  XYZ p;
};

static_assert(std::is_standard_layout<QP>::value,
              "QP is used for interfacing");

extern "C"
struct WXYZ {
  double w;
  double x;
  double y;
  double z;
};

static_assert(std::is_standard_layout<WXYZ>::value,
              "WXYZ is used for interfacing");

extern "C"
struct XYZSegment {
  XYZ begin;
  XYZ end;
};

static_assert(std::is_standard_layout<XYZSegment>::value,
              "XYZSegment is used for interfacing");

extern "C" PRINCIPIA_DLL
void CDECL principia__AddVesselToNextPhysicsBubble(
    Plugin* const plugin,
    char const* const vessel_guid,
    KSPPart const* const parts,
    int const count);

extern "C" PRINCIPIA_DLL
void CDECL principia__AdvanceTime(
    Plugin* const plugin,
    double const t,
    double const planetarium_rotation);

extern "C" PRINCIPIA_DLL
bool CDECL principia__AtEnd(
    LineAndIterator const* const line_and_iterator);

extern "C" PRINCIPIA_DLL
XYZ CDECL principia__BubbleDisplacementCorrection(
    Plugin const* const plugin,
    XYZ const sun_position);

extern "C" PRINCIPIA_DLL
XYZ CDECL principia__BubbleVelocityCorrection(
    Plugin const* const plugin,
    int const reference_body_index);

extern "C" PRINCIPIA_DLL
QP CDECL principia__CelestialFromParent(
    Plugin const* const plugin,
    int const celestial_index);

extern "C" PRINCIPIA_DLL
double CDECL principia__CurrentTime(
    Plugin const* const plugin);

extern "C" PRINCIPIA_DLL
void CDECL principia__DeleteLineAndIterator(
    LineAndIterator** const line_and_iterator);

extern "C" PRINCIPIA_DLL
void CDECL principia__DeletePlugin(
    Plugin const** const plugin);

extern "C" PRINCIPIA_DLL
void CDECL principia__DeletePluginSerialization(
    char const** const serialization);

extern "C" PRINCIPIA_DLL
void CDECL principia__DeserializePlugin(
    char const* const serialization,
    int const serialization_size,
    PushDeserializer** const deserializer,
    Plugin const** const plugin);

extern "C" PRINCIPIA_DLL
void CDECL principia__DirectlyInsertCelestial(
    Plugin* const plugin,
    int const celestial_index,
    int const* const parent_index,
    char const* const gravitational_parameter,
    char const* const axis_right_ascension,
    char const* const axis_declination,
    char const* const j2,
    char const* const reference_radius,
    char const* const x,
    char const* const y,
    char const* const z,
    char const* const vx,
    char const* const vy,
    char const* const vz);

extern "C" PRINCIPIA_DLL
void CDECL principia__EndInitialization(
    Plugin* const plugin);

extern "C" PRINCIPIA_DLL
XYZSegment CDECL principia__FetchAndIncrement(
    LineAndIterator* const line_and_iterator);

extern "C" PRINCIPIA_DLL
bool CDECL principia__FlightPlanAppend(
    Plugin const* const plugin,
    char const* const vessel_guid,
    Burn const burn);

extern "C" PRINCIPIA_DLL
NavigationManoeuvre CDECL principia__FlightPlanGetManoeuvre(
    Plugin const* const plugin,
    char const* const vessel_guid,
    int const index);

extern "C" PRINCIPIA_DLL
int CDECL principia__FlightPlanNumberOfManoeuvres(
    Plugin const* const plugin,
    char const* const vessel_guid);

extern "C" PRINCIPIA_DLL
int CDECL principia__FlightPlanNumberOfSegments(
    Plugin const* const plugin,
    char const* const vessel_guid);

extern "C" PRINCIPIA_DLL
void CDECL principia__FlightPlanRemoveLast(
    Plugin const* const plugin,
    char const* const vessel_guid);

extern "C" PRINCIPIA_DLL
LineAndIterator* CDECL principia__FlightPlanRenderedSegment(
    Plugin const* const plugin,
    char const* const vessel_guid,
    XYZ const sun_world_position,
    int const index);

extern "C" PRINCIPIA_DLL
bool CDECL principia__FlightPlanReplaceLast(
    Plugin const* const plugin,
    char const* const vessel_guid,
    Burn const burn);

extern "C" PRINCIPIA_DLL
bool CDECL principia__FlightPlanSetFinalTime(
    Plugin const* const plugin,
    char const* const vessel_guid,
    double const final_time);

extern "C" PRINCIPIA_DLL
void CDECL principia__FlightPlanSetTolerances(
    Plugin const* const plugin,
    char const* const vessel_guid,
    double const length_integration_tolerance,
    double const speed_integration_tolerance);

extern "C" PRINCIPIA_DLL
void CDECL principia__ForgetAllHistoriesBefore(
    Plugin* const plugin,
    double const t);

extern "C" PRINCIPIA_DLL
int CDECL principia__GetBufferDuration();

extern "C" PRINCIPIA_DLL
int CDECL principia__GetBufferedLogging();

extern "C" PRINCIPIA_DLL
NavigationFrameParameters CDECL principia__GetNavigationFrameParameters(
    NavigationFrame const* const navigation_frame);

extern "C" PRINCIPIA_DLL
NavigationFrame const* CDECL principia__GetPlottingFrame(
    Plugin const* const plugin);

extern "C" PRINCIPIA_DLL
int CDECL principia__GetStderrLogging();

extern "C" PRINCIPIA_DLL
int CDECL principia__GetSuppressedLogging();

extern "C" PRINCIPIA_DLL
int CDECL principia__GetVerboseLogging();

extern "C" PRINCIPIA_DLL
bool CDECL principia__HasPrediction(
    Plugin const* const plugin,
    char const* const vessel_guid);

extern "C" PRINCIPIA_DLL
bool CDECL principia__HasVessel(
    Plugin* const plugin,
    char const* const vessel_guid);

extern "C" PRINCIPIA_DLL
void CDECL principia__InitGoogleLogging();

extern "C" PRINCIPIA_DLL
void CDECL principia__InsertCelestial(
    Plugin* const plugin,
    int const celestial_index,
    double const gravitational_parameter,
    int const parent_index,
    QP const from_parent);

extern "C" PRINCIPIA_DLL
bool CDECL principia__InsertOrKeepVessel(
    Plugin* const plugin,
    char const* const vessel_guid,
    int const parent_index);

extern "C" PRINCIPIA_DLL
void CDECL principia__InsertSun(
    Plugin* const plugin,
    int const celestial_index,
    double const gravitational_parameter);

extern "C" PRINCIPIA_DLL
void CDECL principia__LogError(
    char const* const text);

extern "C" PRINCIPIA_DLL
void CDECL principia__LogFatal(
    char const* const text);

extern "C" PRINCIPIA_DLL
void CDECL principia__LogInfo(
    char const* const text);

extern "C" PRINCIPIA_DLL
void CDECL principia__LogWarning(
    char const* const text);

extern "C" PRINCIPIA_DLL
WXYZ CDECL principia__NavballOrientation(
    Plugin const* const plugin,
    XYZ const sun_world_position,
    XYZ const ship_world_position);

extern "C" PRINCIPIA_DLL
NavigationFrame* CDECL principia__NewBarycentricRotatingNavigationFrame(
    Plugin const* const plugin,
    int const primary_index,
    int const secondary_index);

extern "C" PRINCIPIA_DLL
NavigationFrame* CDECL principia__NewBodyCentredNonRotatingNavigationFrame(
    Plugin const* const plugin,
    int const reference_body_index);

extern "C" PRINCIPIA_DLL
NavigationFrame* CDECL principia__NewNavigationFrame(
    Plugin const* const plugin,
    NavigationFrameParameters const parameters);

extern "C" PRINCIPIA_DLL
Plugin* CDECL principia__NewPlugin(
    double const initial_time,
    double const planetarium_rotation_in_degrees);

extern "C" PRINCIPIA_DLL
int CDECL principia__NumberOfSegments(
    LineAndIterator const* const line_and_iterator);

extern "C" PRINCIPIA_DLL
bool CDECL principia__PhysicsBubbleIsEmpty(
    Plugin const* const plugin);

extern "C" PRINCIPIA_DLL
LineAndIterator* CDECL principia__RenderedPrediction(
    Plugin* const plugin,
    char const* const vessel_guid,
    XYZ const sun_world_position);

extern "C" PRINCIPIA_DLL
LineAndIterator* CDECL principia__RenderedVesselTrajectory(
    Plugin const* const plugin,
    char const* const vessel_guid,
    XYZ const sun_world_position);

extern "C" PRINCIPIA_DLL
char const* CDECL principia__SayHello();

extern "C" PRINCIPIA_DLL
char const* CDECL principia__SerializePlugin(
    Plugin const* const plugin,
    PullSerializer** const serializer);

extern "C" PRINCIPIA_DLL
void CDECL principia__SetBufferDuration(
    int const seconds);

extern "C" PRINCIPIA_DLL
void CDECL principia__SetBufferedLogging(
    int const max_severity);

extern "C" PRINCIPIA_DLL
void CDECL principia__SetPlottingFrame(
    Plugin* const plugin,
    NavigationFrame** const navigation_frame);

extern "C" PRINCIPIA_DLL
void CDECL principia__SetPredictionLength(
    Plugin* const plugin,
    double const t);

extern "C" PRINCIPIA_DLL
void CDECL principia__SetPredictionLengthTolerance(
    Plugin* const plugin,
    double const l);

extern "C" PRINCIPIA_DLL
void CDECL principia__SetPredictionSpeedTolerance(
    Plugin* const plugin,
    double const v);

extern "C" PRINCIPIA_DLL
void CDECL principia__SetStderrLogging(
    int const min_severity);

extern "C" PRINCIPIA_DLL
void CDECL principia__SetSuppressedLogging(
    int const min_severity);

extern "C" PRINCIPIA_DLL
void CDECL principia__SetVerboseLogging(
    int const level);

extern "C" PRINCIPIA_DLL
void CDECL principia__SetVesselStateOffset(
    Plugin* const plugin,
    char const* const vessel_guid,
    QP const from_parent);

extern "C" PRINCIPIA_DLL
void CDECL principia__UpdateCelestialHierarchy(
    Plugin const* const plugin,
    int const celestial_index,
    int const parent_index);

extern "C" PRINCIPIA_DLL
void CDECL principia__UpdatePrediction(
    Plugin const* const plugin,
    char const* const vessel_guid);

extern "C" PRINCIPIA_DLL
XYZ CDECL principia__VesselBinormal(
    Plugin const* const plugin,
    char const* const vessel_guid);

extern "C" PRINCIPIA_DLL
QP CDECL principia__VesselFromParent(
    Plugin const* const plugin,
    char const* const vessel_guid);

extern "C" PRINCIPIA_DLL
XYZ CDECL principia__VesselNormal(
    Plugin const* const plugin,
    char const* const vessel_guid);

extern "C" PRINCIPIA_DLL
XYZ CDECL principia__VesselTangent(
    Plugin const* const plugin,
    char const* const vessel_guid);

