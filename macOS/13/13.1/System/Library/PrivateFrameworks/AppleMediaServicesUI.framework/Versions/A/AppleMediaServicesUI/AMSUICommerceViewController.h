@class NSString, NSProgressIndicator, ACAccount, FRWKView, NSURL;

@interface AMSUICommerceViewController : NSViewController <FRWKViewDelegate, FRJSObjectDelegate>

@property (retain) ACAccount *account;
@property (retain) FRWKView *webView;
@property (retain) NSProgressIndicator *spinner;
@property (retain) NSURL *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillLayout;
- (void)webView:(id)a0 startedLoadingURL:(id)a1;
- (void)webView:(id)a0 cancelledLoadingURL:(id)a1;
- (void)webView:(id)a0 url:(id)a1 redirectedToURL:(id)a2;
- (void)webView:(id)a0 finishedLoadingURL:(id)a1 withError:(id)a2;
- (BOOL)hasProperty:(id)a0 forObject:(id)a1;
- (id)object:(id)a0 getProperty:(id)a1;
- (BOOL)hasFunction:(id)a0 forObject:(id)a1;
- (id)object:(id)a0 callFunction:(id)a1 withArguments:(id)a2;
- (id)initWithURL:(id)a0 andAccount:(id)a1;

@end
