@class BSSqliteDatabaseConnection;

@interface BSSqlitePreparedStatement : NSObject {
    BSSqliteDatabaseConnection *_dbConnection;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)executeWithBindings:(id)a0 resultRowHandler:(id /* block */)a1 error:(out id *)a2;

@end
