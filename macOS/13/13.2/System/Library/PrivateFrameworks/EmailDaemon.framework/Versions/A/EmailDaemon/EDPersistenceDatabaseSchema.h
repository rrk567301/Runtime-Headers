@class EFSQLSchema, EFSQLPropertyMapper;

@interface EDPersistenceDatabaseSchema : NSObject

@property (class, readonly, nonatomic) EFSQLSchema *schema;
@property (class, readonly, nonatomic) EFSQLSchema *protectedSchema;
@property (class, readonly, nonatomic) EFSQLPropertyMapper *propertyMapper;

+ (id)objectPropertyMapperForSchema:(id)a0 protectedSchema:(id)a1;
+ (void)test_resetSchema;
+ (void)_initializeSchemas;
+ (id)_schemaWithPopulationBlock:(id /* block */)a0;
+ (id)_schemaProviders;
+ (id)_protectedSchemaProviders;
+ (id)propertiesTableName;
+ (id)mailboxesTableName;
+ (id)propertiesTableSchema;
+ (id)partialMailboxesTableSchema;
+ (id)additionalSchemaProviders;

@end
