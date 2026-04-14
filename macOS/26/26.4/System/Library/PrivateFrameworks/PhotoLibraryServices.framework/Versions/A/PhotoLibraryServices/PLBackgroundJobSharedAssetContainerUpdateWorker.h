@interface PLBackgroundJobSharedAssetContainerUpdateWorker : PLBackgroundJobWorker

+ (BOOL)_updateSharingCompositionForMemories:(id)a0 inContext:(id)a1 error:(id *)a2;
+ (BOOL)_updateSharingCompositionForSuggestions:(id)a0 inContext:(id)a1 error:(id *)a2;
+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;
+ (BOOL)performWorkOnAllItemsInContext:(id)a0 withError:(id *)a1;
+ (id)_memoriesContainingAssetIds:(id)a0 inContext:(id)a1 error:(id *)a2;
+ (id)_suggestionsContainingAssetIds:(id)a0 inContext:(id)a1 error:(id *)a2;

- (id)workItemsNeedingProcessingInLibrary:(id)a0 validCriterias:(id)a1;
- (id)_workItemForJobFlags:(long long)a0 limit:(unsigned long long)a1 inLibrary:(id)a2;
- (unsigned long long)type;
- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;

@end
