@interface HomeKitDaemon.HomeMatterServicesCoordinator : NSObject <HMDHomeMatterServicesCoordinator> {
    void /* unknown type, empty encoding */ featuresDataSource;
    void /* unknown type, empty encoding */ matterServer;
    void /* unknown type, empty encoding */ matterServicesFactory;
    void /* unknown type, empty encoding */ home;
}

- (void)startWithCompletionHandler:(void (^)(void))a0;
- (id)init;
- (void)stopWithCompletionHandler:(void (^)(void))a0;
- (void).cxx_destruct;

@end
