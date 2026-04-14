@class NSString;

@interface CBConnectionsObserver : NSObject <CBCentralManagerDelegate>

@property int maxHAPConnections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)centralManagerDidUpdateState:(id)a0;
- (BOOL)cleanupWithError:(id *)a0;
- (id)getStatus;
- (void)bluetoothStatusNotification:(id)a0;
- (int)getAvailableHAPConnections;
- (id)initWithCentralManager:(id)a0 Queue:(id)a1 Error:(id *)a2;
- (void)requestStatusUpdate;

@end
