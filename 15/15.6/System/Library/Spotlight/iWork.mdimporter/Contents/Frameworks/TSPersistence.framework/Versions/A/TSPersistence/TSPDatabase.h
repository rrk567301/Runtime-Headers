@class NSURL;

@interface TSPDatabase : TSUDatabase {
    NSURL *_packageURL;
    char _incrementalVacuum;
    struct sqlite3_stmt { } *_insertObjectStatement;
    struct sqlite3_stmt { } *_insertDataStateStatement;
    struct sqlite3_stmt { } *_updateDataStateStatement;
    struct sqlite3_stmt { } *_insertRelationshipStatement;
    struct sqlite3_stmt { } *_relationshipTargetsStatement;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithPath:(id)a0 error:(id *)a1;
- (char)closeWithError:(id *)a0;
- (char)upgradeFromSchemaVersion:(int)a0 error:(id *)a1;
- (id)initReadonlyWithPath:(id)a0 error:(id *)a1;
- (char)needsUpgradeFromSchemaVersion:(int)a0;
- (char)documentVersion:(struct { unsigned long long x0; unsigned long long x1; } *)a0 closedCleanlyToken:(long long *)a1 error:(id *)a2;
- (char)documentVersion:(unsigned long long *)a0 error:(id *)a1;
- (void *)filterIdentifiers:(const void *)a0 error:(id *)a1;
- (char)insertDataStateWithSize:(int)a0 identifier:(long long *)a1 error:(id *)a2;
- (char)insertObjectWithIdentifier:(long long)a0 stateIdentifier:(const struct ObjectStateIdentifier { char x0; long long x1; char x2; id x3; } *)a1 classType:(int)a2 error:(id *)a3;
- (char)insertRelationshipWithSourceIdentifier:(long long)a0 targetIdentifier:(long long)a1 error:(id *)a2;
- (char)lastObjectIdentifier:(long long *)a0 error:(id *)a1;
- (void *)newRelationshipTargetsForSourceIdentifier:(long long)a0 error:(id *)a1;
- (char)numberOfDatabaseObjects:(unsigned long long *)a0 error:(id *)a1;
- (id)objectFromStatement:(struct sqlite3_stmt { } *)a0;
- (struct sqlite3_blob { } *)openBlobForObject:(id)a0 error:(id *)a1;
- (struct sqlite3_blob { } *)openDataStateBlobWithIdentifier:(long long)a0 error:(id *)a1;
- (struct sqlite3_blob { } *)openDataStateBlobWithIdentifier:(long long)a0 willWrite:(char)a1 error:(id *)a2;
- (char)parseArchive:(struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a0 forObject:(id)a1 error:(id *)a2;
- (id)queryFirstObjectWithStatement:(struct sqlite3_stmt { } *)a0 error:(id *)a1;
- (id)queryObjectWithIdentifier:(long long)a0 error:(id *)a1;
- (id)queryObjectsWithMessageTypes:(const int *)a0 messageTypesCount:(int)a1 error:(id *)a2;
- (char)setClosedCleanlyToken:(long long)a0 error:(id *)a1;
- (char)setDocumentVersion:(struct { unsigned long long x0; unsigned long long x1; })a0 error:(id *)a1;
- (char)updateDataStateWithIdentifier:(long long)a0 size:(int)a1 error:(id *)a2;

@end
