@class NSObject;
@protocol OS_os_log;

@interface ValidDBObjc : NSObject

@property struct sqlite3 { } *db;
@property (retain) NSObject<OS_os_log> *log;

- (id)prepareStatement:(id)a0 error:(id *)a1;
- (BOOL)executeSQL:(id)a0;
- (void).cxx_destruct;
- (void)close;
- (void)dealloc;
- (int)autoVacuumSetting;
- (BOOL)executeSQL:(id)a0 arguments:(char *)a1;
- (BOOL)executeSQLStmt:(id)a0;
- (id)initDatabaseWithURL:(id)a0;

@end
