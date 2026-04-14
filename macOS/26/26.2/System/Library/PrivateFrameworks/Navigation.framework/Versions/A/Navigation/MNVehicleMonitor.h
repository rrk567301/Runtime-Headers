@protocol MNVehicleMonitorDelegate;

@interface MNVehicleMonitor : NSObject {
    int _vehicleConnectedToken;
    int _vehicleDisconnectedToken;
    BOOL _isMonitoring;
}

@property (weak, nonatomic) id<MNVehicleMonitorDelegate> delegate;

- (void)stopMonitoring;
- (void)startMonitoring;
- (void).cxx_destruct;
- (void)dealloc;

@end
