@interface PLDuplicateDetector : NSObject

+ (id)duplicateDetectorExcludedAssetsPredicateWithPrefix:(id)a0;
+ (id)duplicateDetectorExcludeZeroByteFingerprintPredicateWithProperty:(id)a0;
+ (BOOL)duplicateDetectorCompletedDateBackgroundMigrationAction:(id)a0;
+ (BOOL)duplicateDetectorCompletedPerceptualHashProcessingWithManagedObjectContext:(id)a0;
+ (short)currentSceneAnalysisUmbrellaVersion;
+ (void)postProcessDuplicateSubGroupWithResult:(id)a0 metadataMap:(id)a1 metadataKey:(id)a2 subGroupSplitDecisionBlock:(id /* block */)a3;
+ (id)_postProcessSortOIDs:(id)a0 oidMetadataMap:(id)a1 sortKey:(id)a2;

@end
