@interface DPPictureStorage : NSObject {
    struct sqlite3 { } *_db;
}

- (void)closeDatabase;
- (id)init;
- (id)initWithURL:(id)a0;
- (void)dealloc;
- (id)allEntries;
- (struct sqlite3 { } *)_openDatabaseAtPath:(id)a0 error:(id)a1;

@end
