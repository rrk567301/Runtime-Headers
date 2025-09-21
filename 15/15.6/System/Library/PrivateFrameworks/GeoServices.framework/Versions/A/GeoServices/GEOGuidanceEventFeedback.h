@class PBDataReader, GEOTrafficCameraInformation, NSData, GEOSignGuidanceFeedback, GEOSpokenGuidanceFeedback, GEOJunctionViewGuidanceFeedback;

@interface GEOGuidanceEventFeedback : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOJunctionViewGuidanceFeedback *_junctionViewGuidanceFeedback;
    NSData *_routeID;
    GEOSignGuidanceFeedback *_signGuidanceFeedback;
    GEOSpokenGuidanceFeedback *_spokenGuidanceFeedback;
    GEOTrafficCameraInformation *_trafficCameraGuidanceFeedback;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    float _distanceToManeuver;
    float _duration;
    unsigned int _enrouteNoticeIndex;
    unsigned int _eventIndex;
    unsigned int _stepID;
    float _timeToManeuver;
    int _trafficSpeed;
    float _vehicleSpeed;
    struct { unsigned char has_distanceToManeuver : 1; unsigned char has_duration : 1; unsigned char has_enrouteNoticeIndex : 1; unsigned char has_eventIndex : 1; unsigned char has_stepID : 1; unsigned char has_timeToManeuver : 1; unsigned char has_trafficSpeed : 1; unsigned char has_vehicleSpeed : 1; unsigned char read_junctionViewGuidanceFeedback : 1; unsigned char read_routeID : 1; unsigned char read_signGuidanceFeedback : 1; unsigned char read_spokenGuidanceFeedback : 1; unsigned char read_trafficCameraGuidanceFeedback : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasRouteID;
@property (retain, nonatomic) NSData *routeID;
@property (nonatomic) char hasStepID;
@property (nonatomic) unsigned int stepID;
@property (nonatomic) char hasEnrouteNoticeIndex;
@property (nonatomic) unsigned int enrouteNoticeIndex;
@property (nonatomic) char hasEventIndex;
@property (nonatomic) unsigned int eventIndex;
@property (nonatomic) char hasDistanceToManeuver;
@property (nonatomic) float distanceToManeuver;
@property (nonatomic) char hasTimeToManeuver;
@property (nonatomic) float timeToManeuver;
@property (nonatomic) char hasVehicleSpeed;
@property (nonatomic) float vehicleSpeed;
@property (nonatomic) char hasTrafficSpeed;
@property (nonatomic) int trafficSpeed;
@property (nonatomic) char hasDuration;
@property (nonatomic) float duration;
@property (readonly, nonatomic) char hasSignGuidanceFeedback;
@property (retain, nonatomic) GEOSignGuidanceFeedback *signGuidanceFeedback;
@property (readonly, nonatomic) char hasSpokenGuidanceFeedback;
@property (retain, nonatomic) GEOSpokenGuidanceFeedback *spokenGuidanceFeedback;
@property (readonly, nonatomic) char hasJunctionViewGuidanceFeedback;
@property (retain, nonatomic) GEOJunctionViewGuidanceFeedback *junctionViewGuidanceFeedback;
@property (readonly, nonatomic) char hasTrafficCameraGuidanceFeedback;
@property (retain, nonatomic) GEOTrafficCameraInformation *trafficCameraGuidanceFeedback;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsTrafficSpeed:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)trafficSpeedAsString:(int)a0;

@end
