@class RTDarwinNotificationHelper;

@interface RTUserSessionMonitor_OSX : RTUserSessionMonitor {
    RTDarwinNotificationHelper *_notificationHelper;
}

- (unsigned int)uid;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)activeUser;
- (id)init;
- (void)_handleUserSessionChange;
- (void)handleUserSessionChange;
- (id)initWithNotificationHelper:(id)a0;

@end
