@protocol TRIAssetExtracting, TRIPaths;

@interface TRIClientTreatmentStorage : NSObject {
    id<TRIPaths> _paths;
    id<TRIAssetExtracting> _extractor;
}

+ (id)relPathForMAReferenceWithFactorName:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPaths:(id)a0;
- (id)_assetURLForFactor:(id)a0 treatmentId:(id)a1;
- (char)removeTreatmentWithTreatmentId:(id)a0;
- (id)urlForTreatmentWithTreatmentId:(id)a0;
- (id)_baseUrlForTreatment:(id)a0 namespaceName:(id)a1;
- (id)_collectTreatments;
- (id)_copyFileFromURL:(id)a0 to:(id)a1;
- (id)_defaultsAssetURLForFactor:(id)a0;
- (char)_deleteOnDemandAssetsWithFactorNames:(id)a0 treatment:(id)a1 namespace:(id)a2 forRollouts:(char)a3 inUseAssetDeletionBehavior:(unsigned char)a4;
- (id)_linkAssetWithId:(id)a0 treatmentId:(id)a1 assetStore:(id)a2 factor:(id)a3 forRollouts:(char)a4;
- (char)_linkAssetsUpdatingTreatment:(id)a0;
- (char)_linkAssetsWithIds:(id)a0 updatingTreatment:(id)a1;
- (char)_removeFactorsWithTreatmentId:(id)a0 namespaceName:(id)a1;
- (char)_removeFactorsWithURL:(id)a0;
- (char)_removeRolloutWithDescriptor:(id)a0 descriptorDir:(id)a1 treatmentLayer:(unsigned long long)a2 namespaceName:(id)a3;
- (char)_resolveAssetPathsInTreatment:(id)a0 usingReferenceURL:(id)a1;
- (char)_saveNamespacePartitionedTreatmentsForTreatment:(id)a0 forNamespaceNames:(id)a1 forRollouts:(char)a2;
- (char)_savePersistedTreatment:(id)a0;
- (id)initWithPaths:(id)a0 extractor:(id)a1;
- (id)loadTreatmentWithTreatmentId:(id)a0 isFilePresent:(char *)a1;
- (char)removeTreatmentFromLayer:(unsigned long long)a0 withNamespaceName:(id)a1 upgradeNCVs:(id)a2;
- (char)removeUnreferencedTreatmentsWithRemovedCount:(unsigned int *)a0;
- (id)saveTreatment:(id)a0;
- (id)updateSavedTreatmentWithTreatmentId:(id)a0 deletingAssetsWithFactorNames:(id)a1 forNamespaceName:(id)a2 forRollouts:(char)a3;
- (id)updateSavedTreatmentWithTreatmentId:(id)a0 deletingAssetsWithFactorNames:(id)a1 forNamespaceName:(id)a2 forRollouts:(char)a3 inUseAssetDeletionBehavior:(unsigned char)a4;
- (id)updateSavedTreatmentWithTreatmentId:(id)a0 linkingNewAssetIds:(id)a1 forNamespaceNames:(id)a2;
- (id)urlForDefaultFactorsWithNamespaceName:(id)a0;
- (id)urlForFactorsWithTreatmentId:(id)a0 namespaceName:(id)a1;

@end
