@interface PLBackgroundJobSharedAssetContainerUpdateWorker : PLBackgroundJobWorker

+ (BOOL)_updateSharingCompositionForSuggestionsContainingAssetIDs:(id)a0 inContext:(id)a1 error:(id *)a2;
+ (id)_memoriesContainingAssetIds:(id)a0 inContext:(id)a1 error:(id *)a2;
+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;
+ (BOOL)_updateSharingCompositionForMemoriesContainingAssetIDs:(id)a0 inContext:(id)a1 error:(id *)a2;
+ (long long)_updatedProcessingStatusForLibrary:(id)a0;
+ (BOOL)performWorkOnAllItemsInContext:(id)a0 withError:(id *)a1;
+ (id)_suggestionsContainingAssetIds:(id)a0 inContext:(id)a1 error:(id *)a2;

- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (id)workItemsNeedingProcessingInLibrary:(id)a0 validCriterias:(id)a1;
- (unsigned long long)type;

@end
