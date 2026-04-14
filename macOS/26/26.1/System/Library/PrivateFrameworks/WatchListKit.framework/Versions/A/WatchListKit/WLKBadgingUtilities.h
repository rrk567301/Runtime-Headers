@interface WLKBadgingUtilities : NSObject

+ (id)_createRequestContainer:(id)a0;
+ (id)_returnListofBadgingActionMetrics;
+ (id)badgeIdentifiers;
+ (void)processStoredODJBadgingRequestActions;
+ (BOOL)removeBadgeIdentifier:(id)a0;
+ (BOOL)addBadgeIdentifier:(id)a0;
+ (void)storeBadgeRequest:(id)a0;
+ (void)clearSavedBadgeIdentifiers;
+ (id)sharedUtilities;
+ (BOOL)hasMigrated;
+ (id)currentBadgeNumber;
+ (void)removeBadgeRequest:(id)a0;

- (void)migrateToNewBadgingSystemIfNeeded;
- (id)_notificationCenter;

@end
