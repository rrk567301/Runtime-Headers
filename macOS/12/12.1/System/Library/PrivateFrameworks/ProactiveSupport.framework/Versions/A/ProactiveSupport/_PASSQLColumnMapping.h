@interface _PASSQLColumnMapping : NSObject {
    struct sqlite3_stmt { } *_stmt;
    const struct _PASCompactStringArray { } *_tableColumnNamesFromSchema;
    const struct _PASCompactStringArray { } *_columnAliases;
    const char *_uniqueTableName;
}

- (void)dealloc;
- (id)initWithStatementPtr:(struct sqlite3_stmt { } *)a0;
- (void)resetSearchHint;
- (void)_ensureColumnMappingExists;
- (int)indexForColumnName:(const char *)a0 table:(const char *)a1;
- (int)indexForColumnAlias:(const char *)a0;

@end
