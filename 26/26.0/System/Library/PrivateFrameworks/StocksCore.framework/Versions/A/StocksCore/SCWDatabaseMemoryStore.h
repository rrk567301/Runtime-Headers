@class CKServerChangeToken, NSMutableDictionary, NSDate;

@interface SCWDatabaseMemoryStore : NSObject <SCWDatabaseStore>

@property (copy, nonatomic) NSMutableDictionary *zoneStoresByName;
@property (copy, nonatomic) NSDate *lastSyncDate;
@property (copy, nonatomic) NSDate *lastDirtyDate;
@property (copy, nonatomic) CKServerChangeToken *serverChangeToken;
@property (nonatomic, getter=isCloudBackupEnabled) BOOL cloudBackupEnabled;

- (id)init;
- (id)zoneStoreForSchema:(id)a0;
- (void).cxx_destruct;

@end
