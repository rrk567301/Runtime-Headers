@class NSArray, NSOperationQueue, NSLock;

@interface IKThumbnailBuilderQueue : NSObject {
    NSArray *_thumbnails;
    id _delegate;
    SEL _didEndSelector;
    NSOperationQueue *_queue;
    struct __QLThumbnailQueue { } *_qlQueue;
    int _queueLength;
    int _qlQueueLength;
    BOOL _qlLoopRunning;
    BOOL _started;
    NSLock *_lock;
}

- (void)startTasks;
- (void)unlock;
- (float)progress;
- (id)delegate;
- (BOOL)isExecuting;
- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (id)init;
- (void)lock;
- (void)dealloc;
- (void)setDidEndSelector:(SEL)a0;
- (void)setThumbnails:(id)a0;
- (id)thumbnails;
- (void)_decrQLQueue;
- (void)_decrQueue;
- (void)cancelTasks;
- (SEL)didEndSelector;
- (void)qlOperationDidFinished:(id)a0;
- (void)runQLQueue;
- (void)thumbnailOperationDidFinished:(id)a0;

@end
