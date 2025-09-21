@class NSString, TRIPBTimestamp, TRIPersistedTaskAttribution;

@interface TRIDeactivateTreatmentPersistedTask : TRIPBMessage

@property (copy, nonatomic) NSString *experimentId;
@property (nonatomic) char hasExperimentId;
@property (nonatomic) char failOnUnrecognizedExperiment;
@property (nonatomic) char hasFailOnUnrecognizedExperiment;
@property (retain, nonatomic) TRIPBTimestamp *startTimestamp;
@property (nonatomic) char hasStartTimestamp;
@property (nonatomic) int retryCount;
@property (nonatomic) char hasRetryCount;
@property (nonatomic) int triggerEvent;
@property (nonatomic) char hasTriggerEvent;
@property (nonatomic) int deploymentId;
@property (nonatomic) char hasDeploymentId;
@property (retain, nonatomic) TRIPersistedTaskAttribution *taskAttribution;
@property (nonatomic) char hasTaskAttribution;

+ (id)descriptor;

@end
