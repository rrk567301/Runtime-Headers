@class NSViewController, SiriUINavigationBarView, NSString, NSMutableArray;
@protocol SiriUINavigationControllerDelegate;

@interface SiriUINavigationController : NSViewController <CAAnimationDelegate>

@property (retain) NSMutableArray *mutableViewControllers;
@property (retain) NSViewController *selectedVC;
@property (retain) SiriUINavigationBarView *navigationBarView;
@property char wantsNavigationBar;
@property (weak) id<SiriUINavigationControllerDelegate> delegate;
@property struct CGSize { double width; double height; } maximumSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(char)a1;
- (void)loadView;
- (id)viewControllers;
- (void)setViewControllers:(id)a0;
- (void)popViewControllerAnimated:(char)a0;
- (void)pushViewController:(id)a0 animated:(char)a1;
- (id)topViewController;
- (void)popToViewController:(id)a0 animated:(char)a1;
- (double)navigationBarHeight;
- (void)_addChildVCToSelf:(id)a0;
- (void)_addNavigationBarConstraints;
- (void)_animateToSelectedVCFromVC:(id)a0 removePrevious:(char)a1;
- (double)_defaultHeightForView:(id)a0 coveringView:(id)a1;
- (void)_didShowViewController:(id)a0 animated:(char)a1;
- (double)_maximumViewHeight;
- (double)_maximumViewWidth;
- (void)_moveToTopViewController:(char)a0;
- (void)_moveToViewControllerAtIndex:(unsigned long long)a0 animated:(char)a1 removePrevious:(char)a2;
- (void)_popMutableViewControllersToSelectedVC;
- (id)_popUpAnimationToPosition:(unsigned long long)a0;
- (void)_popViewController;
- (id)_pushDownAnimationToPosition:(unsigned long long)a0;
- (void)_removeChildVCFromSelf:(id)a0;
- (void)_removeConstraintsAffectingView:(id)a0;
- (void)_replacePreviousVCWithNewVCInViewHierarchy:(id)a0 removePrevious:(char)a1;
- (void)_sendDelegateDidLayoutViewController:(id)a0;
- (id)_slideViewOffStackAnimation;
- (id)_slideViewOntoStackAnimation;
- (void)_updateConstraintsAndLayout;
- (void)_updateNavigationBarViewWithViewController:(id)a0 animated:(char)a1;
- (char)_viewIsBaseView:(id)a0;
- (void)_willShowViewController:(id)a0 animated:(char)a1;
- (id)initShowingNavigationBar:(char)a0;
- (void)popToBottomViewControllerAnimated:(char)a0;
- (void)updateNavigationBarTitle:(id)a0;

@end
