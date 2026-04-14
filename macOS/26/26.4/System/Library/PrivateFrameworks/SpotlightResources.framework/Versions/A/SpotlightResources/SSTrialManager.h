@class NSString, TRIClient, NSDictionary;

@interface SSTrialManager : NSObject {
    TRIClient *_trialClient;
    NSString *_namespaceName;
    NSDictionary *_cachedValuesForFactor;
    BOOL _hasActiveExperiment;
    BOOL _hasRollout;
    BOOL _hasOverride;
}

@property (nonatomic) BOOL wasLoadedSinceLaunch;
@property (readonly, nonatomic) NSString *client;
@property (readonly, nonatomic) NSString *namespaceId;
@property (readonly, nonatomic) NSString *experimentId;
@property (readonly, nonatomic) NSString *treatmentId;
@property (readonly, nonatomic) NSString *rolloutId;
@property (readonly, nonatomic) int experimentDeploymentId;
@property (readonly, nonatomic) int rolloutDeploymentId;

+ (id)trialManagerForNamespaceName:(id)a0;
+ (id)sharedSpotlightPolicyTrialManager;
+ (id)sharedSpotlightModelTrialManager;
+ (id)getTTRLogsForClient:(id)a0;
+ (id)sharedSpotlightRankingTrialManager;
+ (void)setTrialOverridePath;
+ (id)sharedSpotlightKnowledgeTrialClient;
+ (id)currentTrialManagerForClient:(id)a0;
+ (id)sharedSpotlightKnowledgeTrialManager;
+ (id)sharedSpotlightTrialClient;
+ (id)sharedSpotlightUITrialManager;
+ (BOOL)isValidNamespace:(unsigned int)a0 forClient:(id)a1;
+ (void)setTrialUpdateHandler:(id /* block */)a0;
+ (id)trialManagerForNamespaceId:(id)a0;
+ (id)resolveMultipleSpotlightExperiments;
+ (id)sharedSpotlightMailTrialManager;
+ (BOOL)didAllNamespacesLoadForClient:(id)a0;

- (void)loadWithUpdateHandler:(id /* block */)a0;
- (id)getFactorDictionary;
- (BOOL)hasActiveExperiment;
- (id)initWithNameSpace:(unsigned int)a0 forClient:(id)a1;
- (void).cxx_destruct;
- (id)getLevelForFactor:(id)a0;
- (void)refreshTrackingId;
- (BOOL)hasOverride;
- (BOOL)hasActiveRollout;
- (id)description;

@end
