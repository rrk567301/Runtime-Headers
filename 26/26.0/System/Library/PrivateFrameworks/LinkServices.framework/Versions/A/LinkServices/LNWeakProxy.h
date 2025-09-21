@interface LNWeakProxy : NSObject {
    id /* block */ _wrapper;
}

@property (readonly, nonatomic) id value;

- (id)initWithValue:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithValue:(id)a0 wrapper:(id /* block */)a1;

@end
