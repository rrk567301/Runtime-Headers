@interface SHEntitlements : NSObject

@property char isEntitledForStorefront;
@property (readonly) char isEntitledForMicrophone;
@property (readonly) char isEntitledForInternalClient;

- (id)init;
- (id)initWithConnection:(id)a0;
- (char)boolValueOfEntitlement:(id)a0 fromConnection:(id)a1;
- (char)boolValueOfEntitlement:(id)a0 fromSecTask:(struct __SecTask { } *)a1;
- (void)configureEntitlementsForConnection:(id)a0;
- (void)configureEntitlementsForTask:(struct __SecTask { } *)a0;
- (void *)copyValueOfEntitlement:(id)a0 fromSecTask:(struct __SecTask { } *)a1;
- (char)entitlementArray:(id)a0 containsEntitlementValue:(id)a1 fromConnection:(id)a2;
- (char)entitlementArray:(id)a0 containsEntitlementValue:(id)a1 fromSecTask:(struct __SecTask { } *)a2;
- (char)hasRequiredEntitlements:(id)a0;
- (char)tccBoolValueOfEntitlement:(id)a0 fromConnection:(id)a1;

@end
