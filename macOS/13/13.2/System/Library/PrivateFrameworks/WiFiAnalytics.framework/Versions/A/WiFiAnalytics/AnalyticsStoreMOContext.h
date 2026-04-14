@class NSManagedObjectContext, AnalyticsStoreDescriptor, AnalyticsPersistenceManager;

@interface AnalyticsStoreMOContext : NSObject

@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (retain, nonatomic) AnalyticsStoreDescriptor *storeDescriptor;
@property (retain, nonatomic) AnalyticsPersistenceManager *persistenceManager;

- (void).cxx_destruct;
- (id)initWithStoreDescriptor:(id)a0;
- (BOOL)storeNeedsImmediatePruning:(unsigned long long)a0;

@end
