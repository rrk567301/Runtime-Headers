@class NSString;

@interface EKSideTableContext : NSManagedObjectContext {
    NSString *_path;
}

+ (id)sideTableContext;

- (id)_persistentStoreCoordinator;
- (id)rootDirectory;
- (id)alarmsBetweenStartDate:(id)a0 endDate:(id)a1;
- (id)settingForKey:(id)a0;
- (void)setSetting:(id)a0 forKey:(id)a1;
- (id)_alarmsMatchingPredicate:(id)a0;
- (id)initWithConcurrencyType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)nextAlarmFireTime;
- (id)_managedObjectModel;
- (void)deleteAllAlarms;
- (id)_pathForPersistentStore;
- (BOOL)_removeSqliteFiles;
- (id)insertNewAlarm;
- (id)_urlForPersistentStore;
- (id)_settingForKey:(id)a0;

@end
