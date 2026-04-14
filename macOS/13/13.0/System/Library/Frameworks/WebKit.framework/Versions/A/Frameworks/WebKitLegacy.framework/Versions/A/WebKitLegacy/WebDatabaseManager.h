@interface WebDatabaseManager : NSObject

+ (id)sharedWebDatabaseManager;

- (id)init;
- (id)origins;
- (id)databasesWithOrigin:(id)a0;
- (id)detailsForDatabase:(id)a0 withOrigin:(id)a1;
- (void)deleteAllDatabases;
- (BOOL)deleteOrigin:(id)a0;
- (BOOL)deleteDatabase:(id)a0 withOrigin:(id)a1;
- (void)deleteAllIndexedDatabases;

@end
