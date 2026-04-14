@class NSView, AVDetachedFullscreenController, NSLayoutConstraint;

@interface AVDetachedFullscreenContentContainerView : NSView {
    NSLayoutConstraint *_contentViewXConstraint;
    NSLayoutConstraint *_contentViewYConstraint;
    NSLayoutConstraint *_contentViewWidthConstraint;
    NSLayoutConstraint *_contentViewHeightConstraint;
}

@property (readonly, weak, nonatomic) AVDetachedFullscreenController *fullscreenController;
@property (retain, nonatomic) NSView *contentView;

- (void)layout;
- (void)viewDidMoveToWindow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentViewFrame;
- (void).cxx_destruct;
- (void)keyUp:(id)a0;
- (void)_constrainContentViewToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_isTransitioningToOrFromFullscreen;
- (void)_makeContentViewFirstResponderIfPossible;
- (id)initWithFullscreenController:(id)a0;

@end
