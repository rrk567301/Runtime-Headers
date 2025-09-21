@interface FigThreadSafeCALayer : FigBaseCALayer

- (id)initWithoutDeferredTransaction;
- (id)initWithDeferredTransaction:(struct OpaqueFigDeferredTransaction { } *)a0;

@end
