@class NSUUID, NSDate, NSArray, MNIPCTransitAlightMessage, MNIPCLaneGuidanceMessage, NSData, MNIPCTrafficIncidentAlertMessage, NSString, NSNumber, MNArrivalInfo, GEOJunction, MNIPCShieldInfoMessage;
@protocol GEOTransitArtworkDataSource;

@interface MNIPCGuidanceStateReply : MNIPCMessage

@property (nonatomic) unsigned long long guidanceState;
@property (nonatomic) BOOL affectsDimming;
@property (nonatomic) int transportType;
@property (retain, nonatomic) MNIPCTrafficIncidentAlertMessage *trafficIncidentAlert;
@property (retain, nonatomic) MNIPCTransitAlightMessage *alightMessage;
@property (copy, nonatomic) NSArray *primaryInstructions;
@property (copy, nonatomic) NSArray *secondaryInstructions;
@property (retain, nonatomic) MNIPCShieldInfoMessage *shieldInfo;
@property (retain, nonatomic) MNIPCLaneGuidanceMessage *laneGuidanceInfo;
@property (copy, nonatomic) NSUUID *maneuverID;
@property (nonatomic) int maneuver;
@property (nonatomic) int drivingSide;
@property (retain, nonatomic) GEOJunction *junction;
@property (retain, nonatomic) id<GEOTransitArtworkDataSource> artworkOverride;
@property (retain, nonatomic) MNArrivalInfo *arrivalInfo;
@property (nonatomic) unsigned long long currentLegIndex;
@property (nonatomic) unsigned long long numberOfLegs;
@property (readonly, nonatomic) BOOL isInArrivalState;
@property (readonly, nonatomic) BOOL isArriving;
@property (readonly, nonatomic) BOOL isArrived;
@property (readonly, nonatomic) BOOL isInParkingState;
@property (readonly, nonatomic) BOOL isParking;
@property (readonly, nonatomic) BOOL isParked;
@property (retain, nonatomic) NSDate *lastSceneDeactivationTime;
@property (nonatomic) BOOL isAlerting;
@property (nonatomic) BOOL isRerouting;
@property (retain, nonatomic) NSUUID *currentSpokenEventID;
@property (nonatomic) BOOL isSticky;
@property (nonatomic) BOOL showInMainScreen;
@property (nonatomic) BOOL showInCarPlay;
@property (nonatomic) BOOL isMapsForegroundOnMainScreen;
@property (nonatomic) BOOL isNavigating;
@property (copy, nonatomic) NSData *legacyRouteData;
@property (copy, nonatomic) NSData *originalWaypointRouteData;
@property (nonatomic) unsigned long long navigationState;
@property (copy, nonatomic) NSData *etaFilterData;
@property (copy, nonatomic) NSArray *incidentsOnRouteData;
@property (copy, nonatomic) NSArray *incidentsOnRouteOffsets;
@property (copy, nonatomic) NSData *evChargingMetadata;
@property (copy, nonatomic) NSString *navVolumeSetting;
@property (copy, nonatomic) NSData *navSessionData;
@property (copy, nonatomic) NSNumber *distance;
@property (copy, nonatomic) NSNumber *remainingDistanceOnRoute;
@property (copy, nonatomic) NSNumber *remainingMinutesOnRoute;
@property (copy, nonatomic) NSNumber *timeToNextManeuver;

- (id)initWithDictionary:(id)a0;
- (id)shortDescription;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryValue;
- (id)_maneuverETA;
- (id)_navigationVolume;
- (id)_overallETA;
- (id)_trafficIncidentAlertType;
- (id)siriRoute;
- (id)toSiriResponse;

@end
