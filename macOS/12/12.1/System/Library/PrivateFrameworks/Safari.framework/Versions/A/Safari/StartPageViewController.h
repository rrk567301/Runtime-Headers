@class NSView, NSString, ForYouRecommendationMediator, BrowserViewController, StartPageCollectionViewController, NSVisualEffectView, NSViewController, NSLayoutConstraint, KeyLoopSplicingContainerView;
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
@property (readonly, nonatomic) NSString *pageTitle;
@property (retain, nonatomic) NSView *externalCenteringView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } startPageViewContentRect;
@property (retain, nonatomic) ForYouRecommendationMediator *mediator;
@property (readonly, nonatomic) long long type;
@property (copy, nonatomic) NSString *lastUsedBookmarksFolderUUID;

+ (id)url;
+ (id)defaultPageTitle;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)awakeFromNib;
- (id)nibName;
- (void)viewWillAppear;
- (void)viewDidDisappear;
- (void)_windowWillEnterFullScreen;
- (void)_windowWillExitFullScreen;
- (void)updateMainContainerViewController;
- (id)initWithBrowserContentViewController:(id)a0;
- (void)forceVoiceOverFocusAfterCloseImportingBrowserData;
- (void)willPresentTabDialog;
- (void)didDismissTabDialog;
- (id)initWithBrowserContentViewController:(id)a0 startPageType:(long long)a1;
- (void)_updateWindowAndTabTitle;
- (void)_setMainContainerViewController;
- (void)_updateBottomBanner;
- (void)_animateBottomBannerOut;
- (void)_animateBottomBannerIn:(id)a0;
- (void)setBottomBanner:(id)a0 animated:(BOOL)a1;
- (void)_reLayOutThenRunAnimationGroup:(id /* block */)a0;
- (id)_currentBrowserTabViewItem;

@end
