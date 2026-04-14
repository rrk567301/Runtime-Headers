@interface ISDIdMapDatabase : ISDDatabase {
    struct sqlite3_stmt { } *_addMappingStatement;
    struct sqlite3_stmt { } *_allMappingStatement;
    struct sqlite3_stmt { } *_getMappingForGlobalIdStatement;
    struct sqlite3_stmt { } *_getMappingForLocalIdStatement;
    struct sqlite3_stmt { } *_removeMappingStatement;
    struct sqlite3_stmt { } *_removeLocalIdMappingStatement;
    struct sqlite3_stmt { } *_updateMappingStatement;
    struct sqlite3_stmt { } *_removeMappingsForLocalIdsStatement;
    struct sqlite3_stmt { } *_removeMappingsForGlobalIdsStatement;
    struct sqlite3_stmt { } *_purgeMappingsForLocalIdsStatement;
    unsigned long long _flushCount;
}

+ (BOOL)createDatabaseAtPath:(id)a0;
+ (id)defaultDatabasePath:(id)a0;

- (void)dealloc;
- (void)finalize;
- (void)resetState;
- (void)closeDatabase;
- (void)removeAllMappings;
- (void)finalizeStatements;
- (void)disableFlush;
- (void)enableFlush;
- (id)initWithDatabaseInDirectory:(id)a0;
- (void)dropIndexes;
- (void)recreateIndexes;
- (void)disableFlushAndLockImmediately;
- (void)removePurgedMappings;
- (void)removeMappingForGlobalId:(id)a0;
- (void)addMapping:(id)a0;
- (void)addMappingFromGlobalId:(id)a0 toLocalId:(id)a1;
- (void)removeMappingForLocalId:(id)a0;
- (void)removeMappingsForLocalIdentifiers:(id)a0;
- (void)purgeMappingsForLocalIdentifiers:(id)a0;
- (void)removeMappingsForGlobalIdentifiers:(id)a0;
- (void)removeMappingsForEntityNames:(id)a0 withTruth:(id)a1 andClearLocalIdsCache:(id)a2;
- (id)getMappingForId:(id)a0 isLocal:(BOOL)a1;
- (id)getMappingForGlobalId:(id)a0;
- (id)getMappingForLocalId:(id)a0;
- (id)getOrCreateMappingForGlobalId:(id)a0;
- (id)getOrCreateMappingForGlobalId:(id)a0 useLocalIdAsGlobalId:(BOOL)a1;
- (void)updateMapping:(id)a0;
- (id)allMappings;

@end
