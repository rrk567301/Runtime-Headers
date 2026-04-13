@class NSString, SHDataStoreMetadata, SHLouvainClusterQuery, NSPersistentContainer;

@interface SHLouvainClusterDataStore : NSObject <SHDataStore>

@property (readonly) BOOL useInMemoryStore;
@property (readonly) NSPersistentContainer *persistentContainer;
@property (readonly) SHLouvainClusterQuery *query;
@property (retain) SHDataStoreMetadata *metadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initInMemoryStore;
- (BOOL)saveContextWithError:(id *)a0;
- (BOOL)loadClustersLineByLineFromDataURL:(id)a0 error:(id *)a1;
- (BOOL)isDataLoaded;
- (void)removeAllData;

@end
