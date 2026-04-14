@interface MSASDaemonModel : MSASModelBase

+ (id)defaultModel;

- (void)setNextActivityDate:(id)a0 forPersonID:(id)a1;
- (BOOL)dbQueueUpgradeFromDatabaseVersion:(int)a0 currentVersion:(int)a1;
- (void)clearAllNextActivityDates;
- (id)nextActivityDateByPersonID;
- (id)earliestNextActivityDate;
- (id)init;

@end
