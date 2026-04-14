@class NSMutableSet, HDDatabaseMigrationTransaction;

@interface HDDatabaseSchemaManager : NSObject {
    NSMutableSet *_createdDatabaseNames;
    HDDatabaseMigrationTransaction *_transaction;
}

- (long long)currentVersionForSchema:(id)a0 protectionClass:(long long)a1 error:(id *)a2;
- (void).cxx_destruct;
- (BOOL)setVersion:(long long)a0 schema:(id)a1 protectionClass:(long long)a2 error:(id *)a3;
- (id)initWithTransaction:(id)a0;

@end
