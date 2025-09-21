@interface CUFindMyLocateMeDeviceMonitor : NSObject {
    void /* unknown type, empty encoding */ _dispatchQueue;
    void /* unknown type, empty encoding */ _monitorTask;
    void /* function */ meDeviceUpdatedHandler;
    void /* unknown type, empty encoding */ _firstUnlockStarted;
    void /* unknown type, empty encoding */ _systemMonitor;
}

@property (class, nonatomic, readonly) BOOL supported;

@property (nonatomic, copy) id /* block */ meDeviceUpdatedHandler;

- (void)dealloc;
- (void)invalidate;
- (id)init;
- (id)initWithDispatchQueue:(id)a0;
- (void)activate;
- (void).cxx_destruct;

@end
