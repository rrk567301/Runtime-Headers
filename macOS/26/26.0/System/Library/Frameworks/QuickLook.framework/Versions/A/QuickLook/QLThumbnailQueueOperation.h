@class QLThumbnailQueue;

@interface QLThumbnailQueueOperation : NSOperation {
    BOOL _finished;
    BOOL _executing;
}

@property struct __QLThumbnail { } *thumbnail;
@property (weak) QLThumbnailQueue *delegate;

- (void)setExecuting:(BOOL)a0;
- (void)setFinished:(BOOL)a0;
- (BOOL)isFinished;
- (void)main;
- (BOOL)isExecuting;
- (void)start;
- (void)dealloc;
- (BOOL)isConcurrent;
- (void)cancel;
- (void)finish;
- (void).cxx_destruct;

@end
