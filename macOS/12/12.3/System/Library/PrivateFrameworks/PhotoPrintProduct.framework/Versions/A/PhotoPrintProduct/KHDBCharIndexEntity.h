@class NSLock, NSMapTable, KHDBRidList;

@interface KHDBCharIndexEntity : KHDBEntity {
    NSLock *_charIndexesCacheLock;
    NSLock *_charIndexLoadLock;
    NSMapTable *_charIndexesByCharacter;
    BOOL _isLoaded;
    KHDBRidList *_digraphsToIndex;
    KHDBRidList *_trigraphsToIndex;
}

@property BOOL isLoaded;

- (void)dealloc;
- (id)description;
- (id)initWithTableName:(id)a0 forDatabaseManager:(id)a1 forDatabase:(id)a2;
- (id)cacheModel:(id)a0;
- (void)persistModel:(id)a0;
- (id)loadModelFromResultSet:(id)a0;
- (void)saveCharIndexes;
- (void)removeIdsFromCharIndexes:(id)a0;
- (void)addId:(unsigned long long)a0 toCharIndexesForString:(id)a1;
- (id)possibleIdsForString:(id)a0 usingCharIndexes:(int)a1;
- (id)possibleIdsForString:(id)a0;
- (void)uncacheModel:(id)a0;
- (void)uncacheAllModels;
- (id)loadModelFromBucket:(id)a0;
- (unsigned long long)digraphOffsetForChars:(unsigned long long)a0 :(unsigned long long)a1;
- (unsigned long long)trigraphOffsetForChars:(unsigned long long)a0 :(unsigned long long)a1 :(unsigned long long)a2;
- (void)registerDigraphForChars:(unsigned long long)a0 :(unsigned long long)a1;
- (void)registerTrigraphForChars:(unsigned long long)a0 :(unsigned long long)a1 :(unsigned long long)a2;
- (void)loadCharIndexes;
- (void)registerDigraphs;
- (void)registerTrigraphs;
- (id)indexForCharacter:(unsigned long long)a0;
- (id)charIndexesForString:(id)a0 withCharIndexTypes:(int)a1;
- (id)charIndexesForString:(id)a0;
- (unsigned long long)charIndexCount;
- (void)removeId:(unsigned long long)a0 fromCharIndexesForString:(id)a1;

@end
