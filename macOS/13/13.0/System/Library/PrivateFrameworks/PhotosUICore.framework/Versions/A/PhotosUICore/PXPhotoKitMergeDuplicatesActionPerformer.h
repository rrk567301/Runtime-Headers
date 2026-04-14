@class PXSelectionSnapshot;

@interface PXPhotoKitMergeDuplicatesActionPerformer : PXPhotoKitAssetActionPerformer {
    PXSelectionSnapshot *_mergeableSelection;
}

+ (id)localizedTitleForUseCase:(unsigned long long)a0 actionManager:(id)a1;
+ (BOOL)canPerformWithActionManager:(id)a0;
+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2;
+ (BOOL)canPerformOnSubsetOfSelection;
+ (BOOL)shouldEnableWithActionManager:(id)a0;
+ (BOOL)canPerformWithSelectionSnapshot:(id)a0 person:(id)a1;

- (void).cxx_destruct;
- (void)_clearSelection;
- (void)completeUserInteractionTaskWithSuccess:(BOOL)a0 error:(id)a1;
- (void)performUserInteractionTask;
- (void)performBackgroundTask;
- (BOOL)shouldExitSelectModeForState:(unsigned long long)a0;
- (BOOL)canPresentAlertInBackgroudState;
- (void)completeBackgroundTaskWithSuccess:(BOOL)a0 error:(id)a1;
- (void)_presentDuplicatesTypeDialogWithIdenticalCount:(long long)a0 totalCount:(long long)a1 completion:(id /* block */)a2;
- (void)performMergeWithSelection:(id)a0 localizedMessage:(id)a1 onlyIdenticalItemsSelected:(BOOL)a2;
- (void)_presentGenericFailureAlertAndCompleteBackgroundTaskWithError:(id)a0;

@end
