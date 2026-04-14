@class NSString;

@interface EKSideTableContext : NSManagedObjectContext {
    NSString *_path;
}

+ (id)sideTableContext;

- (id)_persistentStoreCoordinator;
- (void)setSetting:(id)a0 forKey:(id)a1;
- (id)_settingForKey:(id)a0;
- (id)_managedObjectModel;
- (id)rootDirectory;
- (id)settingForKey:(id)a0;
- (id)nextAlarmFireTime;
- (void)deleteAllAlarms;
- (id)insertNewAlarm;
- (id)_urlForPersistentStore;
- (id)alarmsBetweenStartDate:(id)a0 endDate:(id)a1;
- (id)initWithConcurrencyType:(unsigned long long)a0;
- (BOOL)_removeSqliteFiles;
- (id)_alarmsMatchingPredicate:(id)a0;
- (void).cxx_destruct;
- (id)_pathForPersistentStore;

@end
