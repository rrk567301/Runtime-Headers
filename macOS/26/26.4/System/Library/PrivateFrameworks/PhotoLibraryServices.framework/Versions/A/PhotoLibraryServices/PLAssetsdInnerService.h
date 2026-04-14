@class PLAssetsdServicePermissions, PLLazyObject;

@interface PLAssetsdInnerService : NSObject {
    PLAssetsdServicePermissions *_permissions;
    long long _requiredState;
    PLLazyObject *_lazyService;
}

- (void)_validateWithContext:(id)a0 reply:(id /* block */)a1;
- (void)getInnerServiceWithContext:(id)a0 validate:(BOOL)a1 reply:(id /* block */)a2;
- (id)_awaitForRequiredLibraryStateWithContext:(id)a0;
- (void).cxx_destruct;
- (id)innerServiceWithContext:(id)a0 forceValidation:(BOOL)a1;
- (id)initWithPermissions:(id)a0 requiredLibraryServicesState:(long long)a1 lazyService:(id)a2;
- (void)_awaitForRequiredLibraryStateWithContext:(id)a0 reply:(id /* block */)a1;
- (id)_validateWithContext:(id)a0;

@end
