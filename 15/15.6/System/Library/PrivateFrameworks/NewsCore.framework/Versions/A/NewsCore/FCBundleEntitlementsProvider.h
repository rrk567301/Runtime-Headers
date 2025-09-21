@class FCEntitlementService;
@protocol FCEntitlementsOverrideProviderType, FCCoreConfigurationManager;

@interface FCBundleEntitlementsProvider : NSObject <FCBundleEntitlementsProviderType>

@property (readonly, nonatomic) id<FCCoreConfigurationManager> configurationManager;
@property (readonly, nonatomic) FCEntitlementService *entitlementService;
@property (retain, nonatomic) id<FCEntitlementsOverrideProviderType> entitlementsOverrideProvider;

- (void).cxx_destruct;
- (void)_fetchEntitlementsWithIgnoreCache:(char)a0 configuration:(id)a1 completion:(id /* block */)a2;
- (void)fetchEntitlementsWithIgnoreCache:(char)a0 completion:(id /* block */)a1;
- (id)initWithConfigurationManager:(id)a0 entitlementService:(id)a1;

@end
