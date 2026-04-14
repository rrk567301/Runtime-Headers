@class NSMutableDictionary;
@protocol DeviceHotpluggingNotificationProtocol;

@interface DeviceHotpluggingNotifications : NSObject {
    id<DeviceHotpluggingNotificationProtocol> _clientObj;
    NSMutableDictionary *_deviceRemovedNotifications;
}

+ (id)deviceHotpluggingNotifications:(id)a0 listenForClassName:(id)a1;
+ (id)deviceHotpluggingNotifications:(id)a0 listenForClasses:(id)a1;

- (void)dealloc;
- (id)init:(id)a0 listenForClassName:(id)a1;
- (id)init:(id)a0 listenForClasses:(id)a1;
- (id)getClientObj;
- (int)installDeviceAppearedNotification:(id)a0;
- (int)installDeviceRemovedNotification:(unsigned int)a0;
- (void)removeDeviceRemovedNotification:(unsigned int)a0;

@end
