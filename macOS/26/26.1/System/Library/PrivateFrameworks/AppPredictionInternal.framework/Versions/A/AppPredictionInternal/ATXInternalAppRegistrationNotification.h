@class _ATXInternalNotification;

@interface ATXInternalAppRegistrationNotification : NSObject {
    _ATXInternalNotification *_note;
}

+ (void)postNotificationWithInstallDictionary:(id)a0;

- (void).cxx_destruct;
- (void)registerForNotificationsWithRegisterBlock:(id /* block */)a0;
- (id)init;

@end
