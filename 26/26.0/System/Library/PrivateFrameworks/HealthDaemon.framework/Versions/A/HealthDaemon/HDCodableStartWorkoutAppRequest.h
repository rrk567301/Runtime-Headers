@class NSString, NSData, HDCodableWorkoutConfiguration;

@interface HDCodableStartWorkoutAppRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasRequestIdentifier;
@property (retain, nonatomic) NSString *requestIdentifier;
@property (readonly, nonatomic) BOOL hasApplicationIdentifier;
@property (retain, nonatomic) NSString *applicationIdentifier;
@property (readonly, nonatomic) BOOL hasWorkoutConfiguration;
@property (retain, nonatomic) HDCodableWorkoutConfiguration *workoutConfiguration;
@property (readonly, nonatomic) BOOL hasWorkoutPlanData;
@property (retain, nonatomic) NSData *workoutPlanData;
@property (readonly, nonatomic) BOOL hasMirroredStartData;
@property (retain, nonatomic) NSData *mirroredStartData;

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

@end
