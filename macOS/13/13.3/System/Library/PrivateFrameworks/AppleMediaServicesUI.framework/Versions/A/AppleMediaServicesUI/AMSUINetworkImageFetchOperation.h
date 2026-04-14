@class NSURL, NSURLSessionTask, AMSURLSession;

@interface AMSUINetworkImageFetchOperation : AMSUIAssetFetchOperation

@property (retain) NSURLSessionTask *sessionTask;
@property (retain) NSURL *url;
@property (retain) AMSURLSession *URLSession;

+ (id)keyPathsForValuesAffectingIsExecuting;
+ (id)keyPathsForValuesAffectingIsFinished;

- (void).cxx_destruct;
- (void)setQueuePriority:(long long)a0;
- (void)start;
- (void)cancel;
- (BOOL)isAsynchronous;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)_didCompleteTaskWithResult:(id)a0 error:(id)a1;
- (id)_eagerlyDecompressImage:(id)a0;
- (float)_sessionTaskPriorityForQueuePriority:(long long)a0;
- (id)initWithURL:(id)a0 URLSession:(id)a1;

@end
