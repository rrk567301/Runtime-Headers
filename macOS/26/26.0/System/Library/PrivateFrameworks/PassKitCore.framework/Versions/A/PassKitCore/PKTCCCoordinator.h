@interface PKTCCCoordinator : NSObject

+ (id)allAuthorizations;
+ (long long)authorizationStatusForCapability:(long long)a0 bundleIdentifier:(id)a1;
+ (BOOL)setAuthorizationForCapability:(long long)a0 granted:(BOOL)a1 bundleIdentifier:(id)a2;

@end
