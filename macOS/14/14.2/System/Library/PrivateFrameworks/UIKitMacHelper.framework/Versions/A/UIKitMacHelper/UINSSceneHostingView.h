@class UIWindow, NSString, UINSSceneHostingViewController, UIView;

@interface UINSSceneHostingView : NSView <UINSSceneHostingViewControllerDelegate> {
    UIView *_uiView;
    UIWindow *_uiWindow;
    UINSSceneHostingViewController *_sceneHostingVC;
    id _windowAppearanceChangedNotificationObserver;
    id _windowBecameKeyNotificationObserver;
    id _windowResignedKeyNotificationObserver;
    id _firstResponderChangedNotificationObserver;
}

@property (readonly, nonatomic) UIView *uiView;
@property (nonatomic, getter=isHostedInToolbar) BOOL hostedInToolbar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)layout;
- (void)setNeedsLayout:(BOOL)a0;
- (BOOL)acceptsFirstResponder;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (BOOL)becomeFirstResponder;
- (void)hideActiveFirstResponderIndication;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubtreeIfNeeded;
- (BOOL)needsDisplay;
- (BOOL)needsLayout;
- (void)setNeedsDisplay:(BOOL)a0;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)showActiveFirstResponderIndication;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)a0;
- (id)initWithUIView:(id)a0;
- (void)_makeInputViewFirstResponder;
- (void)_startListeningToFirstResponderChanges;
- (void)_startListeningToWindowNotifications:(id)a0;
- (void)_stopListeningToFirstResponderChanges;
- (void)_stopListeningToWindowNotifications;
- (void)_updateKeyAppearance;
- (void)sceneHostingViewControllerDidCreateScene:(id)a0;

@end
