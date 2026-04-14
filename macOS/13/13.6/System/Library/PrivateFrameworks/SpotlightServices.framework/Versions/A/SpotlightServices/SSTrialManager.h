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
+ (id)getTTRLogs;
+ (id)sharedModelTrialManager;
+ (id)sharedPolicyTrialManager;
+ (id)sharedRankingTrialManager;
+ (id)sharedUITrialManager;

- (id)description;
- (void).cxx_destruct;
- (BOOL)getBooleanValueForFactor:(id)a0;
- (BOOL)getClientOnlyExperiment;
- (double)getDoubleValueForFactor:(id)a0;
- (id)getFactorDictionary;
- (id)getFilePathForFactor:(id)a0;
- (BOOL)getInReservedAllocationForExperiment;
- (id)getLevelForFactor:(id)a0;
- (long long)getLongValueForFactor:(id)a0;
- (id)getStringValueForFactor:(id)a0;
- (id)getTreatmentId;
- (BOOL)hasActiveExperiment;
- (BOOL)hasActiveRollout;
- (id)initWithNameSpace:(unsigned int)a0 loadDefaultValues:(BOOL)a1;
- (void)refreshTrackingId;
- (void)reloadAllFactors;

@end
