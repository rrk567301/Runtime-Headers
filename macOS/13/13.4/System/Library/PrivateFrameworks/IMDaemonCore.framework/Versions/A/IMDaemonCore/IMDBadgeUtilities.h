@class UNUserNotificationCenter, IMDefaults;

@interface IMDBadgeUtilities : NSObject

@property (nonatomic) unsigned long long unreadCount;
@property (nonatomic) long long lastFailedMessageDate;
@property (nonatomic, getter=isShowingFailure) BOOL showingFailure;
@property (nonatomic, getter=isUnexpectedlyLoggedOut) BOOL unexpectedlyLoggedOut;
@property (nonatomic) BOOL addedObserverForUnexpectedlyLoggedOut;
@property (retain, nonatomic) UNUserNotificationCenter *notificationCenter;
@property (retain, nonatomic) IMDefaults *sharedDefaultsInstance;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isInAppleStoreDemoMode;
- (void)_updateBadge;
- (void)_postBadgeNumber:(id)a0;
- (void)_postBadgeString:(id)a0;
- (BOOL)_shouldShowFailureString;
- (void)_updateBadgeAndCancelPreviousUpdate;
- (id)initWithMessageStore:(id)a0;
- (id)initWithMessageStore:(id)a0 defaultsStore:(id)a1;
- (void)updateBadgeForUnreadCountChangeIfNeeded:(long long)a0;

@end
