@interface PFFairPlayRolloutController : NSObject {
    void /* unknown type, empty encoding */ $__lazy_storage_$_internalQueue;
}

@property (class, nonatomic, readonly) PFFairPlayRolloutController *sharedInstance;

- (void).cxx_destruct;
- (BOOL)isEnabled;
- (id)init;
- (void)didRollbackStatusChangeWithCompletion:(id /* block */)a0;

@end
