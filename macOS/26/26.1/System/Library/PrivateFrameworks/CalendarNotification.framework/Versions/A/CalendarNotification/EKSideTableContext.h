@class NSString;

@interface EKSideTableContext : NSManagedObjectContext {
    NSString *_path;
}

+ (id)sideTableContext;

- (id)_persistentStoreCoordinator;
- (BOOL)_removeSqliteFiles;
- (id)_alarmsMatchingPredicate:(id)a0;
- (id)_urlForPersistentStore;
- (id)rootDirectory;
- (id)insertNewAlarm;
- (id)nextAlarmFireTime;
- (void)deleteAllAlarms;
- (void)setSetting:(id)a0 forKey:(id)a1;
- (id)_managedObjectModel;
- (id)_settingForKey:(id)a0;
- (void).cxx_destruct;
- (id)alarmsBetweenStartDate:(id)a0 endDate:(id)a1;
- (id)initWithConcurrencyType:(unsigned long long)a0;
- (id)settingForKey:(id)a0;
- (id)_pathForPersistentStore;

@end
