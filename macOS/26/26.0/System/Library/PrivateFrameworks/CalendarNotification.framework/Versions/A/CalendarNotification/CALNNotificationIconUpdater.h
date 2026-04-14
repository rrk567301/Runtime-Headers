@protocol CALNCalendarIconIdentifierProvider, CALNNotificationStorage, CALNNotificationManager;

@interface CALNNotificationIconUpdater : NSObject

@property (readonly, nonatomic) id<CALNNotificationStorage> protectedStorage;
@property (readonly, nonatomic) id<CALNCalendarIconIdentifierProvider> iconIdentifierProvider;
@property (readonly, nonatomic) id<CALNNotificationManager> notificationManager;

+ (void)_cleanupLegacyIconCache;
+ (void)_clearIconCacheVersion;
+ (id)_iconCacheDirectory;
+ (BOOL)_needsIconCacheCleanup;

- (void)updateNotificationIconsIfNeeded;
- (void)_updateAllIconIdentifiersInStorage:(id)a0;
- (id)initWithProtectedNotificationStorage:(id)a0 iconIdentifierProvider:(id)a1 notificationManager:(id)a2;
- (void).cxx_destruct;

@end
