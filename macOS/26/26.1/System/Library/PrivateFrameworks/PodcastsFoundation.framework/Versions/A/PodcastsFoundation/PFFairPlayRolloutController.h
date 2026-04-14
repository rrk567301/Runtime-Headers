@interface PFFairPlayRolloutController : NSObject {
    void /* unknown type, empty encoding */ $__lazy_storage_$_internalQueue;
}

@property (class, nonatomic, readonly) PFFairPlayRolloutController *sharedInstance;

- (BOOL)isEnabled;
- (void).cxx_destruct;
- (id)init;
- (void)didRollbackStatusChangeWithCompletion:(id /* block */)a0;

@end
