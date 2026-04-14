@protocol AMSMetricsIdentifierCloudDataSourceDelegate;

@interface AMSMetricsIdentifierCloudDataSource : NSObject

@property (weak) id<AMSMetricsIdentifierCloudDataSourceDelegate> delegate;

+ (id)_database;
+ (id)_sharedQueue;
+ (void)cleanupIdentifiers;
+ (void)clearSyncState;
+ (void)removeAllRecords;

- (void).cxx_destruct;
- (id)_createRecordForIdentifier:(id)a0;
- (id)_createRecordForIdentifierStore:(id)a0;
- (id)_parseRecord:(id)a0 error:(id *)a1;
- (void)fetchModifiedRecordsWithCompletion:(id /* block */)a0;
- (void)removeRecordWithIdentifier:(id)a0;
- (void)saveRecord:(id)a0 isServerRecord:(BOOL)a1;

@end
