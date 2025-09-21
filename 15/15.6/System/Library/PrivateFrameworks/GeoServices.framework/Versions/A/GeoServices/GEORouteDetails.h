@interface GEORouteDetails : PBCodable <NSCopying> {
    double _timeSinceRouteResponse;
    int _resultIndex;
    unsigned int _stepID;
    char _isNearCurrentlyDisplayedStep;
    char _isNearRoute;
    char _isUserTrackingOn;
    struct { unsigned char has_timeSinceRouteResponse : 1; unsigned char has_resultIndex : 1; unsigned char has_stepID : 1; unsigned char has_isNearCurrentlyDisplayedStep : 1; unsigned char has_isNearRoute : 1; unsigned char has_isUserTrackingOn : 1; } _flags;
}

@property (nonatomic) char hasResultIndex;
@property (nonatomic) int resultIndex;
@property (nonatomic) char hasStepID;
@property (nonatomic) unsigned int stepID;
@property (nonatomic) char hasIsNearRoute;
@property (nonatomic) char isNearRoute;
@property (nonatomic) char hasIsNearCurrentlyDisplayedStep;
@property (nonatomic) char isNearCurrentlyDisplayedStep;
@property (nonatomic) char hasIsUserTrackingOn;
@property (nonatomic) char isUserTrackingOn;
@property (nonatomic) char hasTimeSinceRouteResponse;
@property (nonatomic) double timeSinceRouteResponse;

+ (char)isValid:(id)a0;
+ (id)routeDetailsWithResultIndex:(int)a0;
+ (id)routeDetailsWithResultIndex:(int)a0 stepID:(int)a1;
+ (id)routeDetailsWithResultIndex:(int)a0 stepID:(int)a1 nearRoute:(char)a2 nearCurrentlyDisplayedStep:(char)a3 userTrackingOn:(char)a4 timeSinceResponse:(double)a5;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithResultIndex:(int)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
