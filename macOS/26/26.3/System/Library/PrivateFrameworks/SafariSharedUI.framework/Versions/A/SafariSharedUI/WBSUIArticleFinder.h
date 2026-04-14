@class NSDictionary, WKWebView, NSError;

@interface WBSUIArticleFinder : NSObject

@property (class, nonatomic, readonly) WBSUIArticleFinder *sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)fetchArticleInWebView:(WKWebView *)a0 pageInformation:(NSDictionary *)a1 completionHandler:(void (^)(id, NSError *))a2;

@end
