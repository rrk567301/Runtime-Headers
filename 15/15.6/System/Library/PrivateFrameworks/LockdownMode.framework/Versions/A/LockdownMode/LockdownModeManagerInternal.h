@interface LockdownModeManagerInternal : NSObject {
    void /* unknown type, empty encoding */ $__lazy_storage_$_connection;
}

@property (class, nonatomic, readonly) LockdownModeManagerInternal *shared;

@property (nonatomic, readonly) char enabled;
@property (nonatomic, readonly) char enabledInAccount;

- (id)init;
- (void).cxx_destruct;
- (void)setEnabled:(char)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)getEnabledInAccount:(char)a0 completion:(id /* block */)a1;
- (void)enableIfNeeded:(char)a0 completion:(id /* block */)a1;
- (void)migrateIfNeededWithCompletion:(id /* block */)a0;
- (void)notifyRestrictionChanged:(id)a0;
- (void)rebootIfNeeded;

@end
