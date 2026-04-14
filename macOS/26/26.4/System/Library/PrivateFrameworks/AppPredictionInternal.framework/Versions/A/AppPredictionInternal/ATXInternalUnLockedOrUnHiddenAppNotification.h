@class _ATXInternalNotification;

@interface ATXInternalUnLockedOrUnHiddenAppNotification : NSObject {
    _ATXInternalNotification *_note;
}

+ (void)postNotificationWithUnLockedOrUnHiddenApps:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (void)registerForNotificationsWithUnLockedOrUnHiddenAppBlock:(id /* block */)a0;

@end
