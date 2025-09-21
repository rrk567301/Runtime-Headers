@class NSString;
@protocol MKInfoCardTheme;

@interface _MKUIViewController : NSViewController <MKInfoCardThemeListener> {
    unsigned long long _countOfAppearanceTransitionInvocations;
    long long _appearanceAnimation;
    long long _parentTransitioning;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<MKInfoCardTheme> mk_theme;
@property (copy, nonatomic) NSString *accessibilityIdentifier;
@property (nonatomic) double contentAlpha;

- (void)willMoveToParentViewController:(id)a0;
- (char)_isAnimating;
- (void)addChildViewController:(id)a0;
- (void)beginAppearanceTransition:(char)a0;
- (void)didMoveToParentViewController:(id)a0;
- (void)endAppearanceTransition;
- (void)loadView;
- (void)removeFromParentViewController;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (void)viewWillAppear:(char)a0;
- (void)beginAppearanceTransition:(char)a0 animated:(char)a1;
- (Class)classForRootView;
- (void)infoCardThemeChanged;
- (char)isMovingFromParentViewController;
- (char)isMovingToParentViewController;
- (void)viewDidAppear:(char)a0;
- (void)viewDidDisappear:(char)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(char)a0;
- (void)viewWillLayoutSubviews;

@end
