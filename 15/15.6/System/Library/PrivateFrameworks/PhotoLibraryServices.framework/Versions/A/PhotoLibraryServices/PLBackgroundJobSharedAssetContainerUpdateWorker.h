@interface PLBackgroundJobSharedAssetContainerUpdateWorker : PLBackgroundJobWorker

+ (char)_isTokenInvalidError:(id)a0;
+ (id)_lastProcessingTokenFromLibrary:(id)a0;
+ (id)_memoriesContainingAssetIds:(id)a0 inContext:(id)a1 error:(id *)a2;
+ (void)_setLastProcessingToken:(id)a0 library:(id)a1;
+ (id)_suggestionsContainingAssetIds:(id)a0 inContext:(id)a1 error:(id *)a2;
+ (id)_transactionIteratorSinceTokenIfValid:(id)a0 library:(id)a1 error:(id *)a2;
+ (char)_updateSharingCompositionForMemoriesContainingAssetIDs:(id)a0 inContext:(id)a1 error:(id *)a2;
+ (char)_updateSharingCompositionForSuggestionsContainingAssetIDs:(id)a0 inContext:(id)a1 error:(id *)a2;
+ (char)performWorkOnAllItemsInContext:(id)a0 withError:(id *)a1;
+ (char)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;

- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (id)workItemsNeedingProcessingInLibrary:(id)a0;

@end
