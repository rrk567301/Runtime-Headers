@class NSObject;
@protocol OS_dispatch_queue;

@interface CMSensorMonitorSimulatorProxy : NSObject {
    struct unique_ptr<CLConnectionClient, std::default_delete<CLConnectionClient>> { struct CLConnectionClient *__ptr_; } fLocationdConnection;
    id /* block */ fHandler;
    NSObject<OS_dispatch_queue> *fInternalQueue;
}

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_simulateMotionSensorDataForType:(unsigned long long)a0 payload:(id)a1 withHandler:(id /* block */)a2;
- (id)initWithSensorMonitorTests;

@end
