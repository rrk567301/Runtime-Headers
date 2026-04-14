@interface PhotosUICore.PhotoKitClearRecentCollectionAssetsActionPerformer : PXPhotoKitAssetActionPerformer {
    void /* unknown type, empty encoding */ assetsToProcess;
}

+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2 socialGroup:(id)a3;
+ (BOOL)canPerformOnSubsetOfSelection;
+ (BOOL)canPerformWithSelectionSnapshot:(id)a0 person:(id)a1 socialGroup:(id)a2;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 actionManager:(id)a1;
+ (id)systemImageNameForActionManager:(id)a0;
+ (BOOL)canPerformOnImplicitSelectionInContainerCollection:(id)a0;

- (void).cxx_destruct;
- (id)initWithActionType:(id)a0;
- (void)performBackgroundTask;
- (void)performUserInteractionTask;

@end
