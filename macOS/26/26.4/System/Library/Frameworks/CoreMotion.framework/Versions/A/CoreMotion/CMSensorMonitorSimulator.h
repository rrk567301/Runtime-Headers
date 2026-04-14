@class CMSensorMonitorSimulatorProxy;

@interface CMSensorMonitorSimulator : NSObject

@property (readonly, nonatomic) CMSensorMonitorSimulatorProxy *sensorMonitorSimulatorProxy;

- (id)init;
- (void)dealloc;
- (void)simulateMotionSensorDataForType:(unsigned long long)a0 payload:(id)a1 withHandler:(id /* block */)a2;

@end
