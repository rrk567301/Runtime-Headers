@class ASUSQLiteConnection;

@interface ASUSQLiteSchema : NSObject {
    ASUSQLiteConnection *_connection;
}

@property (readonly) long long currentUserVersion;

- (id)initWithConnection:(id)a0;
- (BOOL)tableExists:(id)a0;
- (BOOL)column:(id)a0 existsInTable:(id)a1;
- (void).cxx_destruct;
- (BOOL)migrateToVersion:(long long)a0 usingBlock:(id /* block */)a1;

@end
