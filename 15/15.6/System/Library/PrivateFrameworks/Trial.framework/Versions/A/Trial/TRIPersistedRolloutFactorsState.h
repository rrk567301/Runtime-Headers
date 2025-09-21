@class NSString;

@interface TRIPersistedRolloutFactorsState : TRIPBMessage

@property (copy, nonatomic) NSString *rolloutId;
@property (nonatomic) char hasRolloutId;
@property (nonatomic) int deploymentId;
@property (nonatomic) char hasDeploymentId;

+ (id)descriptor;

@end
