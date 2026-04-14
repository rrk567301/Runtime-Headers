@class QLThumbnailQueue;

@interface QLThumbnailQueueOperation : NSOperation {
    BOOL _finished;
    BOOL _executing;
}

@property struct __QLThumbnail { } *thumbnail;
@property (weak) QLThumbnailQueue *delegate;

- (BOOL)isConcurrent;
- (BOOL)isExecuting;
- (void)setFinished:(BOOL)a0;
- (void)finish;
- (void)start;
- (BOOL)isFinished;
- (void)cancel;
- (void)main;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setExecuting:(BOOL)a0;

@end
