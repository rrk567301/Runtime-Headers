@class NSString, TRIPersistedTaskAttribution, TRIPersistedTaskCapabilityModifier;

@interface TRIFetchFactorPackSetPersistedTask : TRIPBMessage

@property (copy, nonatomic) NSString *factorPackSetId;
@property (nonatomic) char hasFactorPackSetId;
@property (retain, nonatomic) TRIPersistedTaskAttribution *taskAttribution;
@property (nonatomic) char hasTaskAttribution;
@property (nonatomic) int retryCount;
@property (nonatomic) char hasRetryCount;
@property (copy, nonatomic) NSString *rolloutId;
@property (nonatomic) char hasRolloutId;
@property (nonatomic) int deploymentId;
@property (nonatomic) char hasDeploymentId;
@property (retain, nonatomic) TRIPersistedTaskCapabilityModifier *capabilityModifier;
@property (nonatomic) char hasCapabilityModifier;
@property (copy, nonatomic) NSString *bmltId;
@property (nonatomic) char hasBmltId;
@property (nonatomic) int construct;
@property (nonatomic) char hasConstruct;
@property (copy, nonatomic) NSString *experimentId;
@property (nonatomic) char hasExperimentId;
@property (copy, nonatomic) NSString *treatmentId;
@property (nonatomic) char hasTreatmentId;
@property (nonatomic) char isCounterfactualTreatment;
@property (nonatomic) char hasIsCounterfactualTreatment;

+ (id)descriptor;

@end
