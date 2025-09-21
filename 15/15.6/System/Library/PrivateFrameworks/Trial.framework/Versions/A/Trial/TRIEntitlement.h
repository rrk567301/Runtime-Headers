@interface TRIEntitlement : NSObject

+ (char)_isValidFormatForTeamId:(id)a0;
+ (id)_teamIdFromSecTaskWithAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)applicationBundleIdentifierFromSelf;
+ (id)applicationBundleIdentifierWithAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)codeSignIdentifierWithAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)entitlementKeyForApplicationBundleIdentifier;
+ (char)isEntitledToApplicationGroup:(id)a0 withAuditToken:(struct { unsigned int x0[8]; })a1;
+ (id)objectForCurrentProcessEntitlement:(id)a0;
+ (id)objectForEntitlement:(id)a0 withAuditToken:(struct { unsigned int x0[8]; })a1;
+ (id)stringForCurrentProcessEntitlement:(id)a0;
+ (id)stringForEntitlement:(id)a0 fromSecTask:(struct __SecTask { } *)a1;
+ (id)stringForEntitlement:(id)a0 withAuditToken:(struct { unsigned int x0[8]; })a1;
+ (id)teamIdWithAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)valueForEntitlement:(id)a0 fromSecTask:(struct __SecTask { } *)a1 ofType:(unsigned long long *)a2;

@end
