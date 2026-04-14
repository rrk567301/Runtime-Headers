@class NSString, MNVehicleMonitor, MNDispatchTimer;
@protocol MNParkedVehicleDetectorDelegate;

@interface MNParkedVehicleDetector : NSObject <GEOConfigChangeListenerDelegate, MNVehicleMonitorDelegate> {
    BOOL _isMonitoring;
    MNVehicleMonitor *_vehicleMonitor;
    int _simulateParkedVehicleEventToken;
    long long _state;
    MNDispatchTimer *_locationStoppedTimer;
    BOOL _locationStoppedCondition;
    MNDispatchTimer *_vehicleDisconnectExpirationTimer;
    BOOL _vehicleDisconnectedCondition;
}

@property (weak, nonatomic) id<MNParkedVehicleDetectorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)valueChangedForGEOConfigKey:(struct { unsigned int x0; void *x1; })a0;
- (void)startMonitoring;
- (void)dealloc;
- (void)stopMonitoring;
- (void).cxx_destruct;
- (void)_checkParkingConditions;
- (void)_expireVehicleDisconnectSignal;
- (void)_locationStoppedTimerFired;
- (void)_updateForParkedCar;
- (void)_updateForResumeDriving;
- (void)_updateVehicleMonitorShouldStart:(BOOL)a0;
- (void)updateForLocation:(id)a0;
- (void)vehicleMonitorDidConnectToVehicle:(id)a0;
- (void)vehicleMonitorDidDisconnectFromVehicle:(id)a0;

@end
