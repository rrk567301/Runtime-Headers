@class _TtC12APFoundation15APPromiseBridge;

@interface APPromise : NSObject

@property (retain, nonatomic) _TtC12APFoundation15APPromiseBridge *innerPromise;

- (void)resolve;
- (void)catch:(id /* block */)a0;
- (void)then:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)raceWithTimeout:(double)a0 queue:(id)a1;

@end
