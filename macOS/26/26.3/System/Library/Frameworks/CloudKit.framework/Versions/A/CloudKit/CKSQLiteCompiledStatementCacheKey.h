@class NSString, CKSQLiteDatabase;

@interface CKSQLiteCompiledStatementCacheKey : NSObject <NSCopying> {
    CKSQLiteDatabase *_db;
    NSString *_dbTableName;
    struct _CKSQLiteCompiledStatementLabel { char *x0; char *x1; int x2; } *_statementLabel;
}

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithTable:(id)a0 label:(struct _CKSQLiteCompiledStatementLabel { char *x0; char *x1; int x2; } *)a1;

@end
