@class QLThumbnailQueue;

@interface QLThumbnailQueueOperation : NSOperation {
    BOOL _finished;
    BOOL _executing;
}

@property struct __QLThumbnail { } *thumbnail;
@property (weak) QLThumbnailQueue *delegate;

- (void)finish;
- (BOOL)isExecuting;
- (BOOL)isConcurrent;
- (void)cancel;
- (BOOL)isFinished;
- (void)start;
- (void)main;
- (void)setFinished:(BOOL)a0;
- (void).cxx_destruct;
- (void)setExecuting:(BOOL)a0;
- (void)dealloc;

@end
