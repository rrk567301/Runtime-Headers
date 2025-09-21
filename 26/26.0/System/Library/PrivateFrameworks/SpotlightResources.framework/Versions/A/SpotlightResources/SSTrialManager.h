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

+ (id)resolveMultipleSpotlightExperiments;
+ (void)setTrialOverridePath;
+ (id)sharedSpotlightMailTrialManager;
+ (id)sharedSpotlightModelTrialManager;
+ (id)currentTrialManagerForClient:(id)a0;
+ (id)sharedSpotlightUITrialManager;
+ (id)sharedSpotlightKnowledgeTrialManager;
+ (id)sharedSpotlightTrialClient;
+ (void)setTrialUpdateHandler:(id /* block */)a0;
+ (id)sharedSpotlightPolicyTrialManager;
+ (BOOL)isValidNamespace:(unsigned int)a0 forClient:(id)a1;
+ (id)trialManagerForNamespaceId:(id)a0;
+ (id)sharedSpotlightRankingTrialManager;
+ (BOOL)didAllNamespacesLoadForClient:(id)a0;
+ (id)sharedSpotlightKnowledgeTrialClient;
+ (id)getTTRLogsForClient:(id)a0;

- (BOOL)hasOverride;
- (id)getLevelForFactor:(id)a0;
- (id)getFactorDictionary;
- (id)description;
- (void)refreshTrackingId;
- (BOOL)hasActiveExperiment;
- (id)initWithNameSpace:(unsigned int)a0 forClient:(id)a1;
- (BOOL)hasActiveRollout;
- (void)loadWithUpdateHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
