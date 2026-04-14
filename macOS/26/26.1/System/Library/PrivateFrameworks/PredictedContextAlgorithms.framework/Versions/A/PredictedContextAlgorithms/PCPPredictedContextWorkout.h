@class PCPPredictedContext, NSString;

@interface PCPPredictedContextWorkout : PBCodable <NSCopying> {
    struct { unsigned char workoutActivityType : 1; unsigned char workoutLocationType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasPredictedContext;
@property (retain, nonatomic) PCPPredictedContext *predictedContext;
@property (nonatomic) BOOL hasWorkoutActivityType;
@property (nonatomic) unsigned long long workoutActivityType;
@property (readonly, nonatomic) BOOL hasSourceBundleIdentifier;
@property (retain, nonatomic) NSString *sourceBundleIdentifier;
@property (nonatomic) BOOL hasWorkoutLocationType;
@property (nonatomic) int workoutLocationType;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsWorkoutLocationType:(id)a0;
- (id)workoutLocationTypeAsString:(int)a0;

@end
