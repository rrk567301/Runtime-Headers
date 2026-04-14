@class HIDEventService, HIDServiceClient, HIDDevice, NSObject;
@protocol OS_dispatch_queue;

@interface HIDTimeSync : NSObject {
    _Atomic unsigned int _state;
    HIDDevice *_device;
    HIDEventService *_service;
    HIDServiceClient *_client;
    struct IONotificationPort { } *_propertyPort;
    unsigned int _propertyNotify;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id /* block */ eventHandler;
@property (readonly, nonatomic) id /* block */ cancelHandler;
@property (nonatomic) unsigned int state;

+ (unsigned int)findDeviceForServiceID:(unsigned long long)a0;
+ (id)timeSyncFromHIDDevice:(id)a0;
+ (id)timeSyncFromHIDEventService:(id)a0;
+ (id)timeSyncFromHIDServiceClient:(id)a0;
+ (id)timeSyncFromProtocol:(unsigned long long)a0;

- (id)properties;
- (void)setCancelHandler:(id /* block */)a0;
- (void)cancel;
- (void)setEventHandler:(id /* block */)a0;
- (id)initInternal;
- (void)activate;
- (void)setDispatchQueue:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (void)handleCancel;
- (id)dataFromSyncedTime:(unsigned long long)a0 error:(out id *)a1;
- (unsigned int)findDevice;
- (void)handleActivate;
- (void)handlePropertyUpdate:(id)a0;
- (BOOL)registerPropertyNotification:(unsigned int)a0;
- (BOOL)setProviderProperty:(id)a0 forKey:(id)a1;
- (unsigned long long)syncedTimeFromData:(id)a0 error:(out id *)a1;

@end
