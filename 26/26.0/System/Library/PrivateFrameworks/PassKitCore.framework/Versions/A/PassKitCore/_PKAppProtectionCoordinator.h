@interface _PKAppProtectionCoordinator : NSObject

@property (class, nonatomic, readonly) _PKAppProtectionCoordinator *shared;

+ (id)sharedInstanceForApp:(id)a0;

- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)requestAccessWithCompletionHandler:(void (^)(BOOL))a0;
- (void)requestAccess;
- (BOOL)isEffectivelyLocked;
- (void)isShieldRequiredWithCompletionHandler:(void (^)(BOOL))a0;

@end
