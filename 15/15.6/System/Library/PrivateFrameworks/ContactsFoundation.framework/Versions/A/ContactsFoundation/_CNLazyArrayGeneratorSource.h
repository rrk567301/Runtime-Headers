@interface _CNLazyArrayGeneratorSource : NSObject <_CNLazyArrayOperation> {
    id _state;
    id /* block */ _condition;
    id /* block */ _nextState;
    id /* block */ _resultFromState;
    char _firstTime;
}

- (void).cxx_destruct;
- (id)nextObject;
- (id)initWithInitialState:(id)a0 condition:(id /* block */)a1 nextState:(id /* block */)a2 resultSelector:(id /* block */)a3;

@end
