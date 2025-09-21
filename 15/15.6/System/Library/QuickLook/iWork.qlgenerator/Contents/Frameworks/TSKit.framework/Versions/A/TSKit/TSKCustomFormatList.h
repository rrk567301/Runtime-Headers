@class NSMutableDictionary, TSUNoCopyDictionary, NSMutableSet, TSUSparseArray;

@interface TSKCustomFormatList : TSPObject <NSCopying>

@property (retain, nonatomic) NSMutableDictionary *formatsByKeyDictionary;
@property (retain, nonatomic) TSUNoCopyDictionary *keysByFormatDictionary;
@property (retain, nonatomic) TSUNoCopyDictionary *keysByFormatWithNameStemMatching;
@property (retain, nonatomic) TSUSparseArray *keysByIndex;
@property (retain, nonatomic) TSUNoCopyDictionary *indexesByKey;
@property (retain, nonatomic) NSMutableSet *namesList;
@property (nonatomic) char upgradingDone;
@property (nonatomic) char importingDone;
@property (nonatomic) char importing;
@property (nonatomic) char upgrading;

+ (void)archiveKeys:(id)a0 message:(void *)a1;
+ (id)unarchiveKeys:(const void *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)allKeys;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)initWithContext:(id)a0;
- (void)removeAll;
- (id)customFormatForKey:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (id)addCustomFormat:(id)a0 oldKey:(id)a1 fuzzyNameMatching:(char)a2;
- (void)remapCustomFormatKeysWithOldToNewKeyMap:(id)a0;
- (id)upgradedCustomFormatKeyForLegacyID:(unsigned int)a0;
- (char)hasFormatNamed:(id)a0;
- (void)addCustomFormatForUpgrade:(id)a0 legacyKey:(unsigned int)a1;
- (id)addImportedCustomFormat:(id)a0;
- (id)addedKeysRelativeTo:(id)a0;
- (unsigned long long)inspectorIndexForKey:(id)a0;
- (id)keyForCustomFormat:(id)a0;
- (id)keyForInspectorIndex:(unsigned long long)a0;
- (void)p_addCustomFormatToNameStemDict:(id)a0 key:(id)a1;
- (id)p_keyForFormatUsingNameStem:(id)a0;
- (void)p_removeCustomFormatFromNameStemDict:(id)a0 key:(id)a1;
- (void)p_setCustomFormat:(id)a0 key:(id)a1;
- (void)p_setCustomFormat:(id)a0 key:(id)a1 legacyKey:(unsigned int)a2;
- (char)p_validateNameStemCount;
- (void)removeCustomFormatForKey:(id)a0;
- (void)removeCustomFormatsForKeys:(id)a0;
- (void)updateCustomFormat:(id)a0 oldKey:(id)a1;

@end
