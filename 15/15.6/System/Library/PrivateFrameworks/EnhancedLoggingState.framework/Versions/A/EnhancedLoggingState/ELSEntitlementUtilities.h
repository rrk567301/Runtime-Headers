@interface ELSEntitlementUtilities : NSObject

+ (char)currentProcessHasEntitlement:(id)a0;
+ (char)auditToken:(struct { unsigned int x0[8]; } *)a0 hasEntitlement:(id)a1;
+ (void)assertCurrentProcessHasEntitlement;
+ (id)entitlementMissingMessage;

@end
