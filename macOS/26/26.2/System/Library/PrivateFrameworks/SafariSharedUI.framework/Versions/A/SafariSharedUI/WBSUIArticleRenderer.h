@class NSDictionary, WKWebView, NSError;

@interface WBSUIArticleRenderer : NSObject

@property (class, nonatomic, readonly) WBSUIArticleRenderer *sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)renderViewFromArticleView:(WKWebView *)a0 readerConfiguration:(NSDictionary *)a1 completionHandler:(void (^)(WKWebView *, NSError *))a2;
- (void)readerViewFromArticleView:(WKWebView *)a0 readerConfiguration:(NSDictionary *)a1 completionHandler:(void (^)(WKWebView *, NSError *))a2;

@end
