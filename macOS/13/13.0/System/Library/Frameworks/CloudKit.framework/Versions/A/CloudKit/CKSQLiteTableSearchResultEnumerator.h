@class CKSQLiteCompiledStatement, NSError, CKSQLiteTable;

@interface CKSQLiteTableSearchResultEnumerator : NSEnumerator {
    CKSQLiteTable *_table;
    id _entry;
    BOOL _enumerationStarted;
}

@property (retain, nonatomic) CKSQLiteCompiledStatement *statement;
@property (retain, nonatomic) CKSQLiteCompiledStatement *statement;
@property (readonly, nonatomic) NSError *error;

- (void)dealloc;
- (id)nextObject;
- (void)invalidate;
- (void).cxx_destruct;
- (id)cksqlcs_appendSQLConstantValueToString:(id)a0;
- (id)initWithTable:(id)a0 statement:(id)a1;

@end
