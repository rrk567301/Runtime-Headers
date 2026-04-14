@class _ATXInternalNotification;

@interface ATXInternalLockedOrHiddenAppNotification : NSObject {
    _ATXInternalNotification *_note;
}

+ (void)postNotificationWithLockedOrHiddenApps:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (void)registerForNotificationsWithLockedOrHiddenAppBlock:(id /* block */)a0;

@end
