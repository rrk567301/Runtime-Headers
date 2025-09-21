@class NSString, NSArray, ASUSQLiteConnection;

@interface ASUSQLiteDatabaseStoreSchema : NSObject {
    ASUSQLiteConnection *_connection;
    NSString *_schemaName;
    NSArray *_tableNames;
}

@property (readonly) long long currentSchemaVersion;

- (BOOL)tableExists:(id)a0;
- (BOOL)column:(id)a0 existsInTable:(id)a1;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0 schemaName:(id)a1 tableNames:(id)a2;
- (BOOL)migrateToVersion:(long long)a0 usingBlock:(id /* block */)a1;
- (BOOL)migrateToVersion:(long long)a0 usingMapping:(id /* block */)a1;

@end
