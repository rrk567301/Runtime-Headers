@class NSString, TRIClient, NSDictionary;

@interface SSTrialManager : NSObject {
    TRIClient *_trialClient;
    NSString *_namespaceName;
    NSDictionary *_cachedValuesForFactor;
    BOOL _hasActiveExperiment;
    BOOL _hasDefaultValues;
    BOOL _hasRollout;
    BOOL _client_exclusive;
    BOOL _in_allocation;
}

@property (readonly, nonatomic) NSString *spotlightNamespace;
@property (readonly, nonatomic) NSString *experimentId;
@property (readonly, nonatomic) NSString *rolloutId;

+ (void)loadFactorsForAllSharedTrialManagers;
+ (id)sharedTrialClient;
+ (id)currentTrialManager;
+ (id)sharedModelTrialManager;
+ (id)sharedUITrialManager;
+ (id)sharedRankingTrialManager;
+ (id)sharedPolicyTrialManager;
+ (id)getTTRLogs;

- (id)description;
- (void).cxx_destruct;
- (id)initWithNameSpace:(unsigned int)a0 loadDefaultValues:(BOOL)a1;
- (void)reloadAllFactors;
- (id)getLevelForFactor:(id)a0;
- (id)getStringValueForFactor:(id)a0;
- (double)getDoubleValueForFactor:(id)a0;
- (long long)getLongValueForFactor:(id)a0;
- (BOOL)getBooleanValueForFactor:(id)a0;
- (id)getFilePathForFactor:(id)a0;
- (id)getTreatmentId;
- (void)refreshTrackingId;
- (BOOL)hasActiveExperiment;
- (BOOL)hasActiveRollout;
- (BOOL)getClientOnlyExperiment;
- (BOOL)getInReservedAllocationForExperiment;
- (id)getFactorDictionary;

@end
