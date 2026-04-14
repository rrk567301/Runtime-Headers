@interface WLKBadgingUtilities : NSObject

+ (void)clearSavedBadgeIdentifiers;
+ (id)sharedUtilities;
+ (id)_createRequestContainer:(id)a0;
+ (void)processStoredODJBadgingRequestActions;
+ (id)currentBadgeNumber;
+ (void)removeBadgeRequest:(id)a0;
+ (id)badgeIdentifiers;
+ (BOOL)removeBadgeIdentifier:(id)a0;
+ (BOOL)hasMigrated;
+ (void)storeBadgeRequest:(id)a0;
+ (id)_returnListofBadgingActionMetrics;
+ (BOOL)addBadgeIdentifier:(id)a0;

- (id)_notificationCenter;
- (void)migrateToNewBadgingSystemIfNeeded;

@end
