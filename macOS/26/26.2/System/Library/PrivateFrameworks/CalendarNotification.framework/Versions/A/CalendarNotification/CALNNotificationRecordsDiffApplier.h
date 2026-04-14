@interface CALNNotificationRecordsDiffApplier : NSObject

+ (void)refreshNotificationManager:(id)a0 withNotificationRecords:(id)a1 forSourceWithIdentifier:(id)a2 filteredBySourceClientIDs:(id)a3;
+ (void)applyDiff:(id)a0 toNotificationManager:(id)a1;

@end
