@class NSString, TRIClient, NSDictionary;

@interface SSTrialManager : NSObject {
    TRIClient *_trialClient;
    NSString *_namespaceName;
    NSDictionary *_cachedValuesForFactor;
    char _hasActiveExperiment;
    char _hasRollout;
    char _hasOverride;
}

@property (nonatomic) char wasLoadedSinceLaunch;
@property (readonly, nonatomic) NSString *client;
@property (readonly, nonatomic) NSString *namespaceId;
@property (readonly, nonatomic) NSString *experimentId;
@property (readonly, nonatomic) NSString *treatmentId;
@property (readonly, nonatomic) NSString *rolloutId;
@property (readonly, nonatomic) int experimentDeploymentId;
@property (readonly, nonatomic) int rolloutDeploymentId;

+ (id)sharedSpotlightMailTrialManager;
+ (id)currentTrialManagerForClient:(id)a0;
+ (char)didAllNamespacesLoadForClient:(id)a0;
+ (id)getTTRLogsForClient:(id)a0;
+ (char)isValidNamespace:(unsigned int)a0 forClient:(id)a1;
+ (id)resolveMultipleSpotlightExperiments;
+ (void)setTrialOverridePath;
+ (void)setTrialUpdateHandler:(id /* block */)a0;
+ (id)sharedSpotlightKnowledgeTrialClient;
+ (id)sharedSpotlightKnowledgeTrialManager;
+ (id)sharedSpotlightModelTrialManager;
+ (id)sharedSpotlightPolicyTrialManager;
+ (id)sharedSpotlightRankingTrialManager;
+ (id)sharedSpotlightTrialClient;
+ (id)sharedSpotlightUITrialManager;

- (id)description;
- (void).cxx_destruct;
- (char)hasOverride;
- (id)getFactorDictionary;
- (id)getLevelForFactor:(id)a0;
- (char)hasActiveExperiment;
- (char)hasActiveRollout;
- (id)initWithNameSpace:(unsigned int)a0 forClient:(id)a1;
- (void)loadWithUpdateHandler:(id /* block */)a0;
- (void)refreshTrackingId;

@end
