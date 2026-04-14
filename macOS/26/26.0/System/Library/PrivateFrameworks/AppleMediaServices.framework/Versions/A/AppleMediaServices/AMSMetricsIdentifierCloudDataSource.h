@protocol AMSMetricsIdentifierCloudDataSourceDelegate;

@interface AMSMetricsIdentifierCloudDataSource : NSObject

@property (weak) id<AMSMetricsIdentifierCloudDataSourceDelegate> delegate;

+ (id)_database;
+ (id)_sharedQueue;
+ (void)cleanupIdentifiers;
+ (id)_saveCloudObject:(id)a0 intoDatabase:(id)a1 isServerRecord:(BOOL)a2;
+ (id)_saveIdInfo:(id)a0 intoDatabase:(id)a1 isServerRecord:(BOOL)a2;
+ (id)_saveStoreInfo:(id)a0 intoDatabase:(id)a1 isServerRecord:(BOOL)a2;
+ (void)clearSyncState;
+ (void)removeAllRecords;

- (void)removeRecordWithIdentifier:(id)a0;
- (id)_parseRecord:(id)a0 error:(id *)a1;
- (id)_createRecordForIdentifierStore:(id)a0;
- (void)fetchModifiedRecordsWithCompletion:(id /* block */)a0;
- (void)saveRecord:(id)a0 isServerRecord:(BOOL)a1;
- (void).cxx_destruct;
- (id)_createRecordForIdentifier:(id)a0;

@end
