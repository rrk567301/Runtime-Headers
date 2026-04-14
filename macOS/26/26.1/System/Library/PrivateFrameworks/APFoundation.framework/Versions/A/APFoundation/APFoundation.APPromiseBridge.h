@interface APFoundation.APPromiseBridge : NSObject {
    void /* unknown type, empty encoding */ promise;
}

- (void)then:(id /* block */)a0;
- (void)catch:(id /* block */)a0;
- (void)resolve;
- (void).cxx_destruct;
- (id)init;
- (void)raceWithTimeout:(double)a0 queue:(id)a1;

@end
