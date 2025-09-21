@interface WebDatabaseManager : NSObject

+ (id)sharedWebDatabaseManager;

- (id)init;
- (id)origins;
- (id)databasesWithOrigin:(id)a0;
- (void)deleteAllDatabases;
- (void)deleteAllIndexedDatabases;
- (char)deleteDatabase:(id)a0 withOrigin:(id)a1;
- (char)deleteOrigin:(id)a0;
- (id)detailsForDatabase:(id)a0 withOrigin:(id)a1;

@end
