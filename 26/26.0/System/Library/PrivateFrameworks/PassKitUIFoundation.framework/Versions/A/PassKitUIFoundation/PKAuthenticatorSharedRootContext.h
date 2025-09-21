@class LAContext;

@interface PKAuthenticatorSharedRootContext : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    LAContext *_LAContext;
}

+ (id)sharedInstance;

- (id)externalizedContext;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)resetWithCompletion:(id /* block */)a0;
- (void)_consumeWithCompletion:(id /* block */)a0 reset:(BOOL)a1;
- (void)consumeWithCompletion:(id /* block */)a0;

@end
