@interface ABObjectDeathWatcher : NSObject {
    void *_objectPointer;
    id /* block */ _block;
}

+ (void)watchObjectForDeath:(id)a0 withBlock:(id /* block */)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithObject:(id)a0 block:(id /* block */)a1;

@end
