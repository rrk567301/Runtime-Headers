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
- (id)initWithDispatchQueue:(id)a0;
- (void).cxx_destruct;
- (void)activate;
- (id)init;
- (void)dealloc;

@end
