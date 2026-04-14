@class FCCKContentFetchOperation;

@interface FCRecordFieldURLProtocol : NSURLProtocol

@property (retain, nonatomic) FCCKContentFetchOperation *fetchOperation;

+ (void)unregister;
+ (void)setupWithArticleDatabase:(id)a0;
+ (id)URLForRecordID:(id)a0 fieldName:(id)a1;
+ (BOOL)canHandleURLWithComponents:(id)a0;
+ (id)canonicalRequestForRequest:(id)a0;
+ (BOOL)canInitWithRequest:(id)a0;
+ (BOOL)requestIsCacheEquivalent:(id)a0 toRequest:(id)a1;
+ (BOOL)canHandleURL:(id)a0;

- (void)startLoading;
- (void).cxx_destruct;
- (void)stopLoading;

@end
