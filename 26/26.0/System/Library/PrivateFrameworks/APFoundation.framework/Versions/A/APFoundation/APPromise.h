@class _TtC12APFoundation15APPromiseBridge;

@interface APPromise : NSObject

@property (retain, nonatomic) _TtC12APFoundation15APPromiseBridge *innerPromise;

- (void)then:(id /* block */)a0;
- (void)resolve;
- (void)catch:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)raceWithTimeout:(double)a0 queue:(id)a1;

@end
