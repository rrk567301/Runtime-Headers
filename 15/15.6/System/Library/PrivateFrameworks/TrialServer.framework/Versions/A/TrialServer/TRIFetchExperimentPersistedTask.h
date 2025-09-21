@class NSString, TRIPersistedTaskAttribution;

@interface TRIFetchExperimentPersistedTask : TRIPBMessage

@property (copy, nonatomic) NSString *experimentId;
@property (nonatomic) char hasExperimentId;
@property (nonatomic) int deploymentId;
@property (nonatomic) char hasDeploymentId;
@property (retain, nonatomic) TRIPersistedTaskAttribution *taskAttribution;
@property (nonatomic) char hasTaskAttribution;
@property (nonatomic) int retryCount;
@property (nonatomic) char hasRetryCount;

+ (id)descriptor;

@end
