@interface WBSCleanupHandler : NSObject {
    id /* block */ _block;
}

- (void)invalidate;
- (id)initWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
