@class NSError;

@interface HomeKitDaemon.MobileAssetManager : _TtCs12_SwiftObject <HMDMobileAssetManager> {
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ notificationCenter;
    void /* unknown type, empty encoding */ scheduler;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ updating;
}

- (void)startWithCompletion:(void (^)(void))a0;
- (id)dumpState;
- (void)clearLocalInfoWithCompletion:(void (^)(NSError *))a0;
- (void)purgeAllInstalledAssetsWithCompletion:(void (^)(void))a0;
- (void)updateAssetsWithForce:(BOOL)a0 completion:(void (^)(long long, long long, NSError *))a1;

@end
