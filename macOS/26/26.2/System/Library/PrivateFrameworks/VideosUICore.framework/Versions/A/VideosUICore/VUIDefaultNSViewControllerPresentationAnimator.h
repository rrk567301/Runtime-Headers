@class VUIFormSheetPresentationView;

@interface VUIDefaultNSViewControllerPresentationAnimator : NSViewControllerPresentationAnimatorObject {
    VUIFormSheetPresentationView *_presentationView;
}

@property (nonatomic) BOOL animated;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)animateDismissalOfViewController:(id)a0 fromViewController:(id)a1;
- (void)animatePresentationOfViewController:(id)a0 fromViewController:(id)a1;
- (void)animateContentSizeChange:(id)a0;
- (id)presentationViewForAccessibility;

@end
