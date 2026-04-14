@class PHCollectionList, PHCollection;
@protocol PXSelectionContainerProvider;

@interface PXCollectionListActionPerformer : PXActionPerformer

@property (retain, nonatomic) PHCollection *createdCollection;
@property (readonly, nonatomic) PHCollectionList *collectionList;
@property (readonly, nonatomic) id<PXSelectionContainerProvider> selectionProvider;

+ (id)localizedTitleForActionType:(id)a0;
+ (id)localizedTitleForActionType:(id)a0 selectionProvider:(id)a1;
+ (BOOL)canPerformActionForCollectionList:(id)a0;

- (void).cxx_destruct;
- (void)performUserInteractionTask;
- (id)initWithActionType:(id)a0 collectionList:(id)a1 selectionProvider:(id)a2;
- (void)presentSetupUIForAlbumCreationWithCompletionHandler:(id /* block */)a0;
- (void)handleCreateSharedAlbum;
- (void)createAlbumWithAssets:(id)a0 albumTitle:(id)a1;

@end
