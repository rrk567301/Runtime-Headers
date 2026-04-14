@class NSString;

@interface EKSideTableContext : NSManagedObjectContext {
    NSString *_path;
}

+ (id)sideTableContext;

- (void)deleteAllAlarms;
- (id)insertNewAlarm;
- (void)setSetting:(id)a0 forKey:(id)a1;
- (id)nextAlarmFireTime;
- (id)initWithConcurrencyType:(unsigned long long)a0;
- (id)_managedObjectModel;
- (id)_persistentStoreCoordinator;
- (id)_urlForPersistentStore;
- (id)_pathForPersistentStore;
- (void).cxx_destruct;
- (id)_alarmsMatchingPredicate:(id)a0;
- (id)_settingForKey:(id)a0;
- (id)rootDirectory;
- (BOOL)_removeSqliteFiles;
- (id)alarmsBetweenStartDate:(id)a0 endDate:(id)a1;
- (id)settingForKey:(id)a0;

@end
