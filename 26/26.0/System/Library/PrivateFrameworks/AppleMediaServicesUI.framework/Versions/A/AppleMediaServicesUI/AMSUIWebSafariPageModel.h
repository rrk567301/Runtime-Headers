@class AMSUIWebNavigationBarModel, NSString, NSURL, AMSMetricsEvent, NSDictionary, AMSUIWebLoadingPageModel, AMSUIWebClientContext, AMSUIWebAction;

@interface AMSUIWebSafariPageModel : AMSUIWebModel <AMSUIWebPageProvider>

@property (readonly) AMSUIWebClientContext *context;
@property (retain) NSString *callbackScheme;
@property (retain) NSDictionary *data;
@property BOOL hideToolBar;
@property (retain) AMSUIWebLoadingPageModel *loadingModel;
@property BOOL showShareButton;
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
