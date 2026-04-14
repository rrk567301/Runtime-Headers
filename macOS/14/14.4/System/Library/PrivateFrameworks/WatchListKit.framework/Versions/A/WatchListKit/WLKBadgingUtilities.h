@interface WLKBadgingUtilities : NSObject

+ (BOOL)hasMigrated;
+ (id)sharedUtilities;
+ (id)badgeIdentifiers;
+ (void)clearSavedBadgeIdentifiers;
+ (BOOL)addBadgeIdentifier:(id)a0;
+ (id)currentBadgeNumber;
+ (BOOL)removeBadgeIdentifier:(id)a0;

- (id)_notificationCenter;
- (void)migrateToNewBadgingSystemIfNeeded;

@end
