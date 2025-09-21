@class NSString, TRIPersistedTaskAttribution;

@interface TRIRolloutTargetingPersistedTask : TRIPBMessage

@property (copy, nonatomic) NSString *rolloutId;
@property (nonatomic) char hasRolloutId;
@property (nonatomic) int deploymentId;
@property (nonatomic) char hasDeploymentId;
@property (nonatomic) char includeDependencies;
@property (nonatomic) char hasIncludeDependencies;
@property (retain, nonatomic) TRIPersistedTaskAttribution *taskAttribution;
@property (nonatomic) char hasTaskAttribution;
@property (nonatomic) int triggerEvent;
@property (nonatomic) char hasTriggerEvent;

+ (id)descriptor;

@end
