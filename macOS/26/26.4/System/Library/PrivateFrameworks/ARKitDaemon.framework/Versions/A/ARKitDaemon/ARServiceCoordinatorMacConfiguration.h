@class ARNetworkDeviceManager;

@interface ARServiceCoordinatorMacConfiguration : ARServiceCoordinatorConfiguration {
    ARNetworkDeviceManager *_networkDeviceManager;
}

- (void).cxx_destruct;
- (void)invalidate;
- (id)init;
- (id)initWithAppConnectionManager:(id)a0 networkDeviceManager:(id)a1 networkServiceControl:(id)a2;

@end
