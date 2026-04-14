@class RTDarwinNotificationHelper;

@interface RTUserSessionMonitor_OSX : RTUserSessionMonitor {
    RTDarwinNotificationHelper *_notificationHelper;
}

- (BOOL)activeUser;
- (id)init;
- (unsigned int)uid;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_handleUserSessionChange;
- (void)handleUserSessionChange;
- (id)initWithNotificationHelper:(id)a0;

@end
