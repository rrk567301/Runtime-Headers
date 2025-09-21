@interface HDSimpleGraphDatabaseRelationshipEntity : HDSQLiteEntity

+ (id)foreignKeys;
+ (id)indices;
+ (id)databaseTable;
+ (char)deleteRelationshipsWithSubjectID:(long long)a0 relationshipID:(long long)a1 database:(id)a2 error:(id *)a3;
+ (char)addRelationshipWithType:(long long)a0 subjectNodeID:(long long)a1 objectNodeID:(long long)a2 version:(long long)a3 slots:(unsigned long long)a4 database:(id)a5 error:(id *)a6;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (char)deleteRelationshipsWithSubjectID:(long long)a0 lessThanVersion:(long long)a1 database:(id)a2 error:(id *)a3;
+ (char)enumerateRelationshipsWithPredicate:(id)a0 skipDeleted:(char)a1 database:(id)a2 error:(id *)a3 enumerationHandler:(id /* block */)a4;
+ (char)enumerateRelationshipsWithSubjectID:(long long)a0 skipDeleted:(char)a1 database:(id)a2 error:(id *)a3 enumerationHandler:(id /* block */)a4;
+ (long long)maxVersion:(long long *)a0 slots:(unsigned long long *)a1 subjectNodeID:(long long)a2 relationshipID:(long long)a3 database:(id)a4 error:(id *)a5;
+ (char)removeRelationshipWithType:(long long)a0 subjectNodeID:(long long)a1 objectNodeID:(long long)a2 database:(id)a3 error:(id *)a4;
+ (id)uniquedColumns;
+ (char)updateSlots:(unsigned long long)a0 subjectNodeID:(long long)a1 relationshipID:(long long)a2 database:(id)a3 error:(id *)a4;

- (id)init;

@end
