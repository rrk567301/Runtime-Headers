@interface ViewBridgeUtilities : NSObject

+ (id)appearanceNamed:(id)a0;
+ (id)createIdentifier;
+ (void)removeResponder:(id)a0 fromChainOf:(id)a1;
+ (void)builtForPlatform:(unsigned int)a0 againstMinimumSDK:(unsigned int)a1 reply:(id /* block */)a2;
+ (void)allowSettingMousePointerImageInBackground:(BOOL)a0;
+ (void)allowSettingMousePointerImageInBackground:(BOOL)a0 whilePerformingActions:(id /* block */)a1;
+ (id)describeAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)informationStringForKey:(struct __CFString { } *)a0 forProcess:(int)a1;
+ (void)setCurrentApplicationValue:(void *)a0 forKey:(struct __CFString { } *)a1;
+ (id)describeEventMask:(unsigned int)a0;
+ (id)appearanceWithData:(id)a0;
+ (id)concreteColorWithColor:(id)a0 fromAppearance:(id)a1;
+ (void)whileHoldingLock:(struct os_unfair_lock_s { unsigned int x0; } *)a0 perform:(id /* block */)a1;
+ (void)flushCoreAnimationTransaction;
+ (id)dataWithAppearance:(id)a0;
+ (void)setApplication:(struct __LSASN { } *)a0 value:(void *)a1 forKey:(struct __CFString { } *)a2;
+ (id)informationStringForKey:(struct __CFString { } *)a0 forApplication:(struct __LSASN { } *)a1;
+ (BOOL)serviceWindowBackgroundColorIsSafe:(id)a0;
+ (id)concreteColorWithColorFromCurrentAppearance:(id)a0;
+ (BOOL)maintainConstraintForView:(id)a0 withIdentifier:(id)a1 andConstant:(double)a2 createdByMeansOf:(id /* block */)a3;
+ (id)decodeIdentifier:(id)a0;

@end
