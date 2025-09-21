@class NSOperationQueue;

@interface MRV2NowPlayingControllerOperationQueue : NSObject {
    NSOperationQueue *_queue;
    char _invalidated;
}

- (void).cxx_destruct;
- (void)invalidate;
- (void)addOperationWithBlock:(id /* block */)a0;
- (id)initWithQueue:(id)a0;

@end
