@class NSString, TRIPersistedTaskAttribution, TRIPersistedTaskCapabilityModifier;

@interface TRIFetchTreatmentPersistedTask : TRIPBMessage

@property (copy, nonatomic) NSString *experimentId;
@property (nonatomic) char hasExperimentId;
@property (nonatomic) int deploymentId;
@property (nonatomic) char hasDeploymentId;
@property (copy, nonatomic) NSString *treatmentId;
@property (nonatomic) char hasTreatmentId;
@property (nonatomic) int retryCount;
@property (nonatomic) char hasRetryCount;
@property (retain, nonatomic) TRIPersistedTaskAttribution *taskAttribution;
@property (nonatomic) char hasTaskAttribution;
@property (retain, nonatomic) TRIPersistedTaskCapabilityModifier *capabilityModifier;
@property (nonatomic) char hasCapabilityModifier;

+ (id)descriptor;

@end
