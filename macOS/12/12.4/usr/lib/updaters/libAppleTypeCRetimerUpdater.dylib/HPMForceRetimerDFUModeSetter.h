@class NSObject;
@protocol OS_os_log, OS_dispatch_queue, OS_dispatch_semaphore;

@interface HPMForceRetimerDFUModeSetter : NSObject {
    unsigned int _hpmService;
    unsigned int _hpmConnection;
    unsigned int _address;
    BOOL _enableDFUMode;
    NSObject<OS_os_log> *_log;
    unsigned int _thunderboltController;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSObject<OS_dispatch_semaphore> *_notificationSemaphore;
    struct IONotificationPort { } *_notificationPort;
    unsigned int _notification;
}

- (void)dealloc;
- (void).cxx_destruct;
- (const char *)requestType;
- (BOOL)setComplete;
- (BOOL)getAddressForDeviceService:(unsigned int)a0;
- (BOOL)lookupThunderboltController;
- (id)getACIOParentData;
- (unsigned int)getARMIODeviceRegistryEntryForACIOParentProperty:(id)a0;
- (unsigned int)getThunderboltControllerForARMIODevice:(unsigned int)a0;
- (BOOL)dfuModeEnabled;
- (BOOL)startMonitoringForOperationCompletion;
- (id)initWithHPMService:(unsigned int)a0 hpmConnection:(unsigned int)a1 deviceService:(unsigned int)a2 enableDFUMode:(BOOL)a3;
- (void)propertyChanged;
- (BOOL)doSet;

@end
