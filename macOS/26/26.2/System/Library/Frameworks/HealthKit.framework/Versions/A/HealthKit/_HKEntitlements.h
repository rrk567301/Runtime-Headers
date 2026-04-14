@class NSDictionary, NSString;

@interface _HKEntitlements : NSObject {
    NSString *_applicationIdentifier;
}

@property (readonly, copy, nonatomic) NSDictionary *entitlementValues;

+ (id)entitlementsWithConnection:(id)a0 error:(id *)a1;
+ (id)_containerAppExtensionEntitlementsForCurrentTask;
+ (id)_entitlementsWithSecTask:(struct __SecTask { } *)a0 valueOverrides:(id)a1 error:(id *)a2;
+ (id)entitlementsWithDictionary:(id)a0;
+ (id)_allowedEntitlementsSet;
+ (id)entitlementsForCurrentTaskWithError:(id *)a0;
+ (id)entitlementsWithApplicationIdentifier:(id)a0;
+ (void)_setEntitlementsForCurrentTask:(id)a0;

- (id)stringForEntitlement:(id)a0;
- (id)_initWithEntitlementValues:(id)a0;
- (BOOL)arrayEntitlement:(id)a0 containsString:(id)a1;
- (BOOL)hasPrivateAccessEntitlementWithIdentifier:(id)a0;
- (id)typesForReadAuthorizationBypass;
- (id)typesForReadAuthorizationOverride;
- (BOOL)hasBackgroundDeliveryAPIAccess;
- (BOOL)hasEntitlement:(id)a0;
- (id)valueForEntitlement:(id)a0;
- (void).cxx_destruct;
- (id)typesForWriteAuthorizationOverride;
- (id)applicationIdentifier;
- (id)_typesFromIdentifierArray:(id)a0;
- (BOOL)hasPrivateMetadataAccess;
- (id)description;
- (BOOL)hasAccessEntitlementWithIdentifier:(id)a0;
- (id)init;

@end
