@interface WLKBadgingUtilities : NSObject

+ (BOOL)hasMigrated;
+ (id)sharedUtilities;
+ (id)badgeIdentifiers;
+ (void)clearSavedBadgeIdentifiers;
+ (id)currentBadgeNumber;
+ (BOOL)addBadgeIdentifier:(id)a0;
+ (BOOL)removeBadgeIdentifier:(id)a0;

- (id)_notificationCenter;
- (void)migrateToNewBadgingSystemIfNeeded;

@end
