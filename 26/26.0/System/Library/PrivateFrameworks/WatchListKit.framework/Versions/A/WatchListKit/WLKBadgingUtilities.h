@interface WLKBadgingUtilities : NSObject

+ (id)sharedUtilities;
+ (BOOL)removeBadgeIdentifier:(id)a0;
+ (BOOL)addBadgeIdentifier:(id)a0;
+ (id)_returnListofBadgingActionMetrics;
+ (void)removeBadgeRequest:(id)a0;
+ (BOOL)hasMigrated;
+ (void)clearSavedBadgeIdentifiers;
+ (id)_createRequestContainer:(id)a0;
+ (void)processStoredODJBadgingRequestActions;
+ (id)currentBadgeNumber;
+ (void)storeBadgeRequest:(id)a0;
+ (id)badgeIdentifiers;

- (void)migrateToNewBadgingSystemIfNeeded;
- (id)_notificationCenter;

@end
