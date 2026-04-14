@interface NSReduceObservationTransformer : NSObservationTransformer {
    id /* block */ _reducer;
    id _accumulator;
}

+ (id)reduceValue:(id)a0 withReducer:(id /* block */)a1;

- (void)finishObserving;
- (void)dealloc;
- (void)_receiveBox:(id)a0;
- (id)initWithBlock:(id /* block */)a0 initialValue:(id)a1;

@end
