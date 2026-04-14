@class NSString, NSMutableDictionary;

@interface _ICTransientLexicon : NSObject {
    struct _LXLexicon { } *_lexicon;
    NSMutableDictionary *_tokenIdentifierToEntitiesMap;
    NSMutableDictionary *_entityToTokenIdentifiersMap;
    NSMutableDictionary *_entityToAdditionalDataMap;
    unsigned int _identifier;
}

@property (readonly, nonatomic) unsigned char typeFlags;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long entryCount;

+ (id)transientLexiconForIdentifier:(unsigned int)a0;

- (BOOL)contains:(id)a0;
- (void)addEntity:(id)a0 forEntry:(id)a1;
- (void)dealloc;
- (BOOL)containsEntity:(id)a0;
- (id)getEntries;
- (BOOL)entityIsHyphenatedWord:(id)a0;
- (void)removeEntity:(id)a0;
- (void)addEntity:(id)a0 asAliasOfEntity:(id)a1;
- (id)getEntryRefCount:(id)a0;
- (void)setIsHyphenatedWord:(BOOL)a0 forEntity:(id)a1;
- (id)sortKeyEquivalents:(id)a0;
- (id)initWithName:(id)a0 typeFlags:(unsigned char)a1;
- (struct _LXLexicon { } *)getLexiconImplementation;
- (id)getUsageCount:(id)a0;
- (void)removeAllEntities;
- (void)createAdditionalDataForEntityIfNeeded:(id)a0;
- (id)namedEntitiesForEntry:(id)a0;
- (void).cxx_destruct;

@end
