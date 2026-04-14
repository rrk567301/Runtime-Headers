@class VUIFormSheetPresentationView, NSViewController;

@interface VUIDefaultNSViewControllerPresentationAnimator : NSViewControllerPresentationAnimatorObject {
    VUIFormSheetPresentationView *_presentationView;
    NSViewController *_presentedViewController;
    double _desiredModalWidth;
}

@property (nonatomic) BOOL animated;

- (void)windowDidResize:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)animateDismissalOfViewController:(id)a0 fromViewController:(id)a1;
- (void)animatePresentationOfViewController:(id)a0 fromViewController:(id)a1;
- (void)adjustModalWidthForWindow:(id)a0;
- (void)animateContentSizeChange:(id)a0;
- (id)presentationViewForAccessibility;

@end
