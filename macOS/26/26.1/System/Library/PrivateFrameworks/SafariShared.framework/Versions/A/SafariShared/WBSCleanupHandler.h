@interface WBSCleanupHandler : NSObject {
    id /* block */ _block;
}

- (id)initWithBlock:(id /* block */)a0;
- (void)invalidate;
- (void)dealloc;
- (void).cxx_destruct;

@end
