@interface CPApplicationLauncherSwift : NSObject {
    void /* unknown type, empty encoding */ behaviors;
    void /* unknown type, empty encoding */ featureFlags;
}

- (id)init;
- (void).cxx_destruct;
- (void)launchAppForActivitySession:(id)a0 options:(long long)a1 completion:(id /* block */)a2;
- (void)revokeBackgroundAuthorizationForBundleID:(id)a0;
- (void)revokeBackgroundAuthorizationForSession:(id)a0;
- (void)authorizePiPForActivitySession:(id)a0 completion:(id /* block */)a1;

@end
