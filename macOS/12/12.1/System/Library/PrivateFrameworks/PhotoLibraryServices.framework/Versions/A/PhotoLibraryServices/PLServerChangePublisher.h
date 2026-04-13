@class NSString;

@interface PLServerChangePublisher : NSObject <PLChangePublisher> {
    _Atomic long long _postCount;
    _Atomic BOOL _hasPendingWatchNotification;
    _Atomic BOOL _suppressWatchNotification;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)pauseLaunchEventNotifications;
- (void)unpauseLaunchEventNotifications;
- (id)publishChangeEvent:(id)a0 delayedSaveActionsDetail:(id)a1 transaction:(id)a2;
- (void)distributeChangeEvent:(id)a0 transaction:(id)a1;
- (void)_postChangeHubNotification;
- (void)_postWatchUpdateNotificationIfNotPaused;
- (void)_postWatchUpdateNotificationIfPending;
- (void)_postWatchUpdateNotification;

@end
