@class NSDictionary, WKWebView, NSError;

@interface WBSUIArticleRenderer : NSObject

@property (class, nonatomic, readonly) WBSUIArticleRenderer *sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)renderViewFromArticleView:(WKWebView *)a0 readerConfiguration:(NSDictionary *)a1 completionHandler:(void (^)(WKWebView *, NSError *))a2;
- (void)readerViewFromArticleView:(WKWebView *)a0 readerConfiguration:(NSDictionary *)a1 completionHandler:(void (^)(WKWebView *, NSError *))a2;

@end
