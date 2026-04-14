@interface _PASSQLColumnMapping : NSObject {
    struct sqlite3_stmt { } *_stmt;
    int _stmtReprepareCounter;
    const struct _PASCompactStringArray { } *_tableColumnNamesFromSchema;
    const struct _PASCompactStringArray { } *_columnAliases;
    const char *_uniqueTableName;
}

- (void)invalidate;
- (void)_deallocState;
- (int)indexForColumnAlias:(const char *)a0;
- (void)_ensureColumnMappingExists;
- (void)invalidateIfNeeded;
- (id)initWithStatementPtr:(struct sqlite3_stmt { } *)a0;
- (int)indexForColumnName:(const char *)a0 table:(const char *)a1;
- (void)resetSearchHint;
- (void)dealloc;

@end
