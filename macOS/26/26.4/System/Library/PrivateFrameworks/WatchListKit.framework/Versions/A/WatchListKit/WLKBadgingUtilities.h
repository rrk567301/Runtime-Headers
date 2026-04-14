@interface WLKBadgingUtilities : NSObject

+ (void)clearSavedBadgeIdentifiers;
+ (void)removeBadgeRequest:(id)a0;
+ (BOOL)hasMigrated;
+ (BOOL)removeBadgeIdentifier:(id)a0;
+ (id)badgeIdentifiers;
+ (id)sharedUtilities;
+ (BOOL)addBadgeIdentifier:(id)a0;
+ (id)currentBadgeNumber;
+ (id)_returnListofBadgingActionMetrics;
+ (void)storeBadgeRequest:(id)a0;
+ (id)_createRequestContainer:(id)a0;
+ (void)processStoredODJBadgingRequestActions;

- (id)_notificationCenter;
- (void)migrateToNewBadgingSystemIfNeeded;

@end
