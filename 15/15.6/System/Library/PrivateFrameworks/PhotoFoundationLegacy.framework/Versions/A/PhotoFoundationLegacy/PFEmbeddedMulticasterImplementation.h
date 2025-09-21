@interface PFEmbeddedMulticasterImplementation

+ (void /* unknown type, empty encoding */)initialize;

- (void)removeReceiver:(id)a0;
- (char)addReceiver:(id)a0;
- (char)addWeakReceiver:(id)a0;
- (void)distributeSelector:(SEL)a0 distributionBlock:(id /* block */)a1;

@end
