@interface DPPictureStorage : NSObject {
    struct sqlite3 { } *_db;
}

- (id)initWithURL:(id)a0;
- (id)allEntries;
- (id)init;
- (void)closeDatabase;
- (void)dealloc;
- (struct sqlite3 { } *)_openDatabaseAtPath:(id)a0 error:(id)a1;

@end
