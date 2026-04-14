@class NSString, NSDictionary, NSViewController, AMSUIWebSafariViewController, NSURL;

@interface AMSUIWebOpenSafariAction : AMSUIWebAction <AMSUIWebActionRunnable>

@property (retain) NSString *callbackScheme;
@property (retain) NSDictionary *data;
@property (weak) NSViewController *presentedViewController;
@property (weak) AMSUIWebSafariViewController *safariViewController;
@property (retain) NSURL *URL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resultFromURL:(id)a0 error:(id)a1;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;
- (void)_safariDataUpdate:(id)a0;
- (BOOL)_presentViewContoller:(id)a0;

@end
