@class FCCKContentFetchOperation;

@interface FCExcerptURLProtocol : NSURLProtocol

@property (retain, nonatomic) FCCKContentFetchOperation *fetchOperation;

+ (void)initialize;
+ (void)unregister;
+ (char)canInitWithRequest:(id)a0;
+ (id)canonicalRequestForRequest:(id)a0;
+ (char)requestIsCacheEquivalent:(id)a0 toRequest:(id)a1;
+ (char)canHandleURL:(id)a0;
+ (char)canHandleURLWithComponents:(id)a0;
+ (id)excerptURLForArticleID:(id)a0 changeTag:(id)a1;
+ (void)setupWithArticleDatabase:(id)a0;

- (void).cxx_destruct;
- (void)stopLoading;
- (void)startLoading;

@end
