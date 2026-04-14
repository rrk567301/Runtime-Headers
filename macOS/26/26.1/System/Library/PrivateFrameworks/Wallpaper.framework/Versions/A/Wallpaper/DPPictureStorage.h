@interface DPPictureStorage : NSObject {
    struct sqlite3 { } *_db;
}

- (id)initWithURL:(id)a0;
- (void)dealloc;
- (id)allEntries;
- (void)closeDatabase;
- (id)init;
- (struct sqlite3 { } *)_openDatabaseAtPath:(id)a0 error:(id)a1;

@end
