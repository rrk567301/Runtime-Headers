@interface LNDeallocationHandler : NSObject {
    id _object;
    id /* block */ _deallocationHandler;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithObject:(id)a0 deallocationHandler:(id /* block */)a1;

@end
