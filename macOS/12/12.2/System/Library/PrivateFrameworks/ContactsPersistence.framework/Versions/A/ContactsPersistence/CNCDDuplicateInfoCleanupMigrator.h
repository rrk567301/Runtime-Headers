@class NSArray;

@interface CNCDDuplicateInfoCleanupMigrator : CNCDMigrator

@property (copy) NSArray *recordsToRemove;

+ (id)os_log;

- (void).cxx_destruct;
- (void)migrate;
- (id)initWithContext:(id)a0 store:(id)a1;
- (void)fetchInfosWithNoContainer;
- (BOOL)areRepairsNeeded;
- (void)warnRecordsWillBeRemoved;
- (void)removeInvalidRecords;
- (void)saveContext;

@end
