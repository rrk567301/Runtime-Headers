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

- (BOOL)commit;
- (BOOL)rollback;
- (BOOL)rollbackToSavepoint:(id)a0;
- (BOOL)_releaseSavepoint:(id)a0;
- (void)dealloc;
- (BOOL)executeStatementString:(id)a0 error:(id *)a1;
- (BOOL)executeStatement:(id)a0 error:(id *)a1;
- (void)_installArraySupport;
- (id)statementWithString:(id)a0 error:(id *)a1;
- (id)createSavepoint;
- (void).cxx_destruct;
- (id)resultsForStatement:(id)a0;

@end
