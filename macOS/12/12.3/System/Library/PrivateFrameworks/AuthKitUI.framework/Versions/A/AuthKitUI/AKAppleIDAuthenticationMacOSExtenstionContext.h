@class AKAuthWebTabView, NSView, NSString, NSWindow;
@protocol AKAppleIDAuthenticationMacOSExtenstionContextDelegate;

@interface AKAppleIDAuthenticationMacOSExtenstionContext : AKAppleIDAuthenticationInAppContext <AuthWebViewDelegate, MBWebKitViewControllerDelegate>

@property (retain) AKAuthWebTabView *webviewController;
@property (retain) NSView *webView;
@property (weak) id<AKAppleIDAuthenticationMacOSExtenstionContextDelegate> delegate;
@property (weak, nonatomic) NSWindow *parentWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)presentServerProvidedUIWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)dismissServerProvidedUIWithCompletion:(id /* block */)a0;
- (void)switchToView:(id)a0;
- (void)_cleanupWebViewController;
- (void)closeWebViewAndCleanUp:(id)a0 andError:(id)a1;
- (void)endWebView:(id)a0;
- (void)sizeChangedFrom:(struct CGSize { double x0; double x1; })a0 toSize:(struct CGSize { double x0; double x1; })a1 webViewName:(id)a2 callback:(id)a3;
- (void)loadFailed:(id)a0 withError:(id)a1;
- (void)mbWebkitViewControllerModifyURLRequest:(id)a0;

@end
