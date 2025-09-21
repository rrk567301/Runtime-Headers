@class AMSSQLiteConnection;

@interface AMSSQLiteSchema : NSObject {
    AMSSQLiteConnection *_connection;
}

@property (readonly) long long currentUserVersion;

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (void)_setUserVersion:(long long)a0;
- (char)column:(id)a0 existsInTable:(id)a1;
- (char)migrateToVersion:(long long)a0 usingBlock:(id /* block */)a1 error:(id *)a2;
- (char)tableExists:(id)a0;

@end
