@class VUIFormSheetPresentationView;

@interface VUIDefaultNSViewControllerPresentationAnimator : NSViewControllerPresentationAnimatorObject {
    VUIFormSheetPresentationView *_presentationView;
}

@property (nonatomic) char animated;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)animateDismissalOfViewController:(id)a0 fromViewController:(id)a1;
- (void)animatePresentationOfViewController:(id)a0 fromViewController:(id)a1;
- (void)animateContentSizeChange:(id)a0;
- (id)presentationViewForAccessibility;

@end
