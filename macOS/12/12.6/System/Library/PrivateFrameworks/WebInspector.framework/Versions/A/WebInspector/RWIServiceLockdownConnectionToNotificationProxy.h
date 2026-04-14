@interface RWIServiceLockdownConnectionToNotificationProxy : RWIServiceLockdownConnection

- (id)serviceName;
- (id)initWithDevice:(id)a0 mobileDeviceConnection:(id)a1 delegate:(id)a2;
- (void)_closeNotificationProxyServiceConnectionFromFaceplant;
- (void)notificationFromDevice:(id)a0;

@end
