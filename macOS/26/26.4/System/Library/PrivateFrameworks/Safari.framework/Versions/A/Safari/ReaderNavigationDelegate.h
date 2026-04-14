@class NSString, ReaderViewController;

@interface ReaderNavigationDelegate : NSObject <WKNavigationDelegatePrivate> {
    ReaderViewController *_readerViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 preferences:(id)a2 decisionHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;
- (void)webView:(id)a0 decidePolicyForNavigationResponse:(id)a1 decisionHandler:(id /* block */)a2;
- (id)initWithReaderViewController:(id)a0;

@end
