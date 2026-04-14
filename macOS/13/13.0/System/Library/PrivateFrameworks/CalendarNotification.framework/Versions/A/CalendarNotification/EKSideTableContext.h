@class NSString;

@interface EKSideTableContext : NSManagedObjectContext {
    NSString *_path;
}

+ (id)sideTableContext;

- (void).cxx_destruct;
- (id)_persistentStoreCoordinator;
- (id)_managedObjectModel;
- (id)initWithConcurrencyType:(unsigned long long)a0;
- (id)_alarmsMatchingPredicate:(id)a0;
- (void)deleteAllAlarms;
- (id)insertNewAlarm;
- (id)nextAlarmFireTime;
- (id)alarmsBetweenStartDate:(id)a0 endDate:(id)a1;
- (id)_settingForKey:(id)a0;
- (id)settingForKey:(id)a0;
- (void)setSetting:(id)a0 forKey:(id)a1;
- (id)rootDirectory;
- (id)_pathForPersistentStore;
- (id)_urlForPersistentStore;
- (BOOL)_removeSqliteFiles;

@end
