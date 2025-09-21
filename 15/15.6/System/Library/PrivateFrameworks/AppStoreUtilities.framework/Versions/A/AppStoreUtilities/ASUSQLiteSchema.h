@class ASUSQLiteConnection;

@interface ASUSQLiteSchema : NSObject {
    ASUSQLiteConnection *_connection;
}

@property (readonly) long long currentUserVersion;

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (char)column:(id)a0 existsInTable:(id)a1;
- (char)tableExists:(id)a0;
- (char)migrateToVersion:(long long)a0 usingBlock:(id /* block */)a1;

@end
