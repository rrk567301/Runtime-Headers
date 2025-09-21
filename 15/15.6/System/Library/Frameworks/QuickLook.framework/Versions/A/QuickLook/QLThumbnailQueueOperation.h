@class QLThumbnailQueue;

@interface QLThumbnailQueueOperation : NSOperation {
    char _finished;
    char _executing;
}

@property struct __QLThumbnail { } *thumbnail;
@property (weak) QLThumbnailQueue *delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (void)finish;
- (void)start;
- (void)cancel;
- (char)isConcurrent;
- (char)isExecuting;
- (char)isFinished;
- (void)main;
- (void)setFinished:(char)a0;
- (void)setExecuting:(char)a0;

@end
