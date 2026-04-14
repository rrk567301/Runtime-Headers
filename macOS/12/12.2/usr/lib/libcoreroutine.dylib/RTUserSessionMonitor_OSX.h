@class RTDarwinNotificationHelper;

@interface RTUserSessionMonitor_OSX : RTUserSessionMonitor {
    RTDarwinNotificationHelper *_notificationHelper;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (unsigned int)uid;
- (BOOL)activeUser;
- (id)initWithNotificationHelper:(id)a0;
- (void)_handleUserSessionChange;
- (void)handleUserSessionChange;

@end
