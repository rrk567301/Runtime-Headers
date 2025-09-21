@class LockdownModeManagerInternal;

@interface LockdownModeManager : NSObject

@property (readonly) LockdownModeManagerInternal *underlyingObject;
@property (readonly, nonatomic) char enabled;
@property (readonly, nonatomic) char enabledInAccount;

+ (id)shared;

- (id)init;
- (void).cxx_destruct;
- (void)setEnabled:(char)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)getEnabledInAccount:(char)a0 completion:(id /* block */)a1;
- (void)enableIfNeeded:(char)a0 completion:(id /* block */)a1;
- (void)migrateIfNeededWithCompletion:(id /* block */)a0;
- (void)notifyRestrictionChanged:(id)a0;
- (void)rebootIfNeeded;

@end
