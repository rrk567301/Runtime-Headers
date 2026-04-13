@interface WBSCleanupHandler : NSObject {
    id /* block */ _block;
}

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;

@end
