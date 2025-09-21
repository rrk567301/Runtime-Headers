@class NSEvent, NSString, NSArray, NSDraggingSession, MUISelectionAndClickInformation, NSMutableArray, NSResponder, MUIWKWebViewController;

@interface MUIWKWebView : WKWebView <NSViewToolTipOwner, QLPreviewPanelDataSource, QLPreviewPanelDelegate, QLSeamlessCloserDelegate, QLSeamlessOpenerDelegate, NSDraggingSource> {
    char _acceptsScrollWheelChangedPhase;
    char _superViewIsControllingPreviewPanel;
}

@property (nonatomic) char isDragging;
@property (nonatomic) char isDraggingAttachments;
@property (nonatomic) char isAcceptFirstMouse;
@property (retain, nonatomic) NSDraggingSession *dragSession;
@property (retain, nonatomic) NSArray *attachmentControllersToQuicklook;
@property (retain, nonatomic) NSEvent *attachmentMouseDownEvent;
@property (retain, nonatomic) MUISelectionAndClickInformation *dragSelectionAndClickInformation;
@property (retain, nonatomic) NSMutableArray *queuedDragEvents;
@property (retain, nonatomic) NSResponder *oldFirstResponder;
@property (weak, nonatomic) NSEvent *prevKeyDown;
@property (weak, nonatomic) MUIWKWebViewController *controller;
@property (nonatomic) char isForPrinting;
@property (nonatomic) char preventNavigation;
@property (readonly, copy, nonatomic) NSArray *selectedAttachmentControllers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;

- (void)dealloc;
- (void).cxx_destruct;
- (char)acceptsFirstMouse:(id)a0;
- (char)acceptsPreviewPanelControl:(id)a0;
- (char)autoscroll:(id)a0;
- (void)awakeFromNib;
- (void)beginPreviewPanelControl:(id)a0;
- (char)canBecomeKeyView;
- (void)draggingSession:(id)a0 endedAtPoint:(struct CGPoint { double x0; double x1; })a1 operation:(unsigned long long)a2;
- (unsigned long long)draggingSession:(id)a0 sourceOperationMaskForDraggingContext:(long long)a1;
- (void)endPreviewPanelControl:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (void)keyDown:(id)a0;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)mouseUp:(id)a0;
- (long long)numberOfPreviewItemsInPreviewPanel:(id)a0;
- (char)performKeyEquivalent:(id)a0;
- (id)previewPanel:(id)a0 previewItemAtIndex:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })previewPanel:(id)a0 sourceFrameOnScreenForPreviewItem:(id)a1;
- (id)previewPanel:(id)a0 transitionImageForPreviewItem:(id)a1 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (void)quickLookWithEvent:(id)a0;
- (void)scrollWheel:(id)a0;
- (void)seamlessOpener:(id)a0 failedToOpenItems:(id)a1 withError:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })seamlessOpener:(id)a0 sourceFrameOnScreenForPreviewItem:(id)a1;
- (id)seamlessOpener:(id)a0 transitionImageForPreviewItem:(id)a1 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2 windowLevel:(long long *)a3;
- (char)shouldDelayWindowOrderingForEvent:(id)a0;
- (id)supplementalTargetForAction:(SEL)a0 sender:(id)a1;
- (void)updateLayer;
- (id)view:(id)a0 stringForToolTip:(long long)a1 point:(struct CGPoint { double x0; double x1; })a2 userData:(void *)a3;
- (void)viewDidMoveToSuperview;
- (id)_immediateActionAnimationControllerForHitTestResult:(id)a0 withType:(long long)a1 userData:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })seamlessCloserSourceFrameOnScreenForPreviewItem:(id)a0;
- (id)seamlessCloserTransitionImageForPreviewItem:(id)a0 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (void)_selectionAndClickInformationForClickAtPoint:(struct CGPoint { double x0; double x1; })a0 completionHandler:(id /* block */)a1;
- (char)quickLookAttachmentControllers:(id)a0;
- (id)_clickedAttachmentControllerForUserData:(id)a0;
- (void)_displayAlertForUndownloadedAttachments:(id)a0;
- (void)_saveAttachmentToDownloadsFolder:(id)a0;
- (void)_selectedAttachmentControllersCompletionHandler:(id /* block */)a0;
- (id)_selectionAndClickInformationForClickAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)attachmentControllerForAttachmentInfo:(id)a0;
- (id)defaultStringForToolTip:(long long)a0 view:(id)a1 point:(struct CGPoint { double x0; double x1; })a2 userData:(void *)a3;
- (void)quicklookAttachment:(id)a0;
- (id)selectionAndClickInformationFromSelectionContextDictionary:(id)a0;
- (void)unhandledScrollWheel:(id)a0;

@end
