@interface PFFairPlayRolloutController : NSObject {
    void /* unknown type, empty encoding */ $__lazy_storage_$_internalQueue;
}

@property (class, nonatomic, readonly) PFFairPlayRolloutController *sharedInstance;

- (BOOL)isEnabled;
- (id)init;
- (void).cxx_destruct;
- (void)didRollbackStatusChangeWithCompletion:(id /* block */)a0;

@end
