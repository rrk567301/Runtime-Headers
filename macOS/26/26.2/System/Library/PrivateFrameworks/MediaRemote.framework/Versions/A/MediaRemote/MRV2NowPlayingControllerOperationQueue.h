@class NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface MRV2NowPlayingControllerOperationQueue : NSObject {
    NSOperationQueue *_queue;
    BOOL _invalidated;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;

- (void)invalidate;
- (void)addOperationWithBlock:(id /* block */)a0;
- (id)initWithDispatchQueue:(id)a0;
- (void).cxx_destruct;

@end
