@interface GCDisposable : NSObject {
    id /* block */ _handler;
}

+ (id)withCleanupHandler:(id /* block */)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCleanupHandler:(id /* block */)a0;

@end
