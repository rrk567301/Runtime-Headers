@class UIWindow, NSString, UINSSceneHostingViewController, UIView;

@interface UINSSceneHostingView : NSView <UINSSceneHostingViewControllerDelegate> {
    UIWindow *_uiWindow;
    UINSSceneHostingViewController *_sceneHostingVC;
}

@property (readonly, nonatomic) UIView *uiView;
@property (nonatomic, getter=isHostedInToolbar) char hostedInToolbar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)layout;
- (void)setNeedsLayout:(char)a0;
- (char)acceptsFirstResponder;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (char)becomeFirstResponder;
- (char)canBecomeKeyView;
- (void)hideActiveFirstResponderIndication;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubtreeIfNeeded;
- (char)needsDisplay;
- (char)needsLayout;
- (void)setNeedsDisplay:(char)a0;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)showActiveFirstResponderIndication;
- (id)initWithUIView:(id)a0;
- (void)sceneHostingViewControllerDidCreateScene:(id)a0;

@end
