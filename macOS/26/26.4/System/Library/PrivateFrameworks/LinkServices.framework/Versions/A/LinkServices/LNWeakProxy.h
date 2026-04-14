@interface LNWeakProxy : NSObject {
    id /* block */ _wrapper;
}

@property (readonly, nonatomic) id value;

- (id)initWithValue:(id)a0;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)initWithValue:(id)a0 wrapper:(id /* block */)a1;

@end
