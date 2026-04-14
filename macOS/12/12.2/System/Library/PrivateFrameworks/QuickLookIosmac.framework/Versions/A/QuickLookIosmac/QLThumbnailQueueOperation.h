@class QLThumbnailQueue;

@interface QLThumbnailQueueOperation : NSOperation {
    BOOL _finished;
    BOOL _executing;
}

@property struct __QLThumbnail { } *thumbnail;
@property (weak) QLThumbnailQueue *delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (void)finish;
- (void)start;
- (void)cancel;
- (void)main;
- (void)setFinished:(BOOL)a0;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isConcurrent;
- (void)setExecuting:(BOOL)a0;

@end
