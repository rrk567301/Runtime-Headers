@class NSString, ASUSQLiteConnection;

@interface ASUSQLiteDatabaseStoreSchema : NSObject {
    ASUSQLiteConnection *_connection;
    NSString *_schemaName;
}

@property (readonly) long long currentSchemaVersion;

- (void).cxx_destruct;
- (BOOL)column:(id)a0 existsInTable:(id)a1;
- (BOOL)migrateToVersion:(long long)a0 usingBlock:(id /* block */)a1;
- (BOOL)tableExists:(id)a0;
- (id)initWithConnection:(id)a0 schemaName:(id)a1;

@end
