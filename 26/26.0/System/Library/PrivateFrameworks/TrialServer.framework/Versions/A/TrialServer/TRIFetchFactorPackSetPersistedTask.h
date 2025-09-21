@class NSString, TRIPersistedTaskAttribution, TRIPersistedTaskCapabilityModifier;

@interface TRIFetchFactorPackSetPersistedTask : TRIPBMessage

@property (copy, nonatomic) NSString *factorPackSetId;
@property (nonatomic) BOOL hasFactorPackSetId;
@property (retain, nonatomic) TRIPersistedTaskAttribution *taskAttribution;
@property (nonatomic) BOOL hasTaskAttribution;
@property (nonatomic) int retryCount;
@property (nonatomic) BOOL hasRetryCount;
@property (copy, nonatomic) NSString *rolloutId;
@property (nonatomic) BOOL hasRolloutId;
@property (nonatomic) int deploymentId;
@property (nonatomic) BOOL hasDeploymentId;
@property (retain, nonatomic) TRIPersistedTaskCapabilityModifier *capabilityModifier;
@property (nonatomic) BOOL hasCapabilityModifier;
@property (nonatomic) int construct;
@property (nonatomic) BOOL hasConstruct;
@property (copy, nonatomic) NSString *experimentId;
@property (nonatomic) BOOL hasExperimentId;
@property (copy, nonatomic) NSString *treatmentId;
@property (nonatomic) BOOL hasTreatmentId;
@property (nonatomic) BOOL isCounterfactualTreatment;
@property (nonatomic) BOOL hasIsCounterfactualTreatment;

+ (id)descriptor;

@end
