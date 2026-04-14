@class KHDBRidList;

@interface KHDBCharIndex : KHDBUuidModel {
    unsigned long long _character;
    KHDBRidList *_stringIds;
}

@property (nonatomic) BOOL isDirty;

- (void)dealloc;
- (id)description;
- (unsigned long long)character;
- (void)saveStringIds;
- (id)initWithCharacter:(unsigned long long)a0 forEntity:(id)a1;
- (void)cacheCharacter:(unsigned long long)a0;
- (int)charIndexType;
- (id)stringIds;
- (id)copyStringIds;
- (void)cacheStringIds:(id)a0;
- (BOOL)addStringId:(unsigned long long)a0;
- (BOOL)removeStringId:(unsigned long long)a0;
- (void)removeStringIds:(id)a0;

@end
