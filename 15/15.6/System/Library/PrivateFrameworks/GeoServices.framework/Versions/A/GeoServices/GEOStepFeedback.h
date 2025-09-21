@class NSData, GEOEVStepFeedbackInfo, PBDataReader;

@interface GEOStepFeedback : PBCodable <NSCopying> {
    PBDataReader *_reader;
    double _completionTimeStamp;
    NSData *_etaTrafficUpdateResponseId;
    GEOEVStepFeedbackInfo *_evStepInfo;
    NSData *_routeID;
    double _stepEndPathPointOffset;
    NSData *_stepZilch;
    NSData *_tripID;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _expectedTime;
    int _maneuverType;
    unsigned int _routeIndex;
    unsigned int _stepID;
    int _stepEndPathPointIndex;
    unsigned int _waypointRouteID;
    char _completedStep;
    char _lightGuidance;
    char _routePaused;
    char _routeResumed;
    struct { unsigned char has_completionTimeStamp : 1; unsigned char has_stepEndPathPointOffset : 1; unsigned char has_expectedTime : 1; unsigned char has_maneuverType : 1; unsigned char has_routeIndex : 1; unsigned char has_stepID : 1; unsigned char has_stepEndPathPointIndex : 1; unsigned char has_waypointRouteID : 1; unsigned char has_completedStep : 1; unsigned char has_lightGuidance : 1; unsigned char has_routePaused : 1; unsigned char has_routeResumed : 1; unsigned char read_etaTrafficUpdateResponseId : 1; unsigned char read_evStepInfo : 1; unsigned char read_routeID : 1; unsigned char read_stepZilch : 1; unsigned char read_tripID : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasStepID;
@property (nonatomic) unsigned int stepID;
@property (nonatomic) char hasCompletionTimeStamp;
@property (nonatomic) double completionTimeStamp;
@property (nonatomic) char hasCompletedStep;
@property (nonatomic) char completedStep;
@property (readonly, nonatomic) char hasRouteID;
@property (retain, nonatomic) NSData *routeID;
@property (nonatomic) char hasRouteIndex;
@property (nonatomic) unsigned int routeIndex;
@property (nonatomic) char hasLightGuidance;
@property (nonatomic) char lightGuidance;
@property (readonly, nonatomic) char hasTripID;
@property (retain, nonatomic) NSData *tripID;
@property (nonatomic) char hasRoutePaused;
@property (nonatomic) char routePaused;
@property (nonatomic) char hasRouteResumed;
@property (nonatomic) char routeResumed;
@property (readonly, nonatomic) char hasEvStepInfo;
@property (retain, nonatomic) GEOEVStepFeedbackInfo *evStepInfo;
@property (nonatomic) char hasWaypointRouteID;
@property (nonatomic) unsigned int waypointRouteID;
@property (nonatomic) char hasManeuverType;
@property (nonatomic) int maneuverType;
@property (nonatomic) char hasExpectedTime;
@property (nonatomic) unsigned int expectedTime;
@property (readonly, nonatomic) char hasStepZilch;
@property (retain, nonatomic) NSData *stepZilch;
@property (nonatomic) char hasStepEndPathPointIndex;
@property (nonatomic) int stepEndPathPointIndex;
@property (nonatomic) char hasStepEndPathPointOffset;
@property (nonatomic) double stepEndPathPointOffset;
@property (readonly, nonatomic) char hasEtaTrafficUpdateResponseId;
@property (retain, nonatomic) NSData *etaTrafficUpdateResponseId;

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
- (int)StringAsManeuverType:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)maneuverTypeAsString:(int)a0;
- (void)readAll:(char)a0;

@end
