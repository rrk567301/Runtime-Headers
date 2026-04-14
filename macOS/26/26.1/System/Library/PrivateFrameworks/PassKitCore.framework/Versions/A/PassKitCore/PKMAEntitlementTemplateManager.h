@class PKMobileAssetManager;

@interface PKMAEntitlementTemplateManager : NSObject {
    PKMobileAssetManager *_mobileAssetManager;
}

- (void).cxx_destruct;
- (id)init;
- (id)_templatesFromAssetBundle:(id)a0;
- (id)cachedEntitlementTemplates;
- (void)entitlementTemplates:(id /* block */)a0;

@end
