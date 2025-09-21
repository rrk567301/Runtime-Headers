@class NSURL, NSArray, BRCPQLConnection;

@interface BRCDatabaseBackupStorage : NSObject

@property (retain, nonatomic) NSURL *databaseURL;
@property (retain, nonatomic) BRCPQLConnection *database;
@property (retain, nonatomic) NSArray *urlPropertiesToFetch;
@property (retain, nonatomic) NSURL *attachedDatabaseURL;

- (void)dealloc;
- (void).cxx_destruct;
- (char)addRecord:(id)a0;
- (id)initWithDatabaseURL:(id)a0;
- (char)clearStagedIDs:(id)a0;
- (void)populateNewColumnsWithBasePath:(id)a0;
- (char)addRecordIfNotExist:(id)a0;
- (char)attachDatabase:(id)a0 error:(id *)a1;
- (id)backupManifestEnumerator:(id)a0;
- (id)docIDForURL:(id)a0;
- (char)fixUpBackupDetector:(id)a0;
- (void)flushAndClose;
- (char)negateIDs:(id)a0;
- (void)populateNewColumnsInDatabase:(id)a0 forRecord:(id)a1 basePath:(id)a2;
- (char)setForeignKeys:(id)a0 enabled:(char)a1;
- (char)setUpDatabaseWithError:(id *)a0;
- (char)updateAttachedDatabase;
- (char)updateIDs:(id)a0;

@end
