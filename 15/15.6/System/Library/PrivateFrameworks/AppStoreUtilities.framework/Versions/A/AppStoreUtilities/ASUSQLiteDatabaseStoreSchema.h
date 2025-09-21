@class NSString, NSArray, ASUSQLiteConnection;

@interface ASUSQLiteDatabaseStoreSchema : NSObject {
    ASUSQLiteConnection *_connection;
    NSString *_schemaName;
    NSArray *_tableNames;
}

@property (readonly) long long currentSchemaVersion;

- (void).cxx_destruct;
- (char)column:(id)a0 existsInTable:(id)a1;
- (char)tableExists:(id)a0;
- (id)initWithConnection:(id)a0 schemaName:(id)a1 tableNames:(id)a2;
- (char)migrateToVersion:(long long)a0 usingBlock:(id /* block */)a1;
- (char)migrateToVersion:(long long)a0 usingMapping:(id /* block */)a1;

@end
