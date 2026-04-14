@class NSDictionary;

@interface PPTSQLStorage : PPTStorage

@property BOOL storageStarted;
@property (retain) NSDictionary *connectionByStorage;

+ (id)trimConditionsForPLSQLWithTrimDate:(id)a0;
+ (id)trimConditionsForEPSQLWithTrimDate:(id)a0;
+ (id)trimConditionsForStorage:(int)a0 trimDate:(id)a1;
+ (id)trimConditionsForEntryKey:(id)a0 trimDate:(double)a1 currDate:(double)a2;

- (id)init;
- (void).cxx_destruct;
- (void)closeAllConnections;
- (id)connectionForKey:(id)a0;
- (void)setupStorageForEntryKey:(id)a0;
- (void)setupStorageVersions;
- (void)startStorage;
- (short)verifyVersionForTable:(id)a0 matches:(id)a1;
- (void)handleSchemaMismatchForTable:(id)a0 expectedVersion:(id)a1;
- (void)setupTableForEntryKey:(id)a0;
- (void)setupTableForEntryKey:(id)a0 withName:(id)a1;
- (BOOL)updateTable:(id)a0 transferDataForKeys:(id)a1;
- (id)PLSQLConnection;
- (id)EPSQLConnection;
- (id)PreUnlockEPSQLConnection;
- (void)setupFolders;
- (void)setupDBConnections;
- (id)setupDBConnectionAtPath:(id)a0;
- (void)setupLogVersions:(id)a0 version:(double)a1;

@end
