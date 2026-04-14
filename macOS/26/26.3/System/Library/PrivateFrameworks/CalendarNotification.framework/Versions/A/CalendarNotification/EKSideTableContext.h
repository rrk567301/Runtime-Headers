@class NSString;

@interface EKSideTableContext : NSManagedObjectContext {
    NSString *_path;
}

+ (id)sideTableContext;

- (id)_settingForKey:(id)a0;
- (id)_persistentStoreCoordinator;
- (id)_pathForPersistentStore;
- (id)initWithConcurrencyType:(unsigned long long)a0;
- (void)setSetting:(id)a0 forKey:(id)a1;
- (id)_managedObjectModel;
- (id)insertNewAlarm;
- (void).cxx_destruct;
- (id)rootDirectory;
- (id)nextAlarmFireTime;
- (id)_alarmsMatchingPredicate:(id)a0;
- (BOOL)_removeSqliteFiles;
- (id)settingForKey:(id)a0;
- (id)alarmsBetweenStartDate:(id)a0 endDate:(id)a1;
- (void)deleteAllAlarms;
- (id)_urlForPersistentStore;

@end
