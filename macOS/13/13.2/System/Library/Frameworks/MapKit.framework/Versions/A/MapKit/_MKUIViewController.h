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

- (BOOL)_isAnimating;
- (void)loadView;
- (void)addChildViewController:(id)a0;
- (void)removeFromParentViewController;
- (void)beginAppearanceTransition:(BOOL)a0;
- (void)endAppearanceTransition;
- (void)willMoveToParentViewController:(id)a0;
- (void)didMoveToParentViewController:(id)a0;
- (void)viewWillAppear;
- (void)viewDidAppear;
- (void)viewWillDisappear;
- (void)viewDidDisappear;
- (void)viewWillAppear:(BOOL)a0;
- (void)infoCardThemeChanged;
- (void)viewWillDisappear:(BOOL)a0;
- (Class)classForRootView;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)beginAppearanceTransition:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)isMovingFromParentViewController;
- (BOOL)isMovingToParentViewController;
- (void)viewWillLayoutSubviews;

@end
