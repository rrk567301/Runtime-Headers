@class AnalyticsPersistenceManager, AnalyticsStoreDescriptor, NSManagedObjectModel;

@interface AnalyticsStoreMOContext : NSObject

@property (retain, nonatomic) AnalyticsStoreDescriptor *storeDescriptor;
@property (retain, nonatomic) AnalyticsPersistenceManager *persistenceManager;
@property (retain, nonatomic) NSManagedObjectModel *sharedManagedObjectModel;
@property (readonly, nonatomic) NSManagedObjectModel *managedObjectModel;

+ (id)sharedManagedObjectModel:(id)a0;

- (void).cxx_destruct;
- (id)initWithStoreDescriptor:(id)a0;
- (BOOL)storeNeedsImmediatePruning:(unsigned long long)a0;

@end
