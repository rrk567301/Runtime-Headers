@interface MADSQLiteDatabase : NSObject {
    struct sqlite3 { } *_database;
}

+ (id)openDatabaseAtPath:(id)a0;
+ (struct sqlite3 { } *)_openSQLiteDatabaseAtPath:(const char *)a0;

- (BOOL)close;
- (void)dealloc;
- (struct sqlite3_stmt { } *)_prepareStatement:(id)a0;
- (id)initWithOpenedSQLite3Database:(struct sqlite3 { } *)a0;
- (BOOL)prepareQueryStatement:(id)a0 stepThroughResultsWithBlock:(id /* block */)a1;

@end
