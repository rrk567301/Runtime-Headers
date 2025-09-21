@class NSString, NSData, HDCodableWorkoutConfiguration;

@interface HDCodableStartWorkoutAppRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) char hasRequestIdentifier;
@property (retain, nonatomic) NSString *requestIdentifier;
@property (readonly, nonatomic) char hasApplicationIdentifier;
@property (retain, nonatomic) NSString *applicationIdentifier;
@property (readonly, nonatomic) char hasWorkoutConfiguration;
@property (retain, nonatomic) HDCodableWorkoutConfiguration *workoutConfiguration;
@property (readonly, nonatomic) char hasWorkoutPlanData;
@property (retain, nonatomic) NSData *workoutPlanData;

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

@end
