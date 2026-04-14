@class PFSQLiteDatabaseConnection, NSObject;
@protocol OS_os_log;

@interface PFSQLitePreparedStatement : NSObject {
    PFSQLiteDatabaseConnection *_dbConnection;
    NSObject<OS_os_log> *_loggingCategory;
}

- (void).cxx_destruct;
- (BOOL)executeWithBindings:(id)a0 resultRowHandler:(id /* block */)a1 error:(out id *)a2;
- (id)init;
- (void)dealloc;

@end
