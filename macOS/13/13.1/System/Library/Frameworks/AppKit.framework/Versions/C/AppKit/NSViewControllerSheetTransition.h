@class NSWindow;

@interface NSViewControllerSheetTransition : NSViewControllerPresentationAnimatorObject {
    NSWindow *_windowPresented;
}

- (void)dealloc;
- (void)animatePresentationOfViewController:(id)a0 fromViewController:(id)a1;
- (void)animateDismissalOfViewController:(id)a0 fromViewController:(id)a1;

@end
