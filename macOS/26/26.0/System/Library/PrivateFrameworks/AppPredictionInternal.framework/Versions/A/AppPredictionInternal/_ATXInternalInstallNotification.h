@class _ATXInternalNotification;

@interface _ATXInternalInstallNotification : NSObject {
    _ATXInternalNotification *_note;
}

+ (id)_installedAppsWithDatesFromNotificationData:(id)a0;
+ (void)postNotificationWithInstallDictionary:(id)a0;

- (id)init;
- (void)registerForNotificationsWithInstallBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
