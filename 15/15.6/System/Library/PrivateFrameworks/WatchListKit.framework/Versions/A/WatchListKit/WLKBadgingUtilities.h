@interface WLKBadgingUtilities : NSObject

+ (char)hasMigrated;
+ (id)sharedUtilities;
+ (void)clearSavedBadgeIdentifiers;
+ (char)addBadgeIdentifier:(id)a0;
+ (id)badgeIdentifiers;
+ (id)currentBadgeNumber;
+ (char)removeBadgeIdentifier:(id)a0;

- (id)_notificationCenter;
- (void)migrateToNewBadgingSystemIfNeeded;

@end
