@interface _PASSQLColumnMapping : NSObject {
    struct sqlite3_stmt { } *_stmt;
    int _stmtReprepareCounter;
    const struct _PASCompactStringArray { } *_tableColumnNamesFromSchema;
    const struct _PASCompactStringArray { } *_columnAliases;
    const char *_uniqueTableName;
}

- (void)_deallocState;
- (int)indexForColumnName:(const char *)a0 table:(const char *)a1;
- (void)_ensureColumnMappingExists;
- (void)invalidate;
- (void)resetSearchHint;
- (int)indexForColumnAlias:(const char *)a0;
- (id)initWithStatementPtr:(struct sqlite3_stmt { } *)a0;
- (void)invalidateIfNeeded;
- (void)dealloc;

@end
