@class QLThumbnailQueue;

@interface QLThumbnailQueueOperation : NSOperation {
    BOOL _finished;
    BOOL _executing;
}

@property struct __QLThumbnail { } *thumbnail;
@property (weak) QLThumbnailQueue *delegate;

- (void)setExecuting:(BOOL)a0;
- (BOOL)isExecuting;
- (BOOL)isConcurrent;
- (void)cancel;
- (BOOL)isFinished;
- (void)finish;
- (void)setFinished:(BOOL)a0;
- (void)main;
- (void).cxx_destruct;
- (void)start;
- (void)dealloc;

@end
