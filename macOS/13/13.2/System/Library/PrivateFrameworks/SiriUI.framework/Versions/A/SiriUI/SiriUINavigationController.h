@class NSViewController, SiriUINavigationBarView, NSString, NSMutableArray;
@protocol SiriUINavigationControllerDelegate;

@interface SiriUINavigationController : NSViewController <CAAnimationDelegate>

@property (retain) NSMutableArray *mutableViewControllers;
@property (retain) NSViewController *selectedVC;
@property (retain) SiriUINavigationBarView *navigationBarView;
@property BOOL wantsNavigationBar;
@property (weak) id<SiriUINavigationControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)loadView;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)setViewControllers:(id)a0;
- (id)viewControllers;
- (id)topViewController;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (void)popViewControllerAnimated:(BOOL)a0;
- (void)popToViewController:(id)a0 animated:(BOOL)a1;
- (void)_popViewController;
- (id)initShowingNavigationBar:(BOOL)a0;
- (void)_addNavigationBarConstriants;
- (void)popToBottomViewControllerAnimated:(BOOL)a0;
- (double)navigationBarHeight;
- (void)updateNavigationBarTitle:(id)a0;
- (void)_addChildVCToSelf:(id)a0;
- (void)_removeChildVCFromSelf:(id)a0;
- (void)_moveToTopViewController:(BOOL)a0;
- (void)_moveToViewControllerAtIndex:(unsigned long long)a0 animated:(BOOL)a1 removePrevious:(BOOL)a2;
- (void)_animateToSelectedVCFromVC:(id)a0 removePrevious:(BOOL)a1;
- (BOOL)_viewIsBaseView:(id)a0;
- (void)_popMutableViewControllersToSelectedVC;
- (void)_removeConstraintsAffectingView:(id)a0;
- (void)_replacePreviousVCWithNewVCInViewHierarchy:(id)a0 removePrevious:(BOOL)a1;
- (void)_updateConstraintsAndLayout;
- (void)_didShowViewController:(id)a0 animated:(BOOL)a1;
- (void)_willShowViewController:(id)a0 animated:(BOOL)a1;
- (void)_sendDelegateDidLayoutViewController:(id)a0;
- (void)_updateNavigationBarViewWithViewController:(id)a0 animated:(BOOL)a1;
- (id)_slideViewOntoStackAnimation;
- (id)_pushDownAnimationToPosition:(unsigned long long)a0;
- (id)_slideViewOffStackAnimation;
- (id)_popUpAnimationToPosition:(unsigned long long)a0;

@end
