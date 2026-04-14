@class SHClusterSQLiteDataStore, SHClusterStatementRunner;

@interface SHClusterController : NSObject

@property (readonly) SHClusterStatementRunner *query;
@property (readonly) SHClusterSQLiteDataStore *dataStore;

+ (id)databaseURLForName:(id)a0;
+ (id)artistClusterDefaultLocationURL;
+ (id)trackClusterDefaultLocationURL;

- (void).cxx_destruct;
- (id)initWithDataStore:(id)a0;
- (id)affinityGroupsAtCohesionLevel:(long long)a0 forQuery:(id)a1 queryCollection:(id)a2 filteredBy:(id)a3;
- (id)filterQueryCollection:(id)a0 byItemsWithinCluster:(id)a1;
- (void)mediaItemsSimilarToValue:(id)a0 forKey:(id)a1 completionHandler:(id /* block */)a2;
- (void)mediaItemsForPropertyCollection:(id)a0 completionHandler:(id /* block */)a1;
- (void)resultsFromQueryBlock:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void)affinityGroupsFromQueryCollection:(id)a0 filteredBySeedCollection:(id)a1 completionHandler:(id /* block */)a2;

@end
