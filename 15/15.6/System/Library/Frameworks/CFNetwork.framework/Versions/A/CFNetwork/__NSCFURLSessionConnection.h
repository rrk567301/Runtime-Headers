@class NSURLResponse, NSURLSessionTask, NSObject;
@protocol OS_dispatch_queue, __NSCFURLSessionConnectionDelegate, OS_dispatch_data;

@interface __NSCFURLSessionConnection : NSObject <NSCopying> {
    NSURLSessionTask *_task;
    NSObject<OS_dispatch_queue> *_workQueue;
    id<__NSCFURLSessionConnectionDelegate> _delegate;
    char _isFromCache;
    NSURLResponse *_cacheResponse;
    NSObject<OS_dispatch_data> *_cacheData;
    unsigned long long _cacheDataMax;
    long long _maxCacheEntrySize;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)resume;
- (void)suspend;
- (void)cancel;
- (void)expectedProgressTargetChanged;
- (id)initWithTask:(id)a0 delegate:(id)a1 delegateQueue:(id)a2;
- (void)setBytesPerSecondLimit:(long long)a0;
- (void)setIsDownload:(char)a0;
- (void)setPoolPriority:(long long)a0;
- (void)setPriorityHint:(float)a0 incremental:(char)a1;
- (void)setTLSMaximumSupportedProtocolVersion:(unsigned short)a0;
- (void)setTLSMinimumSupportedProtocolVersion:(unsigned short)a0;

@end
