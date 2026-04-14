@class NSDictionary;

@interface PPTSQLStorage : PPTStorage

@property BOOL storageStarted;
@property (retain) NSDictionary *connectionByStorage;

+ (id)trimConditionsForPLSQLWithTrimDate:(id)a0;
+ (id)trimConditionsForStorage:(int)a0 trimDate:(id)a1;
+ (id)trimConditionsForEntryKey:(id)a0 trimDate:(double)a1 currDate:(double)a2;
+ (id)trimConditionsForEPSQLWithTrimDate:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)closeAllConnections;
- (id)connectionForKey:(id)a0;
- (void)startStorage;
- (void)setupStorageForEntryKey:(id)a0;
- (void)setupStorageVersions;
- (void)setupFolders;
- (id)setupDBConnectionAtPath:(id)a0;
- (id)EPSQLConnection;
- (void)setupLogVersions:(id)a0 version:(double)a1;
- (short)verifyVersionForTable:(id)a0 matches:(id)a1;
- (void)setupTableForEntryKey:(id)a0;
- (void)handleSchemaMismatchForTable:(id)a0 expectedVersion:(id)a1;
- (BOOL)updateTable:(id)a0 transferDataForKeys:(id)a1;
- (void)setupTableForEntryKey:(id)a0 withName:(id)a1;
- (id)PLSQLConnection;

@end
