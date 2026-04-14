@interface HVObjectDeallocWatcher : NSObject {
    id _watchedObj;
    id /* block */ _block;
}

+ (id)watchObjectForDeath:(id)a0 withBlock:(id /* block */)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithObject:(id)a0 block:(id /* block */)a1;

@end
