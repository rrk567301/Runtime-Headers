@class HDSQLiteDatabase, NSURL;

@interface HDSimpleGraphDatabase : NSObject {
    HDSQLiteDatabase *_database;
}

@property (class, copy, nonatomic) id /* block */ unitTesting_didInitGraphDatabaseHandler;

@property (readonly, nonatomic) HDSQLiteDatabase *underlyingDatabase;
@property (retain, nonatomic) HDSQLiteDatabase *unitTesting_underlyingDatabase;
@property (copy, nonatomic) id /* block */ unitTesting_didCreateDatabaseConnectionHandler;
@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, nonatomic, getter=isOpen) char open;

+ (id)graphDatabaseWithURL:(id)a0 error:(id *)a1;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)close;
- (char)deleteWithError:(id *)a0;
- (id)schemaVersionWithError:(id *)a0;
- (char)addAttributeForNodeID:(long long)a0 type:(long long)a1 value:(id)a2 version:(long long)a3 slots:(unsigned long long)a4 error:(id *)a5;
- (char)addRelationshipWithSubjectNodeID:(long long)a0 type:(long long)a1 objectNodeID:(long long)a2 version:(long long)a3 slots:(unsigned long long)a4 error:(id *)a5;
- (char)deleteNodeWithID:(long long)a0 error:(id *)a1;
- (char)enumerateAttributesForNodeWithID:(long long)a0 error:(id *)a1 enumerationHandler:(id /* block */)a2;
- (char)enumerateAttributesForNodeWithID:(long long)a0 includeDeleted:(char)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
- (char)enumerateNodesForPredicate:(id)a0 error:(id *)a1 enumerationHandler:(id /* block */)a2;
- (char)enumerateNodesForPredicate:(id)a0 includeDeleted:(char)a1 limit:(unsigned long long)a2 error:(id *)a3 enumerationHandler:(id /* block */)a4;
- (char)enumerateRelationshipsForPredicate:(id)a0 error:(id *)a1 enumerationHandler:(id /* block */)a2;
- (char)enumerateRelationshipsForPredicate:(id)a0 includeDeleted:(char)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
- (char)enumerateRelationshipsWithSubjectID:(long long)a0 includeDeleted:(char)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
- (char)foreignKeysEnable:(char)a0 error:(id *)a1;
- (char)insertNodeWithID:(long long)a0 version:(long long)a1 slots:(unsigned long long)a2 deleted:(char)a3 error:(id *)a4;
- (char)metadataValueForKey:(id)a0 valueOut:(id *)a1 error:(id *)a2;
- (id)nodeForID:(long long)a0 error:(id *)a1;
- (void)onCommit:(id /* block */)a0 orRollback:(id /* block */)a1;
- (char)performTransactionWithError:(id *)a0 write:(char)a1 block:(id /* block */)a2;
- (char)setMetadataValue:(id)a0 forKey:(id)a1 error:(id *)a2;
- (char)unitTesting_addAttributeWithType:(long long)a0 value:(id)a1 nodeID:(long long)a2 error:(id *)a3;
- (char)unitTesting_addRelationshipWithType:(long long)a0 subjectNodeID:(long long)a1 objectNodeID:(long long)a2 error:(id *)a3;
- (id)unitTesting_countOfNodesWithError:(id *)a0;
- (id)unitTesting_countOfNodesWithRelationshipType:(long long)a0 error:(id *)a1;
- (id)unitTesting_insertNodeWithID:(long long)a0 error:(id *)a1;
- (char)unitTesting_removeRelationshipWithID:(long long)a0 subjectNodeID:(long long)a1 objectNodeID:(long long)a2 error:(id *)a3;

@end
