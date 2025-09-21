@class NSDictionary, NSString;

@interface _HKEntitlements : NSObject {
    NSString *_applicationIdentifier;
}

@property (readonly, copy, nonatomic) NSDictionary *entitlementValues;

+ (id)_containerAppExtensionEntitlementsForCurrentTask;
+ (id)_entitlementsWithSecTask:(struct __SecTask { } *)a0 valueOverrides:(id)a1 error:(id *)a2;
+ (id)entitlementsWithApplicationIdentifier:(id)a0;
+ (id)entitlementsForCurrentTaskWithError:(id *)a0;
+ (void)_setEntitlementsForCurrentTask:(id)a0;
+ (id)entitlementsWithConnection:(id)a0 error:(id *)a1;
+ (id)_allowedEntitlementsSet;
+ (id)entitlementsWithDictionary:(id)a0;

- (id)typesForWriteAuthorizationOverride;
- (id)stringForEntitlement:(id)a0;
- (BOOL)hasEntitlement:(id)a0;
- (BOOL)arrayEntitlement:(id)a0 containsString:(id)a1;
- (id)_typesFromIdentifierArray:(id)a0;
- (id)_initWithEntitlementValues:(id)a0;
- (id)init;
- (id)valueForEntitlement:(id)a0;
- (BOOL)hasAccessEntitlementWithIdentifier:(id)a0;
- (id)description;
- (id)typesForReadAuthorizationBypass;
- (BOOL)hasPrivateMetadataAccess;
- (id)applicationIdentifier;
- (BOOL)hasBackgroundDeliveryAPIAccess;
- (BOOL)hasPrivateAccessEntitlementWithIdentifier:(id)a0;
- (id)typesForReadAuthorizationOverride;
- (void).cxx_destruct;

@end
