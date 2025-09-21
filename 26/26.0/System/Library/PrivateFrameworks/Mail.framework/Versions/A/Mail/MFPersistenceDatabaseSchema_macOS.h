@interface MFPersistenceDatabaseSchema_macOS : EDPersistenceDatabaseSchema <EDPersistenceDatabaseSchemaProvider>

+ (id)tablesAndForeignKeysToResolve:(id *)a0 associationsToResolve:(id *)a1;
+ (id)additionalSchemaProviders;
+ (id)_messagesTableSchemaAndForeignKeysToResolve:(id *)a0 associationsToResolve:(id *)a1;
+ (id)mailboxesTableSchema;

@end
