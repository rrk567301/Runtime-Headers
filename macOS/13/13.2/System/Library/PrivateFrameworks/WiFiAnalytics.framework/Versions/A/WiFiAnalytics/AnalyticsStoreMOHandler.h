@class AnalyticsPersistenceManager, AnalyticsStoreMOContext;

@interface AnalyticsStoreMOHandler : NSObject

@property (retain, nonatomic) AnalyticsStoreMOContext *storeMOContext;
@property (retain, nonatomic) AnalyticsPersistenceManager *persistenceManager;
@property (nonatomic) unsigned long long storeType;

- (void).cxx_destruct;
- (id)managedObjectContext;
- (id)initWithType:(unsigned long long)a0 options:(unsigned long long)a1;
- (void)performPruneBasedOnStoreSizeAndSave;
- (void)performBlockOnManagedObjectContext:(id)a0 block:(id /* block */)a1;
- (void)performBlockOnManagedObjectContextForNSData:(id)a0 withDate:(id)a1 block:(id /* block */)a2;
- (void)saveManagedObjectContext;
- (void)updateManagedObjectContextWithoutSave;
- (void)pruneManagedObjects;
- (void)ageOutManagedObjectsOlderThan:(double)a0;
- (BOOL)setBssManagedObjectPropertyValueForKeyWithoutSave:(id)a0 forKey:(id)a1 withValue:(id)a2;
- (BOOL)setNetworkManagedObjectPropertyValueForKeyWithoutSave:(id)a0 forKey:(id)a1 withValue:(id)a2;

@end
