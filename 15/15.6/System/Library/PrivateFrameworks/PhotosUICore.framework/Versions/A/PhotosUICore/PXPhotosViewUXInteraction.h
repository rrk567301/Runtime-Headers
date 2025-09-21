@class PXZoomablePhotosInteraction, NSString, PXPhotosViewUXInteractionResponder, PXPhotosContentController, PXGView, NSViewController, PXPhotosViewModel, PXSelectionContainer;

@interface PXPhotosViewUXInteraction : PXPhotosViewInteraction <PXPhotosViewUXInteractionResponderDelegate>

@property (retain, nonatomic) PXPhotosViewUXInteractionResponder *responder;
@property (readonly, nonatomic) PXSelectionContainer *selectionContainer;
@property (readonly, nonatomic) long long gridSelectionContext;
@property (readonly, nonatomic) PXPhotosViewModel *viewModel;
@property (readonly, nonatomic) PXGView *view;
@property (readonly, nonatomic) PXPhotosContentController *contentController;
@property (readonly, nonatomic) NSViewController *presentingViewController;
@property (readonly, nonatomic) NSViewController *workspaceController;
@property (readonly, nonatomic) PXZoomablePhotosInteraction *zoomablePhotosInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)validateMenuItem:(id)a0;
- (void)_setupGesturesWithView;
- (id)decorationViewForSelectedAnchorAsset;
- (char)itemWasDoubleClickedWithHitTestResult:(id)a0;
- (char)itemWasRightClickedWithHitTestResult:(id)a0 event:(id)a1;
- (char)itemWasSingleClickedWithHitTestResult:(id)a0;
- (char)mergeDuplicatesWithHitTestResult:(id)a0;
- (void)setWorkspaceController:(id)a0;
- (void)setZoomablePhotosInteraction:(id)a0;
- (char)showEditorialBrowserWithHitTestResult:(id)a0;
- (void)updateRolloverDecorationViewWithEvent:(id)a0;
- (void)viewDidChange;
- (void)viewWillChange;

@end
