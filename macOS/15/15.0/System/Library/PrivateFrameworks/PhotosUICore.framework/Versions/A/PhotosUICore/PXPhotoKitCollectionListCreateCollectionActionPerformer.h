@class PHCollection;

@interface PXPhotoKitCollectionListCreateCollectionActionPerformer : PXPhotoKitCollectionListActionPerformer

@property (copy, nonatomic) id /* block */ finishedPickingBlock;
@property (retain, nonatomic) PHCollection *createdCollection;

+ (BOOL)canPerformOnCollectionList:(id)a0;
+ (id)localizedTitleForActionType:(id)a0 collectionList:(id)a1;
+ (id)systemImageNameForCollectionList:(id)a0 actionType:(id)a1;

- (void).cxx_destruct;
- (void)performUserInteractionTask;
- (void)_didChooseAlbumTitle:(id)a0 completionHandler:(id /* block */)a1;
- (void)_presentPickerWithValidAlbumTitle:(id)a0 completionHandler:(id /* block */)a1;
- (id)_validateNewCollectionTitle:(id)a0;
- (void)createAlbumWithAssets:(id)a0 albumTitle:(id)a1;
- (void)presentSetupUIForAlbumCreationWithCompletionHandler:(id /* block */)a0;

@end
