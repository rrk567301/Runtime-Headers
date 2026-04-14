@class NSString, ReaderViewController;

@interface ReaderNavigationDelegate : NSObject <WKNavigationDelegatePrivate> {
    ReaderViewController *_readerViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)webView:(id)a0 decidePolicyForNavigationResponse:(id)a1 decisionHandler:(id /* block */)a2;
- (void)_webView:(id)a0 decidePolicyForNavigationAction:(id)a1 preferences:(id)a2 userInfo:(id)a3 decisionHandler:(id /* block */)a4;
- (id)initWithReaderViewController:(id)a0;

@end
