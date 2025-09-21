@interface BMSQLJSONColumn : BMSQLColumn {
    id /* block */ _jsonExtractBlock;
}

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 requestOnly:(char)a1 extractBlock:(id /* block */)a2;
- (char)setSQLiteValueFromRow:(id)a0 sqliteContext:(struct sqlite3_context { } *)a1 error:(id *)a2;

@end
