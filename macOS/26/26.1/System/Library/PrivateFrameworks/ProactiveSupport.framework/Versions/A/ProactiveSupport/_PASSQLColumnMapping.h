@interface _PASSQLColumnMapping : NSObject {
    struct sqlite3_stmt { } *_stmt;
    int _stmtReprepareCounter;
    const struct _PASCompactStringArray { } *_tableColumnNamesFromSchema;
    const struct _PASCompactStringArray { } *_columnAliases;
    const char *_uniqueTableName;
}

- (void)invalidateIfNeeded;
- (void)_ensureColumnMappingExists;
- (int)indexForColumnName:(const char *)a0 table:(const char *)a1;
- (void)resetSearchHint;
- (void)invalidate;
- (void)dealloc;
- (void)_deallocState;
- (int)indexForColumnAlias:(const char *)a0;
- (id)initWithStatementPtr:(struct sqlite3_stmt { } *)a0;

@end
