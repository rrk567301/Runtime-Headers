@class RTDarwinNotificationHelper;

@interface RTUserSessionMonitor_OSX : RTUserSessionMonitor {
    RTDarwinNotificationHelper *_notificationHelper;
}

- (unsigned int)uid;
- (void)dealloc;
- (BOOL)activeUser;
- (id)init;
- (void).cxx_destruct;
- (void)_handleUserSessionChange;
- (void)handleUserSessionChange;
- (id)initWithNotificationHelper:(id)a0;

@end
