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

+ (id)sharedSpotlightTrialClient;
+ (void)setTrialOverridePath;
+ (id)trialManagerForNamespaceId:(id)a0;
+ (id)sharedSpotlightPolicyTrialManager;
+ (id)sharedSpotlightKnowledgeTrialManager;
+ (BOOL)isValidNamespace:(unsigned int)a0 forClient:(id)a1;
+ (id)sharedSpotlightMailTrialManager;
+ (id)sharedSpotlightKnowledgeTrialClient;
+ (void)setTrialUpdateHandler:(id /* block */)a0;
+ (BOOL)didAllNamespacesLoadForClient:(id)a0;
+ (id)sharedSpotlightUITrialManager;
+ (id)sharedSpotlightRankingTrialManager;
+ (id)getTTRLogsForClient:(id)a0;
+ (id)resolveMultipleSpotlightExperiments;
+ (id)sharedSpotlightModelTrialManager;
+ (id)currentTrialManagerForClient:(id)a0;

- (id)getLevelForFactor:(id)a0;
- (void)refreshTrackingId;
- (id)getFactorDictionary;
- (void).cxx_destruct;
- (BOOL)hasActiveExperiment;
- (id)description;
- (BOOL)hasActiveRollout;
- (BOOL)hasOverride;
- (void)loadWithUpdateHandler:(id /* block */)a0;
- (id)initWithNameSpace:(unsigned int)a0 forClient:(id)a1;

@end
