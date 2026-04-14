@interface BMSQLJSONColumn : BMSQLColumn {
    id /* block */ _jsonExtractBlock;
}

+ (id)new;

- (BOOL)setSQLiteValueFromRow:(id)a0 sqliteContext:(struct sqlite3_context { } *)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)init;
- (id)initWithName:(id)a0 requestOnly:(BOOL)a1 extractBlock:(id /* block */)a2;

@end
