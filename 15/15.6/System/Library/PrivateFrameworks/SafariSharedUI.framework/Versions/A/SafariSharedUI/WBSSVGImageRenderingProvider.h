@class NSString;
@protocol WBSSiteMetadataProviderDelegate;

@interface WBSSVGImageRenderingProvider : NSObject <WBSWebViewMetadataFetchOperationDelegate, WBSSiteMetadataProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<WBSSiteMetadataProviderDelegate> providerDelegate;
@property (readonly, nonatomic) char providesFavicons;

- (void).cxx_destruct;
- (char)canHandleRequest:(id)a0;
- (void)prepareResponseForRequest:(id)a0 allowDelayedResponse:(char)a1;
- (id)responseForRequest:(id)a0 willProvideUpdates:(char *)a1;
- (char)_requestIsValid:(id)a0;
- (void)webViewMetadataFetchOperation:(id)a0 didFinishUsingWebView:(id)a1;
- (void)webViewMetadataFetchOperation:(id)a0 getWebViewOfSize:(struct CGSize { double x0; double x1; })a1 withConfiguration:(id)a2 completionHandler:(id /* block */)a3;

@end
