@class PHCollectionList, PHCollection;

@interface PXCollectionListActionPerformer : PXActionPerformer

@property (copy, nonatomic) id /* block */ finishedPickingBlock;
@property (retain, nonatomic) PHCollection *createdCollection;
@property (readonly, nonatomic) PHCollectionList *collectionList;

+ (id)localizedTitleForActionType:(id)a0;
+ (BOOL)canPerformActionForCollectionList:(id)a0;

- (void).cxx_destruct;
- (void)performUserInteractionTask;
- (void)_didChooseAlbumTitle:(id)a0 completionHandler:(id /* block */)a1;
- (void)_presentPickerWithValidAlbumTitle:(id)a0 completionHandler:(id /* block */)a1;
- (id)_validateNewCollectionTitle:(id)a0;
- (void)createAlbumWithAssets:(id)a0 albumTitle:(id)a1;
- (id)initWithActionType:(id)a0 collectionList:(id)a1;
- (void)presentSetupUIForAlbumCreationWithCompletionHandler:(id /* block */)a0;

@end
