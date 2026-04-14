@class UNUserNotificationCenter, NSMutableDictionary, IMDMessageStore, IMDefaults, NSObject;
@protocol OS_dispatch_queue;

@interface IMDBadgeUtilities : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic) unsigned long long unreadCount;
@property (nonatomic) long long lastFailedMessageDate;
@property (nonatomic, getter=isShowingFailure) BOOL showingFailure;
@property (nonatomic, getter=isUnexpectedlyLoggedOut) BOOL unexpectedlyLoggedOut;
@property (nonatomic) BOOL addedObserverForUnexpectedlyLoggedOut;
@property (nonatomic) BOOL isStewieActive;
@property (retain, nonatomic) NSMutableDictionary *pendingSatelliteMessagesPerService;
@property (retain, nonatomic) UNUserNotificationCenter *notificationCenter;
@property (retain, nonatomic) IMDefaults *sharedDefaultsInstance;
@property (weak, nonatomic) IMDMessageStore *messageStore;

+ (id)sharedInstance;

- (BOOL)_shouldShowFailureString;
- (void)updateBadgeForUnreadCountChangeIfNeeded:(long long)a0;
- (void)dealloc;
- (void)updateBadgeForPendingSatelliteMessagesIfNeeded:(long long)a0 onService:(id)a1;
- (id)init;
- (void)_postBadgeNumber:(id)a0;
- (id)initWithMessageStore:(id)a0 defaultsStore:(id)a1;
- (BOOL)isInAppleStoreDemoMode;
- (void)_updateBadge;
- (void)_updateBadgeForUnreadCountChangeIfNeeded:(long long)a0;
- (void)_postBadgeString:(id)a0;
- (id)initWithMessageStore:(id)a0;
- (void).cxx_destruct;

@end
