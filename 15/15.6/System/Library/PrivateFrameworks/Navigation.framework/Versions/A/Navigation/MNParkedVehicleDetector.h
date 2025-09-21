@class NSString, MNVehicleMonitor, NSTimer;
@protocol MNParkedVehicleDetectorDelegate;

@interface MNParkedVehicleDetector : NSObject <GEOConfigChangeListenerDelegate, MNVehicleMonitorDelegate> {
    char _isMonitoring;
    MNVehicleMonitor *_vehicleMonitor;
    int _simulateParkedVehicleEventToken;
    long long _state;
    NSTimer *_locationStoppedTimer;
    char _locationStoppedCondition;
    NSTimer *_vehicleDisconnectExpirationTimer;
    char _vehicleDisconnectedCondition;
}

@property (weak, nonatomic) id<MNParkedVehicleDetectorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)startMonitoring;
- (void)stopMonitoring;
- (void)valueChangedForGEOConfigKey:(struct { unsigned int x0; void *x1; })a0;
- (void)_checkParkingConditions;
- (void)_expireVehicleDisconnectSignal;
- (void)_locationStoppedTimer:(id)a0;
- (void)_updateForParkedCar;
- (void)_updateForResumeDriving;
- (void)_updateVehicleMonitorShouldStart:(char)a0;
- (void)updateForLocation:(id)a0;
- (void)vehicleMonitorDidConnectToVehicle:(id)a0;
- (void)vehicleMonitorDidDisconnectFromVehicle:(id)a0;

@end
