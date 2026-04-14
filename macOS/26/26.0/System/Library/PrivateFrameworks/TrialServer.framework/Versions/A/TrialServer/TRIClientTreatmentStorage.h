@protocol TRIAssetExtracting, TRIPaths;

@interface TRIClientTreatmentStorage : NSObject {
    id<TRIPaths> _paths;
    id<TRIAssetExtracting> _extractor;
}

+ (id)relPathForMAReferenceWithFactorName:(id)a0;

- (id)_assetURLForFactor:(id)a0 treatmentId:(id)a1;
- (BOOL)_deleteOnDemandAssetsWithFactorNames:(id)a0 treatment:(id)a1 namespace:(id)a2 inUseAssetDeletionBehavior:(unsigned char)a3;
- (id)loadTreatmentWithTreatmentId:(id)a0 isFilePresent:(BOOL *)a1;
- (BOOL)_saveNamespacePartitionedTreatmentsForTreatment:(id)a0 forNamespaceNames:(id)a1;
- (id)saveTreatment:(id)a0;
- (BOOL)removeUnreferencedTreatmentsWithRemovedCount:(unsigned int *)a0;
- (BOOL)_removeRolloutWithDescriptor:(id)a0 descriptorDir:(id)a1 treatmentLayer:(unsigned long long)a2 namespaceName:(id)a3;
- (BOOL)_linkAssetsUpdatingTreatment:(id)a0;
- (id)urlForTreatmentWithTreatmentId:(id)a0;
- (BOOL)_removeFactorsWithTreatmentId:(id)a0 namespaceName:(id)a1;
- (BOOL)_resolveAssetPathsInTreatment:(id)a0 usingReferenceURL:(id)a1;
- (id)_baseUrlForTreatment:(id)a0 namespaceName:(id)a1;
- (BOOL)_savePersistedTreatment:(id)a0;
- (id)init;
- (id)updateSavedTreatmentWithTreatmentId:(id)a0 deletingAssetsWithFactorNames:(id)a1 forNamespaceName:(id)a2 inUseAssetDeletionBehavior:(unsigned char)a3;
- (id)_linkAssetWithId:(id)a0 treatmentId:(id)a1 assetStore:(id)a2 factor:(id)a3;
- (id)initWithPaths:(id)a0;
- (BOOL)removeTreatmentWithTreatmentId:(id)a0;
- (id)urlForFactorsWithTreatmentId:(id)a0 namespaceName:(id)a1;
- (BOOL)_linkAssetsWithIds:(id)a0 updatingTreatment:(id)a1;
- (BOOL)_removeFactorsWithURL:(id)a0;
- (id)_collectTreatments;
- (id)updateSavedTreatmentWithTreatmentId:(id)a0 deletingAssetsWithFactorNames:(id)a1 forNamespaceName:(id)a2;
- (id)updateSavedTreatmentWithTreatmentId:(id)a0 linkingNewAssetIds:(id)a1 forNamespaceNames:(id)a2;
- (id)_copyFileFromURL:(id)a0 to:(id)a1;
- (id)initWithPaths:(id)a0 extractor:(id)a1;
- (void).cxx_destruct;
- (BOOL)removeTreatmentFromLayer:(unsigned long long)a0 withNamespaceName:(id)a1 upgradeNCVs:(id)a2;

@end
