@class NSString, TRIPersistedTaskAttribution;

@interface TRITargetingPersistedTask : TRIPBMessage

@property (copy, nonatomic) NSString *experimentId;
@property (nonatomic) char hasExperimentId;
@property (nonatomic) int deploymentId;
@property (nonatomic) char hasDeploymentId;
@property (nonatomic) char includeDependencies;
@property (nonatomic) char hasIncludeDependencies;
@property (nonatomic) int retryCount;
@property (nonatomic) char hasRetryCount;
@property (retain, nonatomic) TRIPersistedTaskAttribution *taskAttribution;
@property (nonatomic) char hasTaskAttribution;

+ (id)descriptor;

@end
