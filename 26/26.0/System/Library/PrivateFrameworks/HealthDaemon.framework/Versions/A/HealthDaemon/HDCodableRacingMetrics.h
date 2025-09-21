@class NSData, NSMutableArray;

@interface HDCodableRacingMetrics : PBCodable <NSCopying> {
    struct { unsigned char distance : 1; unsigned char duration : 1; unsigned char startDate : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasWorkoutUUID;
@property (retain, nonatomic) NSData *workoutUUID;
@property (nonatomic) BOOL hasStartDate;
@property (nonatomic) double startDate;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) double duration;
@property (nonatomic) BOOL hasDistance;
@property (nonatomic) double distance;
@property (retain, nonatomic) NSMutableArray *routePoints;

+ (Class)routePointsType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addRoutePoints:(id)a0;
- (void)clearRoutePoints;
- (id)routePointsAtIndex:(unsigned long long)a0;
- (unsigned long long)routePointsCount;

@end
