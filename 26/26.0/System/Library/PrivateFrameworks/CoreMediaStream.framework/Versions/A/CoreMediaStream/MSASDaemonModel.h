@interface MSASDaemonModel : MSASModelBase

+ (id)defaultModel;

- (void)setNextActivityDate:(id)a0 forPersonID:(id)a1;
- (id)init;
- (void)clearAllNextActivityDates;
- (id)earliestNextActivityDate;
- (id)nextActivityDateByPersonID;
- (BOOL)dbQueueUpgradeFromDatabaseVersion:(int)a0 currentVersion:(int)a1;

@end
