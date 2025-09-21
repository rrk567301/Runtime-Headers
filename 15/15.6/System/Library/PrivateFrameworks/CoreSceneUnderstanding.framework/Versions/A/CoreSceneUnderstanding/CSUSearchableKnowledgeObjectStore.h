@class NSPersistentContainer;

@interface CSUSearchableKnowledgeObjectStore : NSObject

@property (retain) NSPersistentContainer *persistentContainer;

- (void).cxx_destruct;
- (id)initExistingDB:(id)a0 error:(id *)a1;
- (id)entityForIdentifier:(unsigned long long)a0 idType:(short)a1 error:(id *)a2;
- (char)countEntries:(unsigned long long *)a0 error:(id *)a1;
- (char)deleteAllEntities:(id *)a0;
- (char)deleteEntityForIdentifier:(unsigned long long)a0 idType:(short)a1 error:(id *)a2;
- (char)deleteEntityForIdentifier:(unsigned long long)a0 idType:(short)a1 locale:(id)a2 error:(id *)a3;
- (id)entityForIdentifier:(unsigned long long)a0 idType:(short)a1 locale:(id)a2 error:(id *)a3;
- (id)fetchEntitiesWithPredicate:(id)a0 error:(id *)a1;
- (char)fetchMetadataToMemory:(id *)a0;
- (id)getDbObjectByIdentifier:(unsigned long long)a0 idType:(short)a1 context:(id)a2 error:(id *)a3;
- (id)getStore:(id *)a0;
- (int)getTaxonomyVersion:(id *)a0;
- (id)initDB:(id)a0 atPath:(id)a1 error:(id *)a2;
- (char)initDB:(id)a0 atURL:(id)a1 error:(id *)a2;
- (id)initDB:(id)a0 error:(id *)a1;
- (id)initExistingDB:(id)a0 atPath:(id)a1 error:(id *)a2;
- (char)saveDatabase:(id)a0 error:(id *)a1;
- (char)saveMetadataToStore:(id *)a0;
- (char)setTaxonomyVersion:(int)a0 error:(id *)a1;
- (char)storeEntity:(id)a0 uniqueIdWriteback:(unsigned long long *)a1 error:(id *)a2;

@end
