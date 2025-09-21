@interface _LSMDocMetaDBConnection : NSObject {
    struct sqlite3 { } *_database;
}

+ (id)connectionWithURL:(id)a0;

- (struct sqlite3 { } *)database;
- (void)dealloc;

@end
