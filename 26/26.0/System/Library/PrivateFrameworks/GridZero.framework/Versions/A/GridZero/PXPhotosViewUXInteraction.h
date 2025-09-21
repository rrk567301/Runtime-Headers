@class NSView, PXZoomablePhotosInteraction, NSString, PXPhotosViewUXInteractionResponder, PXPhotosContentController, PXGView, NSViewController, PXPhotosViewModel;

@interface PXPhotosViewUXInteraction : PXPhotosViewInteraction <PXPhotosViewUXInteractionResponderDelegate>

@property (retain, nonatomic) PXPhotosViewUXInteractionResponder *responder;
@property (readonly, nonatomic) NSView *decorationViewForSelectedAnchorAsset;
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

- (BOOL)validateMenuItem:(id)a0;
- (void).cxx_destruct;
- (void)clearContextMenuOverrideForResponder:(id)a0;
- (BOOL)mergeDuplicatesWithHitTestResult:(id)a0;
- (BOOL)presentContextMenuForEvent:(id)a0 withAnchorView:(id)a1 responder:(id)a2;
- (BOOL)showEditorialBrowserWithHitTestResult:(id)a0;
- (void)_setupGesturesWithView;
- (BOOL)itemWasDoubleClickedWithHitTestResult:(id)a0;
- (BOOL)itemWasRightClickedWithHitTestResult:(id)a0 event:(id)a1;
- (BOOL)itemWasSingleClickedWithHitTestResult:(id)a0;
- (void)setWorkspaceController:(id)a0;
- (void)setZoomablePhotosInteraction:(id)a0;
- (void)updateRolloverDecorationViewWithEvent:(id)a0;
- (void)viewDidChange;
- (void)viewWillChange;

@end
