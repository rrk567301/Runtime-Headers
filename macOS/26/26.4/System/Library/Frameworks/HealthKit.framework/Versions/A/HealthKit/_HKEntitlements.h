@class NSDictionary, NSString;

@interface _HKEntitlements : NSObject {
    NSString *_applicationIdentifier;
}

@property (readonly, copy, nonatomic) NSDictionary *entitlementValues;

+ (id)_containerAppExtensionEntitlementsForCurrentTask;
+ (id)_entitlementsWithSecTask:(struct __SecTask { } *)a0 valueOverrides:(id)a1 error:(id *)a2;
+ (id)entitlementsForCurrentTaskWithError:(id *)a0;
+ (void)_setEntitlementsForCurrentTask:(id)a0;
+ (id)_allowedEntitlementsSet;
+ (id)entitlementsWithApplicationIdentifier:(id)a0;
+ (id)entitlementsWithConnection:(id)a0 error:(id *)a1;
+ (id)entitlementsWithDictionary:(id)a0;

- (id)stringForEntitlement:(id)a0;
- (id)valueForEntitlement:(id)a0;
- (BOOL)arrayEntitlement:(id)a0 containsString:(id)a1;
- (BOOL)hasPrivateAccessEntitlementWithIdentifier:(id)a0;
- (BOOL)hasPrivateMetadataAccess;
- (void).cxx_destruct;
- (id)_initWithEntitlementValues:(id)a0;
- (id)init;
- (id)_typesFromIdentifierArray:(id)a0;
- (BOOL)hasAccessEntitlementWithIdentifier:(id)a0;
- (BOOL)hasEntitlement:(id)a0;
- (id)description;
- (id)typesForReadAuthorizationBypass;
- (id)applicationIdentifier;
- (BOOL)hasBackgroundDeliveryAPIAccess;
- (id)typesForReadAuthorizationOverride;
- (id)typesForWriteAuthorizationOverride;

@end
