@class AMSProcessInfo, NSString, AMSUIDynamicViewControllerDelegateProxy, AMSBagKeySet, NSDictionary, ACAccount;
@protocol AMSBagProtocol, AMSUIDynamicViewControllerDelegate;

@interface AMSUIDynamicViewController : AMSUICommonViewController <AMSUIDynamicViewControllerDelegate, AMSBagConsumer>

@property (class, readonly) AMSBagKeySet *bagKeySet;
@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;

@property (readonly) AMSUIDynamicViewControllerDelegateProxy *delegateProxy;
@property (readonly) AMSUIDynamicViewController *dynamicViewController;
@property (retain) NSDictionary *internalClientOptions;
@property (retain) ACAccount *account;
@property BOOL anonymousMetrics;
@property (retain) id<AMSBagProtocol> bag;
@property (retain) AMSProcessInfo *clientInfo;
@property (retain) NSDictionary *clientOptions;
@property (weak) id<AMSUIDynamicViewControllerDelegate> delegate;
@property (retain) NSString *mediaClientIdentifier;
@property (retain) NSDictionary *metricsOverlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (id)title;
- (void)_setup;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (id)navigationItem;
- (id)initWithBag:(id)a0 bagValue:(id)a1;
- (id)initWithBag:(id)a0 URL:(id)a1;
- (void)reloadContentViewImpressionItems;
- (void)_setupContentSize;
- (id)initWithBag:(id)a0 javaScriptBagValue:(id)a1;
- (id)initWithBag:(id)a0 javaScriptURL:(id)a1;

@end
