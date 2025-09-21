@class NSObject;
@protocol OS_os_log, OS_dispatch_queue, OS_dispatch_semaphore;

@interface HPMForceRetimerDFUModeSetter : NSObject {
    unsigned int _hpmService;
    unsigned int _hpmConnection;
    unsigned int _address;
    char _enableDFUMode;
    NSObject<OS_os_log> *_log;
    unsigned int _thunderboltController;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSObject<OS_dispatch_semaphore> *_notificationSemaphore;
    struct IONotificationPort { } *_notificationPort;
    unsigned int _notification;
    struct IOCFPlugInInterfaceStruct **_cfPlugInInterface;
    struct AppleHPMLibInterfaceStructV3 **_hpmInterface;
}

- (void)dealloc;
- (void).cxx_destruct;
- (const char *)requestType;
- (char)setComplete;
- (void)propertyChanged;
- (char)dfuModeEnabled;
- (char)doSet;
- (id)getACIOParentData;
- (unsigned int)getARMIODeviceRegistryEntryForACIOParentProperty:(id)a0;
- (char)getAddressForDeviceService:(unsigned int)a0;
- (unsigned int)getThunderboltControllerForARMIODevice:(unsigned int)a0;
- (char)initHPMInterface;
- (id)initWithHPMService:(unsigned int)a0 deviceService:(unsigned int)a1 enableDFUMode:(char)a2;
- (char)lookupThunderboltController;
- (char)startMonitoringForOperationCompletion;

@end
