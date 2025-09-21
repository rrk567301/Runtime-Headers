@class AMSMetricsEvent, NSString, AMSUIWebClientContext, AMSUIWebAction, AMSUIWebNavigationBarModel;

@interface AMSUIWebLoadingPageModel : NSObject <AMSUIWebPageProvider>

@property (retain) AMSUIWebClientContext *context;
@property BOOL animateFadeIn;
@property BOOL disableDelay;
@property (retain) NSString *message;
@property (readonly) AMSUIWebNavigationBarModel *navigationBar;
@property (readonly) NSString *backgroundColor;
@property (readonly) AMSMetricsEvent *impressionEvent;
@property (readonly) BOOL disableReappearPlaceholder;
@property (readonly) struct CGSize { double width; double height; } windowSize;
@property (readonly) AMSUIWebAction *swipeToDismissAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)createViewControllerForContainer:(id)a0;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)loadPage;

@end
