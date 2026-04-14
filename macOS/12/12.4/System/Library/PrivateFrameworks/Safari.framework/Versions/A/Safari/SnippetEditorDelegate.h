@class NSString;

@interface SnippetEditorDelegate : NSObject <WKNavigationDelegate, WKUIDelegatePrivate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)_webView:(id)a0 getContextMenuFromProposedMenu:(id)a1 forElement:(id)a2 userInfo:(id)a3 completionHandler:(id /* block */)a4;

@end
