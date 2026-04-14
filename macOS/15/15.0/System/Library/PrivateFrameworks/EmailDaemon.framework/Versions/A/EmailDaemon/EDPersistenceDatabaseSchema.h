@class EFSQLSchema;

@interface EDPersistenceDatabaseSchema : NSObject

@property (class, readonly, nonatomic) EFSQLSchema *schema;
@property (class, readonly, nonatomic) EFSQLSchema *protectedSchema;

+ (void)_initializeSchemas;
+ (id)_protectedSchemaProviders;
+ (id)_schemaProviders;
+ (id)_schemaWithPopulationBlock:(id /* block */)a0;
+ (id)additionalSchemaProviders;
+ (id)mailboxURLColumnName;
+ (id)mailboxesTableName;
+ (id)partialMailboxesTableSchema;
+ (id)propertiesTableName;
+ (id)propertiesTableSchema;
+ (void)registerAdditionalPropertiesForPropertyMapper:(id)a0;
+ (void)test_resetSchema;

@end
