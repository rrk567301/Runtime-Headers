@class BSSqliteDatabaseConnection;

@interface BSSqlitePreparedStatement : NSObject {
    BSSqliteDatabaseConnection *_dbConnection;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)executeWithBindings:(id)a0 resultRowHandler:(id /* block */)a1 error:(out id *)a2;

@end
