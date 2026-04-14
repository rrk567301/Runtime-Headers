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

+ (id)sharedSpotlightKnowledgeTrialClient;
+ (id)currentTrialManagerForClient:(id)a0;
+ (id)trialManagerForNamespaceId:(id)a0;
+ (void)setTrialUpdateHandler:(id /* block */)a0;
+ (BOOL)isValidNamespace:(unsigned int)a0 forClient:(id)a1;
+ (id)sharedSpotlightTrialClient;
+ (id)getTTRLogsForClient:(id)a0;
+ (id)resolveMultipleSpotlightExperiments;
+ (id)sharedSpotlightKnowledgeTrialManager;
+ (id)sharedSpotlightRankingTrialManager;
+ (id)sharedSpotlightPolicyTrialManager;
+ (void)setTrialOverridePath;
+ (id)sharedSpotlightUITrialManager;
+ (BOOL)didAllNamespacesLoadForClient:(id)a0;
+ (id)sharedSpotlightMailTrialManager;
+ (id)sharedSpotlightModelTrialManager;

- (id)getLevelForFactor:(id)a0;
- (BOOL)hasActiveExperiment;
- (id)getFactorDictionary;
- (id)initWithNameSpace:(unsigned int)a0 forClient:(id)a1;
- (BOOL)hasActiveRollout;
- (id)description;
- (void)loadWithUpdateHandler:(id /* block */)a0;
- (void)refreshTrackingId;
- (void).cxx_destruct;
- (BOOL)hasOverride;

@end
