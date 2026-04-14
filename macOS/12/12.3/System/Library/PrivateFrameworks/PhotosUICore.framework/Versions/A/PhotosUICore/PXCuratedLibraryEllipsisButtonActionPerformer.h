@class PXGLayout, PXCuratedLibraryActionManager;

@interface PXCuratedLibraryEllipsisButtonActionPerformer : PXCuratedLibraryAssetCollectionActionPerformer

@property (readonly, nonatomic) PXCuratedLibraryActionManager *actionManager;
@property (weak, nonatomic) PXGLayout *layout;

- (void).cxx_destruct;
- (void)performUserInteractionTask;
- (BOOL)performerResetsAfterCompletion;
- (BOOL)presentsMenu;
- (id)initWithActionType:(id)a0 viewModel:(id)a1 assetCollectionReference:(id)a2;
- (id)initWithViewModel:(id)a0 assetCollectionReference:(id)a1 actionManager:(id)a2;
- (void)_presentToUserOptionsFromActionPerformers:(id)a0;
- (id)buttonSpriteReference;

@end
