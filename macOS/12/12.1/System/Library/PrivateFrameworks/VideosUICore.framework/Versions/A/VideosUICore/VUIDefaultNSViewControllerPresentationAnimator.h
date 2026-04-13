@class VUIFormSheetPresentationView;

@interface VUIDefaultNSViewControllerPresentationAnimator : NSViewControllerPresentationAnimatorObject {
    VUIFormSheetPresentationView *_presentationView;
}

@property (nonatomic) BOOL animated;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)animatePresentationOfViewController:(id)a0 fromViewController:(id)a1;
- (void)animateDismissalOfViewController:(id)a0 fromViewController:(id)a1;
- (id)presentationViewForAccessibility;

@end
