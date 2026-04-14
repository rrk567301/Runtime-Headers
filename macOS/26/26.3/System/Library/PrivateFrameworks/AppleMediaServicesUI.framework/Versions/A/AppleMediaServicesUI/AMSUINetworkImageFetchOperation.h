@class NSURL, NSURLSessionTask, NSURLSession;

@interface AMSUINetworkImageFetchOperation : AMSUIAssetFetchOperation

@property (retain) NSURLSessionTask *sessionTask;
@property (retain) NSURL *url;
@property (retain) NSURLSession *URLSession;

+ (id)keyPathsForValuesAffectingIsExecuting;
+ (id)keyPathsForValuesAffectingIsFinished;

- (BOOL)isExecuting;
- (void)cancel;
- (BOOL)isFinished;
- (void)start;
- (BOOL)isAsynchronous;
- (void)setQueuePriority:(long long)a0;
- (void).cxx_destruct;
- (void)_didCompleteTaskWithData:(id)a0 error:(id)a1;
- (id)_eagerlyDecompressImage:(id)a0;
- (float)_sessionTaskPriorityForQueuePriority:(long long)a0;
- (id)initWithURL:(id)a0 URLSession:(id)a1;

@end
