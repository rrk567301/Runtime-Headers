@class _QLCacheThread, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface QLDiskCacheQueryOperation : NSOperation {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain) NSMutableDictionary *thumbnailRequestBatch;
@property long long thumbnailRequestCount;
@property (retain) _QLCacheThread *cacheThread;

- (void)main;
- (void)cancel;
- (void).cxx_destruct;
- (id)initWithCacheThread:(id)a0;
- (void)dealloc;
- (BOOL)appendThumbnailRequest:(id)a0;

@end
