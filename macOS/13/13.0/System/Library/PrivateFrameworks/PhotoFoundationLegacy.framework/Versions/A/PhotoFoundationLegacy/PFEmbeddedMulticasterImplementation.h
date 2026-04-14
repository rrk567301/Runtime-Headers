@interface PFEmbeddedMulticasterImplementation

+ (void /* unknown type, empty encoding */)initialize;

- (BOOL)addReceiver:(id)a0;
- (void)removeReceiver:(id)a0;
- (void)distributeSelector:(SEL)a0 distributionBlock:(id /* block */)a1;
- (BOOL)addWeakReceiver:(id)a0;

@end
