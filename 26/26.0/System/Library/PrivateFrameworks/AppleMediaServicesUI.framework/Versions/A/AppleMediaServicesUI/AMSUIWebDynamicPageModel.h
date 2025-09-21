@class AMSUIWebNavigationBarModel, NSString, NSURL, AMSMetricsEvent, NSDictionary, AMSUIWebAction, AMSUIWebClientContext, ACAccount;

@interface AMSUIWebDynamicPageModel : NSObject <AMSUIWebPageProvider>

@property (retain) AMSUIWebClientContext *context;
@property (retain) ACAccount *account;
@property (retain) NSDictionary *clientOptions;
@property (retain) NSDictionary *metricsOverlay;
@property (retain) NSURL *URL;
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

@end
