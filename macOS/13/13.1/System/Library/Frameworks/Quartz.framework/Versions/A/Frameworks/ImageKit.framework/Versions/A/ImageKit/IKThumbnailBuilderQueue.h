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

- (void)dealloc;
- (id)init;
- (void)lock;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (void)unlock;
- (BOOL)isExecuting;
- (float)progress;
- (void)setDidEndSelector:(SEL)a0;
- (id)thumbnails;
- (void)setThumbnails:(id)a0;
- (void)startTasks;
- (void)thumbnailOperationDidFinished:(id)a0;
- (void)runQLQueue;
- (void)qlOperationDidFinished:(id)a0;
- (void)_decrQueue;
- (void)_decrQLQueue;
- (void)cancelTasks;
- (SEL)didEndSelector;

@end
