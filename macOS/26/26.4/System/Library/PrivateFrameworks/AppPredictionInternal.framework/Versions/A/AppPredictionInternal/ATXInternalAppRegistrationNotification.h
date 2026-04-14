@class _ATXInternalNotification;

@interface ATXInternalAppRegistrationNotification : NSObject {
    _ATXInternalNotification *_note;
}

+ (void)postNotificationWithInstallDictionary:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (void)registerForNotificationsWithRegisterBlock:(id /* block */)a0;

@end
