@interface GEONavdCacheDBWriter : GEODBWriter {
    struct sqlite3_stmt { } *_sqlInsertCache;
    struct sqlite3_stmt { } *_sqlDeleteRowForRowID;
    struct sqlite3_stmt { } *_sqlUpdateCache;
    struct sqlite3_stmt { } *_sqlDeleteAllRows;
}

- (void)dealloc;
- (id)initWithPath:(id)a0;
- (long long)_insertWithKey:(id)a0 value:(id)a1;
- (BOOL)_updateRowId:(long long)a0 withKey:(id)a1 value:(id)a2;
- (void)_deleteRowsWithRowIDs:(id)a0;
- (void)_deleteAllRows;
- (void)_openIfNecessary;
- (void)performTableCreationTasks;
- (void)performStatementPreparationTasks;
- (void)_createCacheTable;

@end
