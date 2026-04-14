@interface EDAddBusinessesSchemaUpgradeStep : NSObject

+ (id)log;
+ (id)_businessAddressesTableSchema;
+ (id)_businessCategoriesTableSchema;
+ (id)_businessesTableSchema;
+ (int)runWithConnection:(id)a0 databaseName:(id)a1 updateProtectedSchema:(BOOL)a2;

@end
