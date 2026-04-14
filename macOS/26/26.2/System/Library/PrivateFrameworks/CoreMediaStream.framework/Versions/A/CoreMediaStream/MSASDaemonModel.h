@interface MSASDaemonModel : MSASModelBase

+ (id)defaultModel;

- (BOOL)dbQueueUpgradeFromDatabaseVersion:(int)a0 currentVersion:(int)a1;
- (id)earliestNextActivityDate;
- (void)clearAllNextActivityDates;
- (id)init;
- (void)setNextActivityDate:(id)a0 forPersonID:(id)a1;
- (id)nextActivityDateByPersonID;

@end
