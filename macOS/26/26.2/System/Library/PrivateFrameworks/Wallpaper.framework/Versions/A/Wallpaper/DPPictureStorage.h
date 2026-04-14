@interface DPPictureStorage : NSObject {
    struct sqlite3 { } *_db;
}

- (void)closeDatabase;
- (id)allEntries;
- (id)initWithURL:(id)a0;
- (id)init;
- (void)dealloc;
- (struct sqlite3 { } *)_openDatabaseAtPath:(id)a0 error:(id)a1;

@end
