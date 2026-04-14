@class ASCLockupPresenter, ASCMetricsActivity, NSString, ASCOfferPresenter, ASCLockup, ASCLockupViewGroup, ASCAppearMetricsPresenter, ASCLockupRequest, ASCLockupContentView, ASCOfferTheme;
@protocol ASCLockupViewDelegate;

@interface ASCLockupView : NSView <ASCLockupPresenterObserver, ASCOfferPresenterObserver> {
    struct { unsigned char lockupViewDidBeginRequest : 1; unsigned char lockupViewDidFinishRequest : 1; unsigned char lockupViewDidFailRequestWithError : 1; unsigned char lockupViewAppStateDidChange : 1; unsigned char metricsActivityForAdLockupViewToPerformActionOfOfferInState : 1; unsigned char lockupViewDidInvalidateIntrinsicContentSize : 1; unsigned char lockupViewShouldSupportDSIDLessInstalls : 1; unsigned char productDetailsPresentationContextForLockupView : 1; } _delegateRespondsTo;
}

@property (retain, nonatomic) NSString *storeSheetHostBundleID;
@property (retain, nonatomic) NSString *storeSheetUsageContext;
@property (readonly, nonatomic) ASCLockupContentView *contentView;
@property (readonly, nonatomic) ASCOfferPresenter *offerPresenter;
@property (readonly, nonatomic) ASCAppearMetricsPresenter *metricsPresenter;
@property (readonly, nonatomic) ASCLockupPresenter *lockupPresenter;
@property (retain, nonatomic) NSString *storeSheetHostBundleID;
@property (retain, nonatomic) NSString *storeSheetUsageContext;
@property (nonatomic) BOOL automaticallyGeneratesAppearMetrics;
@property (copy, nonatomic) ASCMetricsActivity *appearMetricsActivity;
@property (copy, nonatomic) ASCOfferTheme *offerTheme;
@property (retain, nonatomic) NSString *size;
@property (copy, nonatomic) ASCLockup *lockup;
@property (retain, nonatomic) ASCLockupViewGroup *group;
@property (copy, nonatomic) ASCLockupRequest *request;
@property (weak, nonatomic) id<ASCLockupViewDelegate> delegate;
@property (nonatomic) BOOL automaticallyPresentsProductDetails;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) BOOL showsPlaceholderContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setHidden:(BOOL)a0;
- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidateIntrinsicContentSize;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)viewDidMoveToWindow;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (id)accessibilityTitle;
- (id)accessibilityIdentifier;
- (BOOL)accessibilityPerformPress;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutContentView;
- (void)setViewRenderSpanProvider:(id /* block */)a0;
- (void)performLockupAction;
- (void)lockupPresenterDidBeginRequest;
- (void)lockupPresenterDidFinishRequest;
- (void)lockupPresenterDidFailRequestWithError:(id)a0;
- (void)offerPresenterDidObserveChangeToState:(id)a0;
- (void)offerPresenterWillPerformActionOfOffer:(id)a0 inState:(id)a1 withActivity:(inout id *)a2 inContext:(inout id *)a3;
- (id)preferredProductDetailsPresentationContext;
- (void)presentProductDetailsViewController;

@end
