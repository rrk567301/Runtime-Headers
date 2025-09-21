@class NSData, NSMutableArray;

@interface HDCodableRacingMetrics : PBCodable <NSCopying> {
    struct { unsigned char distance : 1; unsigned char duration : 1; unsigned char startDate : 1; } _has;
}

@property (readonly, nonatomic) char hasWorkoutUUID;
@property (retain, nonatomic) NSData *workoutUUID;
@property (nonatomic) char hasStartDate;
@property (nonatomic) double startDate;
@property (nonatomic) char hasDuration;
@property (nonatomic) double duration;
@property (nonatomic) char hasDistance;
@property (nonatomic) double distance;
@property (retain, nonatomic) NSMutableArray *routePoints;

+ (Class)routePointsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addRoutePoints:(id)a0;
- (void)clearRoutePoints;
- (id)routePointsAtIndex:(unsigned long long)a0;
- (unsigned long long)routePointsCount;

@end
