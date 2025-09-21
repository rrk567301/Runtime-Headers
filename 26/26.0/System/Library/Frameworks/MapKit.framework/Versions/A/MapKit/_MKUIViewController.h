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

- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear;
- (void)viewDidAppear:(BOOL)a0;
- (void)didMoveToParentViewController:(id)a0;
- (void)loadView;
- (BOOL)_isAnimating;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear;
- (void)viewDidLayoutSubviews;
- (void)willMoveToParentViewController:(id)a0;
- (void)addChildViewController:(id)a0;
- (void)beginAppearanceTransition:(BOOL)a0;
- (void)endAppearanceTransition;
- (void)removeFromParentViewController;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)beginAppearanceTransition:(BOOL)a0 animated:(BOOL)a1;
- (Class)classForRootView;
- (void)infoCardThemeChanged;
- (BOOL)isMovingFromParentViewController;
- (BOOL)isMovingToParentViewController;

@end
