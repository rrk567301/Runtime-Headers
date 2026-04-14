@class NSString, _MSVSQLConnection;
@protocol _MSVSQLAssertion;

@interface MSVSQLDatabaseTransaction : NSObject <MSVSQLExecutable> {
    BOOL _invalid;
    _MSVSQLConnection *_connection;
    id<_MSVSQLAssertion> _assertion;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)executeStatement:(id)a0 error:(id *)a1;
- (BOOL)rollback;
- (BOOL)commit;
- (BOOL)executeStatementString:(id)a0 error:(id *)a1;
- (id)statementWithString:(id)a0 error:(id *)a1;
- (BOOL)_releaseSavepoint:(id)a0;
- (BOOL)rollbackToSavepoint:(id)a0;
- (void)_installArraySupport;
- (void).cxx_destruct;
- (id)createSavepoint;
- (id)resultsForStatement:(id)a0;
- (void)dealloc;

@end
