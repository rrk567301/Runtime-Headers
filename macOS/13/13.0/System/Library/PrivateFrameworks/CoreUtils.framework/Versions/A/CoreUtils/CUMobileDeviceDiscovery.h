@class CURunLoopThread, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CUMobileDeviceDiscovery : NSObject {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    NSMutableDictionary *_mdDevices;
    struct _AMDeviceNotificationContext { } *_mdNotification;
    CURunLoopThread *_mdRunLoopThread;
    CUMobileDeviceDiscovery *_selfRef;
}

@property (nonatomic) unsigned int changeFlags;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned int discoveryFlags;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ deviceFoundHandler;
@property (copy, nonatomic) id /* block */ deviceLostHandler;
@property (copy, nonatomic) id /* block */ deviceChangedHandler;

+ (void)getDevicesWithQueue:(id)a0 completion:(id /* block */)a1;

- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)activate;
- (void)_invalidated;
- (void)_mdThreadInitialize;
- (void)_mdThreadFinalize;
- (void)_mdThreadHandleDeviceAttached:(struct _AMDevice { } *)a0;
- (void)_mdThreadHandleDeviceDetached:(struct _AMDevice { } *)a0;
- (void)_mdThreadHandleSubscriberStopped;
- (void)_mdThreadStartMonitoringDevice:(id)a0;
- (void)_mdThreadStopMonitoringDevice:(id)a0;
- (void)_mdThreadHandlePropertiesChanged:(id)a0;

@end
