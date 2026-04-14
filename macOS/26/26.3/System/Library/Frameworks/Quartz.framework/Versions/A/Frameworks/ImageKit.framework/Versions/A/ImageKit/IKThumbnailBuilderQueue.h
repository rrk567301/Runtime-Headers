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

- (BOOL)isExecuting;
- (void)setDelegate:(id)a0;
- (id)delegate;
- (float)progress;
- (id)init;
- (void)startTasks;
- (void)unlock;
- (void).cxx_destruct;
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
