@class QLThumbnailQueue;

@interface QLThumbnailQueueOperation : NSOperation {
    BOOL _finished;
    BOOL _executing;
}

@property struct __QLThumbnail { } *thumbnail;
@property (weak) QLThumbnailQueue *delegate;

- (void)finish;
- (BOOL)isFinished;
- (BOOL)isConcurrent;
- (void)main;
- (BOOL)isExecuting;
- (void)setExecuting:(BOOL)a0;
- (void)cancel;
- (void).cxx_destruct;
- (void)setFinished:(BOOL)a0;
- (void)start;
- (void)dealloc;

@end
