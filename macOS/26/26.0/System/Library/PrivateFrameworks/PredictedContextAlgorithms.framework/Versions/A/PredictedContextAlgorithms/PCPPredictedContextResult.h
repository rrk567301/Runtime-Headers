@class PCPPredictedContextAnalytics, NSMutableArray;

@interface PCPPredictedContextResult : PBCodable <NSCopying> {
    struct { unsigned char computeRequested : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *predictedContextLocations;
@property (retain, nonatomic) NSMutableArray *predictedContextTransitions;
@property (retain, nonatomic) NSMutableArray *predictedContextWorkouts;
@property (nonatomic) BOOL hasComputeRequested;
@property (nonatomic) BOOL computeRequested;
@property (readonly, nonatomic) BOOL hasPredictedContextAnalytics;
@property (retain, nonatomic) PCPPredictedContextAnalytics *predictedContextAnalytics;

+ (Class)predictedContextTransitionsType;
+ (Class)predictedContextLocationsType;
+ (Class)predictedContextWorkoutsType;

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
- (void)addPredictedContextTransitions:(id)a0;
- (void)addPredictedContextLocations:(id)a0;
- (void)addPredictedContextWorkouts:(id)a0;
- (void)clearPredictedContextLocations;
- (void)clearPredictedContextTransitions;
- (void)clearPredictedContextWorkouts;
- (id)predictedContextLocationsAtIndex:(unsigned long long)a0;
- (unsigned long long)predictedContextLocationsCount;
- (id)predictedContextTransitionsAtIndex:(unsigned long long)a0;
- (unsigned long long)predictedContextTransitionsCount;
- (id)predictedContextWorkoutsAtIndex:(unsigned long long)a0;
- (unsigned long long)predictedContextWorkoutsCount;

@end
