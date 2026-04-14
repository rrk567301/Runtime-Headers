@class NSNumber, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface _WKMockUserNotificationCenter : NSObject {
    NSObject<OS_dispatch_queue> *m_queue;
    BOOL m_hasPermission;
    struct RetainPtr<NSString> { NSString *m_ptr; } m_bundleIdentifier;
    struct RetainPtr<NSMutableArray> { NSMutableArray *m_ptr; } m_notifications;
    struct RetainPtr<NSNumber> { NSNumber *m_ptr; } m_appBadge;
}

- (id)initWithBundleIdentifier:(id)a0;
- (id)notificationSettings;
- (void)setNotificationCategories:(id)a0;
- (void)requestAuthorizationWithOptions:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)removeDeliveredNotificationsWithIdentifiers:(id)a0;
- (void)addNotificationRequest:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)removePendingNotificationRequestsWithIdentifiers:(id)a0;
- (void)getNotificationSettingsWithCompletionHandler:(id /* block */)a0;
- (id).cxx_construct;
- (void)getDeliveredNotificationsWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)_internalInitWithBundleIdentifier:(id)a0;
- (id)getAppBadgeForTesting;

@end
