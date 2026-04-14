@class NSSQLUpdateColumnsIntermediate;

@interface NSSQLUpdateIntermediate : NSSQLStatementIntermediate {
    NSSQLUpdateColumnsIntermediate *_updateColumns;
}

- (id)generateSQLStringInContext:(id)a0;
- (id)initWithEntity:(id)a0 alias:(id)a1 inScope:(id)a2;
- (BOOL)isUpdateScoped;
- (void)dealloc;

@end
