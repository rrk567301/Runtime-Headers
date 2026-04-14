@class NSString, BrowserViewController;

@interface BrowserResourceLoadDelegate : NSObject <_WKResourceLoadDelegate> {
    BrowserViewController *_browserViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)webView:(id)a0 resourceLoad:(id)a1 didCompleteWithError:(id)a2 response:(id)a3;
- (void)webView:(id)a0 resourceLoad:(id)a1 didPerformHTTPRedirection:(id)a2 newRequest:(id)a3;
- (void)webView:(id)a0 resourceLoad:(id)a1 didReceiveChallenge:(id)a2;
- (void)webView:(id)a0 resourceLoad:(id)a1 didReceiveResponse:(id)a2;
- (void)webView:(id)a0 resourceLoad:(id)a1 didSendRequest:(id)a2;
- (id)initWithBrowserViewController:(id)a0;

@end
