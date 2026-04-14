@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CUCoalescer : NSObject {
    BOOL _invalidateCalled;
    double _startTime;
    NSObject<OS_dispatch_source> *_timer;
    int _triggered;
}

@property (copy, nonatomic) id /* block */ actionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (nonatomic) double leeway;
@property (nonatomic) double maxDelay;
@property (nonatomic) double minDelay;

- (void)invalidate;
- (void)_timerFired;
- (void)_cancel;
- (void)cancel;
- (id)init;
- (void)trigger;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_invalidate;
- (void)_trigger;

@end
