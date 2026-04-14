@class KHDBRidList;

@interface KHDBCharIndex : KHDBUuidModel {
    unsigned long long _character;
    KHDBRidList *_stringIds;
}

@property (nonatomic) BOOL isDirty;

- (void)dealloc;
- (id)description;
- (unsigned long long)character;
- (id)stringIds;
- (void)cacheCharacter:(unsigned long long)a0;
- (void)cacheStringIds:(id)a0;
- (void)saveStringIds;
- (id)initWithCharacter:(unsigned long long)a0 forEntity:(id)a1;
- (BOOL)addStringId:(unsigned long long)a0;
- (BOOL)removeStringId:(unsigned long long)a0;
- (void)removeStringIds:(id)a0;
- (id)copyStringIds;
- (int)charIndexType;

@end
