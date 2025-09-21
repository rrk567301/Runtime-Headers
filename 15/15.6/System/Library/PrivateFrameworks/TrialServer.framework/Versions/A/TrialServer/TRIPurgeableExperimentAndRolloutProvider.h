@class NSString, TRIExperimentDatabase, TRIRolloutDatabase;
@protocol TRIPaths;

@interface TRIPurgeableExperimentAndRolloutProvider : NSObject <TRIPurgeableExperimentAndRolloutProviding> {
    id<TRIPaths> _paths;
    TRIExperimentDatabase *_experimentDatabase;
    TRIRolloutDatabase *_rolloutDatabase;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)purgeableRolloutsFromNamespaces:(id)a0 eagerFactors:(id)a1 overriddenFactors:(id)a2;
- (char)_checkForPurgeableFactorsInEagerFactors:(id)a0 factorLevel:(id)a1 legacyPath:(id)a2 overriddenFactors:(id)a3 purgeableNamespaces:(id)a4 returningAssets:(id)a5;
- (char)_factorPackSetHasPurgeableFactorsWithFPSId:(id)a0 eagerFactors:(id)a1 overriddenFactors:(id)a2 purgeableNamespaces:(id)a3 returningAssets:(id)a4;
- (void)_purgeablesForExperimentsFromNamespaces:(id)a0 eagerFactors:(id)a1 overriddenFactors:(id)a2 shouldGenerateAssetPaths:(char)a3 purgeableExperiments:(id *)a4 purgeableAssets:(id *)a5;
- (void)_purgeablesForRolloutsFromNamespaces:(id)a0 eagerFactors:(id)a1 overriddenFactors:(id)a2 shouldGenerateAssetPaths:(char)a3 purgeableExperiments:(id *)a4 purgeableAssets:(id *)a5;
- (id)initWithPaths:(id)a0 experimentDatabase:(id)a1 rolloutDatabase:(id)a2;
- (id)purgeableExperimentAssetsFromNamespaces:(id)a0 eagerFactors:(id)a1 overriddenFactors:(id)a2;
- (id)purgeableExperimentsFromNamespaces:(id)a0 eagerFactors:(id)a1 overriddenFactors:(id)a2;
- (id)purgeableRolloutAssetsFromNamespaces:(id)a0 eagerFactors:(id)a1 overriddenFactors:(id)a2;

@end
