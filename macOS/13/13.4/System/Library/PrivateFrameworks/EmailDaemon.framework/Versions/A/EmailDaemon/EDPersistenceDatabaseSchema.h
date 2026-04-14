@class EFSQLSchema, EFSQLPropertyMapper;

@interface EDPersistenceDatabaseSchema : NSObject

@property (class, readonly, nonatomic) EFSQLSchema *schema;
@property (class, readonly, nonatomic) EFSQLSchema *protectedSchema;
@property (class, readonly, nonatomic) EFSQLPropertyMapper *propertyMapper;

+ (void)_initializeSchemas;
+ (id)_protectedSchemaProviders;
+ (id)_schemaProviders;
+ (id)_schemaWithPopulationBlock:(id /* block */)a0;
+ (id)additionalSchemaProviders;
+ (id)mailboxesTableName;
+ (id)objectPropertyMapperForSchema:(id)a0 protectedSchema:(id)a1;
+ (id)partialMailboxesTableSchema;
+ (id)propertiesTableName;
+ (id)propertiesTableSchema;
+ (void)test_resetSchema;

@end
