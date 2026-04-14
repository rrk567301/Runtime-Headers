@class NSObject;
@protocol OS_dispatch_source;

@interface LACTimer : NSObject {
    NSObject<OS_dispatch_source> *_timer;
    BOOL _isRunning;
}

@property (readonly, nonatomic) BOOL isRunning;

- (void).cxx_destruct;
- (void)cancel;
- (void)_dispatchAfter:(double)a0 inQueue:(id)a1 repeat:(BOOL)a2 block:(id /* block */)a3;
- (void)dispatchAfter:(double)a0 inQueue:(id)a1 block:(id /* block */)a2;
- (void)dispatchAfter:(double)a0 inQueue:(id)a1 repeat:(BOOL)a2 block:(id /* block */)a3;

@end
