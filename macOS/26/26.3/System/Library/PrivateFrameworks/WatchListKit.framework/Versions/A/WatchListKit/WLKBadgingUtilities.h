@interface WLKBadgingUtilities : NSObject

+ (void)removeBadgeRequest:(id)a0;
+ (id)badgeIdentifiers;
+ (void)storeBadgeRequest:(id)a0;
+ (id)_returnListofBadgingActionMetrics;
+ (void)processStoredODJBadgingRequestActions;
+ (id)currentBadgeNumber;
+ (id)sharedUtilities;
+ (void)clearSavedBadgeIdentifiers;
+ (BOOL)hasMigrated;
+ (BOOL)addBadgeIdentifier:(id)a0;
+ (BOOL)removeBadgeIdentifier:(id)a0;
+ (id)_createRequestContainer:(id)a0;

- (void)migrateToNewBadgingSystemIfNeeded;
- (id)_notificationCenter;

@end
