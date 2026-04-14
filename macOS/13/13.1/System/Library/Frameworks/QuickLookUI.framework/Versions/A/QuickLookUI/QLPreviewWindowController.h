@class QLPreviewWindowButton, NSString, NSView, QLPreviewTitleBarView, NSTextField, QLPreviewBackgroundView, NSMutableArray, QLControlsController;

@interface QLPreviewWindowController : NSWindowController {
    QLControlsController *_leftControlsController;
    QLControlsController *_rightControlsController;
    BOOL _controlsAtBottom;
    BOOL _tightControls;
    double _tightControlsDelta;
    BOOL _packing;
    BOOL _isBeingMoved;
    NSView *_rootView;
    NSView *_leftControlsView;
    NSView *_rightControlsView;
    QLPreviewTitleBarView *_titleBarView;
    NSView *_contentView;
    NSTextField *_titleField;
    int _visibleButtonTypes;
}

@property (retain) QLPreviewWindowButton *closeButton;
@property (retain) QLPreviewWindowButton *fullscreenButton;
@property (retain) NSMutableArray *titlebarConstraintsInRootView;
@property (retain) NSMutableArray *contentConstraintsInRootView;
@property (readonly) QLPreviewBackgroundView *backgroundView;
@property (readonly) NSView *contentView;
@property (retain) NSString *title;
@property long long titleAlignment;
@property int titleBarVisibility;
@property int visibleButtonTypes;
@property BOOL controlsAtBottom;
@property (readonly) BOOL hasLeftControls;
@property (readonly) BOOL hasRightControls;
@property (readonly) BOOL hasTightControls;
@property (readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } visualMargins;
@property (readonly) QLControlsController *leftControlsController;
@property (readonly) QLControlsController *rightControlsController;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithWindow:(id)a0;
- (id)accessibilityTitleUIElement;
- (id)_titleField;
- (double)_contentInset;
- (id)standardWindowButton:(unsigned long long)a0;
- (void)updateControls;
- (void)_setupTitleField;
- (struct CGSize { double x0; double x1; })windowSizeFromContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)controlsDidUpateLayout:(id)a0;
- (BOOL)hasControls;
- (double)_intrinsicMargin;
- (double)_additionalContentInset;
- (void)_titleFieldFrameChanged:(id)a0;
- (void)_rightControlsViewFrameChanged:(id)a0;
- (double)_buttonToWindowPadding;
- (double)_buttonToContentPadding;
- (double)titleBarEdgeToWindowEdgePadding;
- (double)closeButtonToWindowEdgePadding;
- (double)_topBarTotalHeightIncludingPadding;
- (id)popoverCornerMask;
- (void)_updateWindowButtons;
- (void)_updatePacking;
- (void)_updateInternalFrames;
- (void)_deactivateContentViewAndTitleBarConstraints;
- (void)_updateContentViewConstraintsInRootView;
- (void)_updateTitleBarConstraintsInRootView;
- (BOOL)_shouldShowTitleBar;
- (BOOL)_shouldMakeRoomForTitleBar;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentFrameForWindowSize:(struct CGSize { double x0; double x1; })a0;

@end
