@class TRITaskOptions, NSString, TRIPBTimestamp, TRIPersistedTaskAttribution, TRIPersistedTaskCapabilityModifier, NSMutableDictionary;

@interface TRIActivateTreatmentPersistedTask : TRIPBMessage

@property (copy, nonatomic) NSString *experimentId;
@property (nonatomic) char hasExperimentId;
@property (nonatomic) int deploymentId;
@property (nonatomic) char hasDeploymentId;
@property (copy, nonatomic) NSString *treatmentId;
@property (nonatomic) char hasTreatmentId;
@property (retain, nonatomic) TRIPBTimestamp *startTimestamp;
@property (nonatomic) char hasStartTimestamp;
@property (retain, nonatomic) TRIPBTimestamp *endTimestamp;
@property (nonatomic) char hasEndTimestamp;
@property (nonatomic) int retryCount;
@property (nonatomic) char hasRetryCount;
@property (retain, nonatomic) TRIPersistedTaskAttribution *taskAttribution;
@property (nonatomic) char hasTaskAttribution;
@property (nonatomic) char requiresTreatmentInstallation;
@property (nonatomic) char hasRequiresTreatmentInstallation;
@property (retain, nonatomic) TRIPersistedTaskCapabilityModifier *capabilityModifier;
@property (nonatomic) char hasCapabilityModifier;
@property (retain, nonatomic) TRITaskOptions *taskOptions;
@property (nonatomic) char hasTaskOptions;
@property (copy, nonatomic) NSString *factorPackSetId;
@property (nonatomic) char hasFactorPackSetId;
@property (retain, nonatomic) NSMutableDictionary *counterfactualTreatments;
@property (readonly, nonatomic) unsigned long long counterfactualTreatments_Count;

+ (id)descriptor;

@end
