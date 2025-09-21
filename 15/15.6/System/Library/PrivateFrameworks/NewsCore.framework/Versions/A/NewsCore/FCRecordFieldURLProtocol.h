@class FCCKContentFetchOperation;

@interface FCRecordFieldURLProtocol : NSURLProtocol

@property (retain, nonatomic) FCCKContentFetchOperation *fetchOperation;

+ (void)unregister;
+ (char)canInitWithRequest:(id)a0;
+ (id)canonicalRequestForRequest:(id)a0;
+ (char)requestIsCacheEquivalent:(id)a0 toRequest:(id)a1;
+ (char)canHandleURL:(id)a0;
+ (id)URLForRecordID:(id)a0 fieldName:(id)a1;
+ (char)canHandleURLWithComponents:(id)a0;
+ (void)setupWithArticleDatabase:(id)a0;

- (void).cxx_destruct;
- (void)stopLoading;
- (void)startLoading;

@end
