@class NSView, NSBox;

@interface NSViewControllerPushTransition : NSViewControllerPresentationAnimatorObject {
    NSView *_dimmingView;
    NSBox *_boxView;
}

- (void)animatePresentationOfViewController:(id)a0 fromViewController:(id)a1;
- (void)animateDismissalOfViewController:(id)a0 fromViewController:(id)a1;

@end
