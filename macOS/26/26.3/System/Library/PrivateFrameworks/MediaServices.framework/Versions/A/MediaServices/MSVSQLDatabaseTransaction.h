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
- (id)resultsForStatement:(id)a0;
- (BOOL)executeStatementString:(id)a0 error:(id *)a1;
- (id)createSavepoint;
- (BOOL)executeStatement:(id)a0 error:(id *)a1;
- (id)statementWithString:(id)a0 error:(id *)a1;
- (BOOL)_releaseSavepoint:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_installArraySupport;
- (BOOL)rollbackToSavepoint:(id)a0;

@end
