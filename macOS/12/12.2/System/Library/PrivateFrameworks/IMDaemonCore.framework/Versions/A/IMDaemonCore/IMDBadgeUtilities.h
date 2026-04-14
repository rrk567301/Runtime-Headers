@class UNUserNotificationCenter, IMDefaults;

@interface IMDBadgeUtilities : NSObject {
    unsigned long long _unreadCount;
    long long _lastFailedMessageDate;
    BOOL _showingFailure;
    BOOL _isUnexpectedlyLogOut;
    BOOL _addedObserverForUnexpectedlyLoggedOut;
}

@property (retain, nonatomic) UNUserNotificationCenter *notificationCenter;
@property (retain, nonatomic) IMDefaults *sharedDefaultsInstance;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (BOOL)isInAppleStoreDemoMode;
- (void)_updateBadge;
- (id)initWithMessageStore:(id)a0;
- (void)updateBadgeForUnreadCountChangeIfNeeded:(long long)a0;
- (id)initWithMessageStore:(id)a0 defaultsStore:(id)a1;
- (void)_updateBadgeAndCancelPreviousUpdate;
- (BOOL)_shouldShowFailureString;
- (void)_postBadgeString:(id)a0;
- (void)_postBadgeNumber:(id)a0;

@end
