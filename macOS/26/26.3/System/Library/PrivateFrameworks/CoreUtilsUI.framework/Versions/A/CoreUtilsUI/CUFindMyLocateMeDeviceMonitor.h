@interface CUFindMyLocateMeDeviceMonitor : NSObject {
    void /* unknown type, empty encoding */ _dispatchQueue;
    void /* unknown type, empty encoding */ _monitorTask;
    void /* function */ meDeviceUpdatedHandler;
    void /* unknown type, empty encoding */ _firstUnlockStarted;
    void /* unknown type, empty encoding */ _systemMonitor;
}

@property (class, nonatomic, readonly) BOOL supported;

@property (nonatomic, copy) id /* block */ meDeviceUpdatedHandler;

- (void)invalidate;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDispatchQueue:(id)a0;
- (void)dealloc;
- (void)activate;

@end
