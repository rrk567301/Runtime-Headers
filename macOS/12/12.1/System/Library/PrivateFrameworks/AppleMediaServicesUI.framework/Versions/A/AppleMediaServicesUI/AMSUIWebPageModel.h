@class AMSMetricsEvent, NSString, AMSUIWebClientContext, AMSUIWebNavigationBarModel;

@interface AMSUIWebPageModel : NSObject <AMSUIWebPageProvider>

@property (retain) AMSUIWebClientContext *context;
@property BOOL ignoreBottomSafeArea;
@property BOOL ignoreTopSafeArea;
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

@end
