@class AMSMetricsEvent, NSString, AMSUIWebClientContext, AMSUIWebAction, AMSUIWebNavigationBarModel;

@interface AMSUIWebLoadingPageModel : NSObject <AMSUIWebPageProvider>

@property (retain) AMSUIWebClientContext *context;
@property char animateFadeIn;
@property char disableDelay;
@property (retain) NSString *message;
@property (readonly) AMSUIWebNavigationBarModel *navigationBar;
@property (readonly) NSString *backgroundColor;
@property (readonly) AMSMetricsEvent *impressionEvent;
@property (readonly) char disableReappearPlaceholder;
@property (readonly) struct CGSize { double width; double height; } windowSize;
@property (readonly) AMSUIWebAction *swipeToDismissAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)createViewControllerForContainer:(id)a0;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)loadPage;

@end
