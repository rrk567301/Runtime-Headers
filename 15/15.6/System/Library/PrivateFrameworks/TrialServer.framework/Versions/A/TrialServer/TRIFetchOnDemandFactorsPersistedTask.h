@class NSString, TRIPersistedTaskCapabilityModifier, TRIPersistedTaskAttribution, NSMutableArray;

@interface TRIFetchOnDemandFactorsPersistedTask : TRIPBMessage

@property (copy, nonatomic) NSString *namespaceName;
@property (nonatomic) char hasNamespaceName;
@property (nonatomic) int retryCount;
@property (nonatomic) char hasRetryCount;
@property (copy, nonatomic) NSString *notificationKey;
@property (nonatomic) char hasNotificationKey;
@property (retain, nonatomic) TRIPersistedTaskAttribution *taskAttribution;
@property (nonatomic) char hasTaskAttribution;
@property (retain, nonatomic) NSMutableArray *treatmentAssetIndexesArray;
@property (readonly, nonatomic) unsigned long long treatmentAssetIndexesArray_Count;
@property (retain, nonatomic) NSMutableArray *factorPackAssetIdsArray;
@property (readonly, nonatomic) unsigned long long factorPackAssetIdsArray_Count;
@property (copy, nonatomic) NSString *experimentId;
@property (nonatomic) char hasExperimentId;
@property (copy, nonatomic) NSString *rolloutId;
@property (nonatomic) char hasRolloutId;
@property (nonatomic) int deploymentId;
@property (nonatomic) char hasDeploymentId;
@property (retain, nonatomic) NSMutableArray *rolloutFactorNamesArray;
@property (readonly, nonatomic) unsigned long long rolloutFactorNamesArray_Count;
@property (retain, nonatomic) TRIPersistedTaskCapabilityModifier *capabilityModifier;
@property (nonatomic) char hasCapabilityModifier;

+ (id)descriptor;

@end
