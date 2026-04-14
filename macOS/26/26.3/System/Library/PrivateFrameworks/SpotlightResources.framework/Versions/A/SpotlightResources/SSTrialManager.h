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

+ (id)sharedSpotlightPolicyTrialManager;
+ (id)resolveMultipleSpotlightExperiments;
+ (id)sharedSpotlightTrialClient;
+ (id)currentTrialManagerForClient:(id)a0;
+ (BOOL)didAllNamespacesLoadForClient:(id)a0;
+ (id)trialManagerForNamespaceId:(id)a0;
+ (void)setTrialUpdateHandler:(id /* block */)a0;
+ (id)sharedSpotlightMailTrialManager;
+ (BOOL)isValidNamespace:(unsigned int)a0 forClient:(id)a1;
+ (id)getTTRLogsForClient:(id)a0;
+ (id)sharedSpotlightModelTrialManager;
+ (void)setTrialOverridePath;
+ (id)sharedSpotlightRankingTrialManager;
+ (id)sharedSpotlightKnowledgeTrialManager;
+ (id)sharedSpotlightKnowledgeTrialClient;
+ (id)sharedSpotlightUITrialManager;

- (BOOL)hasOverride;
- (id)getLevelForFactor:(id)a0;
- (id)description;
- (id)getFactorDictionary;
- (BOOL)hasActiveExperiment;
- (void)refreshTrackingId;
- (void).cxx_destruct;
- (id)initWithNameSpace:(unsigned int)a0 forClient:(id)a1;
- (BOOL)hasActiveRollout;
- (void)loadWithUpdateHandler:(id /* block */)a0;

@end
