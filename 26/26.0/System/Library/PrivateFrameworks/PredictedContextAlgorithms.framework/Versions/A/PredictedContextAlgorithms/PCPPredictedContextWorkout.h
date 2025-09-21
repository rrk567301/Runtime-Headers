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
- (int)StringAsWorkoutLocationType:(id)a0;
- (id)workoutLocationTypeAsString:(int)a0;

@end
