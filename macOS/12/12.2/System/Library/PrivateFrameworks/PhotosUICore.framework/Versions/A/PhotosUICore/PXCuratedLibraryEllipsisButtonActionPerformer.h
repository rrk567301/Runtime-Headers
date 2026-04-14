@class PXGLayout, PXCuratedLibraryActionManager;

@interface PXCuratedLibraryEllipsisButtonActionPerformer : PXCuratedLibraryAssetCollectionActionPerformer

@property (readonly, nonatomic) PXCuratedLibraryActionManager *actionManager;
@property (weak, nonatomic) PXGLayout *layout;

- (void).cxx_destruct;
- (void)performUserInteractionTask;
- (BOOL)presentsMenu;
- (BOOL)performerResetsAfterCompletion;
- (id)initWithActionType:(id)a0 viewModel:(id)a1 assetCollectionReference:(id)a2;
- (id)initWithViewModel:(id)a0 assetCollectionReference:(id)a1 actionManager:(id)a2;
- (id)buttonSpriteReference;
- (void)_presentToUserOptionsFromActionPerformers:(id)a0;

@end
