@interface PKTCCCoordinator : NSObject

+ (void)requestAuthorizationForCapability:(long long)a0 completion:(id /* block */)a1;
+ (long long)authorizationStatusForCapability:(long long)a0;
+ (id)allAuthorizations;
+ (long long)authorizationStatusForCapability:(long long)a0 auditToken:(struct { unsigned int x0[8]; })a1;
+ (long long)authorizationStatusForCapability:(long long)a0 bundleIdentifier:(id)a1;
+ (BOOL)setAuthorizationForCapability:(long long)a0 granted:(BOOL)a1 bundleIdentifier:(id)a2;

@end
