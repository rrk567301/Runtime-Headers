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
- (void)setNeedsDisplay:(BOOL)a0;
- (void)setNeedsLayout:(BOOL)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)viewDidMoveToWindow;
- (BOOL)acceptsFirstResponder;
- (void)layoutSubtreeIfNeeded;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)becomeFirstResponder;
- (void)viewWillMoveToWindow:(id)a0;
- (BOOL)needsDisplay;
- (BOOL)needsLayout;
- (void)showActiveFirstResponderIndication;
- (void)hideActiveFirstResponderIndication;
- (void)sceneHostingViewControllerDidCreateScene:(id)a0;
- (id)initWithUIView:(id)a0;
- (void)_updateKeyAppearance;
- (void)_makeInputViewFirstResponder;
- (void)_stopListeningToFirstResponderChanges;
- (void)_stopListeningToWindowNotifications;
- (void)_startListeningToWindowNotifications:(id)a0;
- (void)_startListeningToFirstResponderChanges;

@end
