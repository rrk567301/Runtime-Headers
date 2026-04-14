@class NSDictionary, WKWebView, NSError;

@interface WBSUIArticleFinder : NSObject

@property (class, nonatomic, readonly) WBSUIArticleFinder *sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)fetchArticleInWebView:(WKWebView *)a0 pageInformation:(NSDictionary *)a1 completionHandler:(void (^)(id, NSError *))a2;

@end
