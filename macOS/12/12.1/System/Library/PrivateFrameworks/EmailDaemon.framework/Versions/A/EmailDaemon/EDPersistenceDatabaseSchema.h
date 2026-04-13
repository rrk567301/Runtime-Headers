@class EFSQLSchema, EFSQLPropertyMapper;

@interface EDPersistenceDatabaseSchema : NSObject

@property (class, readonly, nonatomic) EFSQLSchema *schema;
@property (class, readonly, nonatomic) EFSQLSchema *protectedSchema;
@property (class, readonly, nonatomic) EFSQLPropertyMapper *propertyMapper;

+ (id)mailboxesTableName;
+ (id)objectPropertyMapperForSchema:(id)a0 protectedSchema:(id)a1;
+ (void)_initializeSchemas;
+ (id)_schemaProviders;
+ (id)_schemaWithPopulationBlock:(id /* block */)a0;
+ (id)_protectedSchemaProviders;
+ (id)additionalSchemaProviders;
+ (id)propertiesTableName;
+ (void)test_resetSchema;
+ (id)propertiesTableSchema;
+ (id)partialMailboxesTableSchema;

@end
