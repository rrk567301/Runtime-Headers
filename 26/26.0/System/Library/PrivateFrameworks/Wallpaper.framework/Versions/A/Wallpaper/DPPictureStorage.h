@interface DPPictureStorage : NSObject {
    struct sqlite3 { } *_db;
}

- (void)dealloc;
- (id)allEntries;
- (id)init;
- (void)closeDatabase;
- (id)initWithURL:(id)a0;
- (struct sqlite3 { } *)_openDatabaseAtPath:(id)a0 error:(id)a1;

@end
