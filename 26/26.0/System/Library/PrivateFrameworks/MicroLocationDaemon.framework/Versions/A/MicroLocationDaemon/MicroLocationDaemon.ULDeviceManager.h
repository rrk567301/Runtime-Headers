@interface MicroLocationDaemon.ULDeviceManager : NSObject {
    void /* function */ deviceConnectedHandler;
    void /* function */ deviceDisconnectedHandler;
    void /* unknown type, empty encoding */ thisDeviceClass;
    void /* unknown type, empty encoding */ trackedDeviceClass;
    void /* unknown type, empty encoding */ activeDeviceClasses;
}

@property (nonatomic, copy) id /* block */ deviceConnectedHandler;
@property (nonatomic, copy) id /* block */ deviceDisconnectedHandler;

- (id)init;
- (void).cxx_destruct;
- (void)deviceConnectedWithDeviceClass:(unsigned long long)a0;
- (void)deviceDisconnectedWithDeviceClass:(unsigned long long)a0;
- (unsigned long long)getThisDeviceClass;
- (unsigned long long)getTrackedDeviceClass;
- (void)updateTrackedDevice;

@end
