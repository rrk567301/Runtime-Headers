@class PXPhotosViewUXInteraction, PXPhotosViewModel, PXSelectionContainer;

@interface PXPhotosViewUXInteractionHelper : NSObject <PXPhotosViewInteractionHelper>

@property (readonly, weak, nonatomic) PXPhotosViewUXInteraction *interaction;
@property (readonly, nonatomic) PXPhotosViewModel *viewModel;
@property (readonly, nonatomic) PXSelectionContainer *selectionContainer;

- (void).cxx_destruct;
- (id)init;
- (void)clearContextMenuOverrideForResponder:(id)a0;
- (id)initWithInteraction:(id)a0 viewModel:(id)a1;
- (BOOL)presentContextMenuForEvent:(id)a0 withAnchorView:(id)a1 responder:(id)a2;

@end
