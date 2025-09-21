@class PXSelectionSnapshot;

@interface PXPhotoKitMergeDuplicatesActionPerformer : PXPhotoKitAssetActionPerformer {
    PXSelectionSnapshot *_mergeableSelection;
}

+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2 socialGroup:(id)a3;
+ (BOOL)canPerformOnSubsetOfSelection;
+ (BOOL)canPerformWithSelectionSnapshot:(id)a0 person:(id)a1 socialGroup:(id)a2;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 actionManager:(id)a1;
+ (BOOL)providesCanPerformError;
+ (BOOL)canPerformWithActionManager:(id)a0 error:(out id *)a1;
+ (BOOL)shouldEnableWithActionManager:(id)a0;

- (void).cxx_destruct;
- (void)_clearSelection;
- (void)completeBackgroundTaskWithSuccess:(BOOL)a0 error:(id)a1;
- (void)completeUserInteractionTaskWithSuccess:(BOOL)a0 error:(id)a1;
- (void)performBackgroundTask;
- (void)performUserInteractionTask;
- (BOOL)canPresentAlertInBackgroudState;
- (void)_presentDuplicatesTypeDialogWithIdenticalCount:(long long)a0 totalCount:(long long)a1 completion:(id /* block */)a2;
- (void)_presentGenericFailureAlertAndCompleteBackgroundTaskWithError:(id)a0;
- (void)performMergeWithSelection:(id)a0 localizedMessage:(id)a1 onlyIdenticalItemsSelected:(BOOL)a2;
- (BOOL)shouldExitSelectModeForState:(unsigned long long)a0;

@end
