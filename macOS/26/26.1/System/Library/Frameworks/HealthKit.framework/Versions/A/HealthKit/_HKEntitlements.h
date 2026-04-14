@class NSDictionary, NSString;

@interface _HKEntitlements : NSObject {
    NSString *_applicationIdentifier;
}

@property (readonly, copy, nonatomic) NSDictionary *entitlementValues;

+ (id)entitlementsWithApplicationIdentifier:(id)a0;
+ (id)_entitlementsWithSecTask:(struct __SecTask { } *)a0 valueOverrides:(id)a1 error:(id *)a2;
+ (id)entitlementsWithDictionary:(id)a0;
+ (void)_setEntitlementsForCurrentTask:(id)a0;
+ (id)entitlementsWithConnection:(id)a0 error:(id *)a1;
+ (id)entitlementsForCurrentTaskWithError:(id *)a0;
+ (id)_containerAppExtensionEntitlementsForCurrentTask;
+ (id)_allowedEntitlementsSet;

- (BOOL)hasPrivateAccessEntitlementWithIdentifier:(id)a0;
- (BOOL)hasBackgroundDeliveryAPIAccess;
- (id)typesForWriteAuthorizationOverride;
- (id)stringForEntitlement:(id)a0;
- (id)applicationIdentifier;
- (id)_typesFromIdentifierArray:(id)a0;
- (BOOL)hasPrivateMetadataAccess;
- (id)typesForReadAuthorizationBypass;
- (id)description;
- (id)valueForEntitlement:(id)a0;
- (id)typesForReadAuthorizationOverride;
- (BOOL)arrayEntitlement:(id)a0 containsString:(id)a1;
- (id)_initWithEntitlementValues:(id)a0;
- (BOOL)hasAccessEntitlementWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)hasEntitlement:(id)a0;

@end
