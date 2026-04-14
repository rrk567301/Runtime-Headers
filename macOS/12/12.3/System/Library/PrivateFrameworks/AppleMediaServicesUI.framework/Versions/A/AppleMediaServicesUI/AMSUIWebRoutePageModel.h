@class AMSMetricsEvent, AMSUIWebWrapperViewController, NSDictionary, NSURL, AMSUIWebClientContext, NSString, AMSUIWebNavigationBarModel;

@interface AMSUIWebRoutePageModel : NSObject <AMSUIWebPageProvider>

@property (readonly) NSDictionary *clientOptions;
@property (readonly, weak) AMSUIWebClientContext *context;
@property (readonly) NSURL *URL;
@property (retain) AMSUIWebWrapperViewController *viewController;
@property (readonly) AMSUIWebNavigationBarModel *navigationBar;
@property (readonly) NSString *backgroundColor;
@property (readonly) AMSMetricsEvent *impressionEvent;
@property (readonly) BOOL disableReappearPlaceholder;
@property (readonly) struct CGSize { double width; double height; } windowSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)createViewController;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)loadPage;
- (id)_webPageViewController;

@end
