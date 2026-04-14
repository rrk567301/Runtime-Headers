@class NSView, NSString, ForYouRecommendationMediator, BrowserViewController, NSScrollView, NSVisualEffectView, StartPageCollectionViewController, NSViewController, NSLayoutConstraint, KeyLoopSplicingContainerView, BrowserWindowController;
@protocol StartPageContentViewController;

@interface StartPageViewController : NSViewController {
    NSView *_rootView;
    NSViewController<StartPageContentViewController> *_currentMainContainerViewController;
    StartPageCollectionViewController *_startPageCollectionViewController;
    double _defaultBottomBannerContainerToMainContainerBottomConstraintConstant;
}

@property (weak, nonatomic) KeyLoopSplicingContainerView *mainContainerView;
@property (weak, nonatomic) NSVisualEffectView *windowBackdropVisualEffectView;
@property (retain, nonatomic) NSView *bottomBanner;
@property (weak, nonatomic) NSView *bottomBannerContainer;
@property (retain, nonatomic) NSLayoutConstraint *mainContainerToBottomBannerContainerConstraint;
@property (retain, nonatomic) NSLayoutConstraint *bottomBannerContainerToMainContainerBottomConstraint;
@property (weak, nonatomic) BrowserViewController *browserContentViewController;
@property (weak, nonatomic) BrowserWindowController *browserWindowController;
@property (readonly, nonatomic) NSString *pageTitle;
@property (retain, nonatomic) NSView *externalCenteringView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } startPageViewContentRect;
@property (retain, nonatomic) ForYouRecommendationMediator *mediator;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *lastUsedBookmarksFolderUUID;
@property (retain, nonatomic) NSString *deviceUUIDForStandaloneCloudTabsStartPage;
@property (readonly, nonatomic) NSScrollView *startPageScrollView;

+ (id)url;
+ (id)defaultPageTitle;

- (void)viewWillDisappear;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)nibName;
- (void)awakeFromNib;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)_windowWillEnterFullScreen;
- (void)_windowWillExitFullScreen;
- (void)_setMainContainerViewController;
- (void)updateTopScrollPocketAppearance;
- (void)_reLayOutThenRunAnimationGroup:(id /* block */)a0;
- (void)_animateBottomBannerIn:(id)a0;
- (void)_animateBottomBannerOut;
- (void)_backgroundImageChanged:(id)a0;
- (id)_currentBrowserTabViewItem;
- (void)_updateBottomBanner;
- (void)_updateWindowAndTabTitle;
- (void)didDismissTabDialog;
- (void)forceVoiceOverFocusAfterCloseImportingBrowserData;
- (id)initStandaloneStartPageWithBrowserWindowController:(id)a0 startPageType:(long long)a1 deviceUUIDForStandaloneCloudTabsStartPage:(id)a2;
- (id)initWithBrowserContentViewController:(id)a0;
- (id)initWithBrowserContentViewController:(id)a0 startPageType:(long long)a1;
- (void)setBottomBanner:(id)a0 animated:(BOOL)a1;
- (void)updateMainContainerViewController;
- (void)willPresentTabDialog;

@end
