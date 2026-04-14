@class CBController;

@interface ULBluetoothMonitor : ULEventMonitor

@property (retain, nonatomic) CBController *controller;
@property (nonatomic) BOOL powerOn;

- (void).cxx_destruct;
- (void)stopMonitoring:(id)a0;
- (void)startMonitoring:(id)a0;
- (BOOL)_checkPowerOnForBluetoothState:(long long)a0;
- (void)_bluetoothStateChangeHandler;
- (void)_invalidationHandler;
- (id)latestEventAfterAddingObserverForEventName:(id)a0;

@end
