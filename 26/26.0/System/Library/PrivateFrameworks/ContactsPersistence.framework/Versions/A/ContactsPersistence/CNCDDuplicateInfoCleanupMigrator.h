@class NSArray;

@interface CNCDDuplicateInfoCleanupMigrator : CNCDMigrator

@property (copy) NSArray *recordsToRemove;

+ (id)os_log;

- (void)migrate;
- (void).cxx_destruct;
- (BOOL)areRepairsNeeded;
- (void)fetchInfosWithNoContainer;
- (id)initWithContext:(id)a0 store:(id)a1;
- (void)removeInvalidRecords;
- (void)saveContext;
- (void)warnRecordsWillBeRemoved;

@end
