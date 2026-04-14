@interface MSASDaemonModel : MSASModelBase

+ (id)defaultModel;

- (id)init;
- (id)earliestNextActivityDate;
- (id)nextActivityDateByPersonID;
- (void)setNextActivityDate:(id)a0 forPersonID:(id)a1;
- (void)clearAllNextActivityDates;
- (BOOL)dbQueueUpgradeFromDatabaseVersion:(int)a0 currentVersion:(int)a1;

@end
