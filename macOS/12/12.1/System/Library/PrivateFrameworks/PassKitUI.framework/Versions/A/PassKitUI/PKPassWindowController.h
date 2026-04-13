@class PKPassViewerViewController, NSArray, NSString, NSTextField, NSButton, NSWindow;

@interface PKPassWindowController : NSWindowController <PKPassViewerDelegate> {
    NSWindow *_backgroundMaskWindow;
    NSWindow *_passChildWindow;
    BOOL _clientWindowIsResizable;
    BOOL _attachedToParentWindow;
    BOOL _hasFocus;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _serviceWindowFrameBeforeAnimation;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _serviceWindowFrameAfterAnimation;
    NSTextField *_titleTextField;
    NSTextField *_moreInfoTextField;
    NSButton *_cancelButton;
    NSButton *_addToPassbookButton;
    double _slideUpYDelta;
}

@property (getter=isActive) BOOL active;
@property (readonly) PKPassViewerViewController *passViewController;
@property (readonly) NSArray *passes;
@property (readonly) NSButton *closeButton;
@property (retain) NSWindow *clientWindow;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } positionRelativeToRect;
@property long long openAnimationStyle;
@property long long closeAnimationStyle;
@property BOOL attachToHostWindow;
@property BOOL didAddPass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)validateMenuItem:(id)a0;
- (void)windowDidLoad;
- (void)performShowAnimation;
- (void)passViewer:(id)a0 didChangePass:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_centeredRectWithSize:(struct CGSize { double x0; double x1; })a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)passViewer:(id)a0 didAddToPassbook:(id)a1;
- (void)passViewer:(id)a0 closeClicked:(id)a1;
- (void)updatePassViewControllerFrame;
- (void)updateWindowTitle;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clientWindowFrame;
- (BOOL)clientWindowAvailable;
- (void)_synchronizeBackgroundWindowFrame;
- (void)giveFocusToServiceUIAndNotifyHelper:(BOOL)a0;
- (void)clientWindowDidBecomeKey:(id)a0;
- (void)clientWindowDidResize:(id)a0;
- (void)clientWindowWillClose:(id)a0;
- (void)clientWindowWillMiniaturize:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_hostFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_windowFrameAfterAnimation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_zoomedOutRectWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_addChildWindows;
- (id)_windowShowAnimation;
- (void)_removeChildWindows;
- (id)_closeWindowAninationWithStyle:(long long)a0;
- (void)relinquishFocusFromServiceUI;
- (void)endWithAnimationStyle:(long long)a0;
- (id)initWithPasses:(id)a0;

@end
