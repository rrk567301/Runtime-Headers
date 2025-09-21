@class AMSSQLiteConnection;

@interface AMSSQLiteSchema : NSObject {
    AMSSQLiteConnection *_connection;
}

@property (readonly) long long currentUserVersion;

- (BOOL)migrateToVersion:(long long)a0 usingBlock:(id /* block */)a1 error:(id *)a2;
- (id)initWithConnection:(id)a0;
- (BOOL)tableExists:(id)a0;
- (BOOL)column:(id)a0 existsInTable:(id)a1;
- (void)_setUserVersion:(long long)a0;
- (void).cxx_destruct;

@end
