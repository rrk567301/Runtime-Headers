@class ARNetworkDeviceManager;

@interface ARServiceCoordinatorMacConfiguration : ARServiceCoordinatorConfiguration {
    ARNetworkDeviceManager *_networkDeviceManager;
}

- (void)invalidate;
- (id)init;
- (void).cxx_destruct;
- (id)initWithAppConnectionManager:(id)a0 networkDeviceManager:(id)a1 networkServiceControl:(id)a2;

@end
