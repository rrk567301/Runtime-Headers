@class NSString, TRIPersistedTaskAttribution;

@interface TRIFetchSingleRolloutNotificationPersistedTask : TRIPBMessage

@property (copy, nonatomic) NSString *rolloutId;
@property (nonatomic) char hasRolloutId;
@property (nonatomic) int deploymentId;
@property (nonatomic) char hasDeploymentId;
@property (retain, nonatomic) TRIPersistedTaskAttribution *taskAttribution;
@property (nonatomic) char hasTaskAttribution;
@property (nonatomic) int retryCount;
@property (nonatomic) char hasRetryCount;

+ (id)descriptor;

@end
