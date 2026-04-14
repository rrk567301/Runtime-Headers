@interface ViewBridgeUtilities : NSObject

+ (id)appearanceNamed:(id)a0;
+ (void)builtForPlatform:(unsigned int)a0 againstMinimumSDK:(unsigned int)a1 reply:(id /* block */)a2;
+ (id)copyDeferredBlockQueue;
+ (BOOL)serviceWindowBackgroundColorIsSafe:(id)a0;
+ (void)setApplication:(struct __LSASN { } *)a0 value:(void *)a1 forKey:(struct __CFString { } *)a2;
+ (void)setCurrentApplicationValue:(void *)a0 forKey:(struct __CFString { } *)a1;
+ (id)informationStringForKey:(struct __CFString { } *)a0 forApplication:(struct __LSASN { } *)a1;
+ (id)informationStringForKey:(struct __CFString { } *)a0 forProcess:(int)a1;
+ (void)flushCoreAnimationTransaction;
+ (void)whileHoldingLock:(struct os_unfair_lock_s { unsigned int x0; } *)a0 perform:(id /* block */)a1;
+ (void)allowSettingMousePointerImageInBackground:(BOOL)a0 whilePerformingActions:(id /* block */)a1;
+ (id)dataWithAppearance:(id)a0;
+ (id)appearanceWithData:(id)a0;
+ (void)removeResponder:(id)a0 fromChainOf:(id)a1;
+ (id)describeEventMask:(unsigned int)a0;
+ (id)decodeIdentifier:(id)a0;
+ (id)describeAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)createIdentifier;
+ (id)concreteColorWithColorFromCurrentAppearance:(id)a0;
+ (id)concreteColorWithColor:(id)a0 fromAppearance:(id)a1;

@end
