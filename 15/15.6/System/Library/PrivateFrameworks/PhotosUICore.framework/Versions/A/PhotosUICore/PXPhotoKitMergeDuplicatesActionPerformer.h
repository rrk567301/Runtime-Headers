@class PXSelectionSnapshot;

@interface PXPhotoKitMergeDuplicatesActionPerformer : PXPhotoKitAssetActionPerformer {
    PXSelectionSnapshot *_mergeableSelection;
}

+ (char)canPerformWithActionManager:(id)a0;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 actionManager:(id)a1;
+ (char)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2 socialGroup:(id)a3;
+ (char)canPerformOnSubsetOfSelection;
+ (char)canPerformWithSelectionSnapshot:(id)a0 person:(id)a1 socialGroup:(id)a2;
+ (char)shouldEnableWithActionManager:(id)a0;

- (void).cxx_destruct;
- (void)_clearSelection;
- (void)completeUserInteractionTaskWithSuccess:(char)a0 error:(id)a1;
- (void)performUserInteractionTask;
- (char)canPresentAlertInBackgroudState;
- (void)_presentDuplicatesTypeDialogWithIdenticalCount:(long long)a0 totalCount:(long long)a1 completion:(id /* block */)a2;
- (void)_presentGenericFailureAlertAndCompleteBackgroundTaskWithError:(id)a0;
- (void)completeBackgroundTaskWithSuccess:(char)a0 error:(id)a1;
- (void)performBackgroundTask;
- (void)performMergeWithSelection:(id)a0 localizedMessage:(id)a1 onlyIdenticalItemsSelected:(char)a2;
- (char)shouldExitSelectModeForState:(unsigned long long)a0;

@end
