@interface MSASDaemonModel : MSASModelBase

+ (id)defaultModel;

- (void)clearAllNextActivityDates;
- (id)nextActivityDateByPersonID;
- (id)init;
- (BOOL)dbQueueUpgradeFromDatabaseVersion:(int)a0 currentVersion:(int)a1;
- (id)earliestNextActivityDate;
- (void)setNextActivityDate:(id)a0 forPersonID:(id)a1;

@end
