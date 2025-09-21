@class NSString, _ICTransientLexicon, NSSet, _ICLexiconView, NSMutableOrderedSet;

@interface _ICNamedEntityStore : NSObject {
    NSMutableOrderedSet *_leastRecentlyAddedEntities;
    unsigned long long _maximumRecentlyAddedEntities;
}

@property (retain, nonatomic) _ICTransientLexicon *wordLexiconImpl;
@property (retain, nonatomic) _ICTransientLexicon *phraseLexiconImpl;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) _ICLexiconView *wordLexicon;
@property (readonly, nonatomic) _ICLexiconView *phraseLexicon;
@property (readonly, nonatomic) unsigned long long durableEntitiesAdded;
@property (readonly, nonatomic) unsigned long long recentEntitiesAdded;
@property (nonatomic) unsigned long long minimumWordLength;
@property (nonatomic) char treatHyphenatedWordAsPhrase;
@property (copy, nonatomic) NSSet *acceptedLanguages;

+ (id)tokenize:(id)a0;

- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (char)areStringCharactersWhitelisted:(id)a0;
- (char)isValidNamedEntity:(id)a0 explanation:(id *)a1;
- (id)_adjustWordsForHyphenationIfNeeded:(id)a0 didAdjust:(char *)a1;
- (struct USet { } *)_exemplarSetForCustomLocales:(id)a0;
- (void)addEntity:(id)a0 isDurable:(char)a1;
- (char)entityIsHyphenatedWord:(id)a0;
- (struct USet { } *)exemplarSetForSupportedLocales;
- (id)initWithName:(id)a0 maximumRecentlyAddedEntities:(unsigned long long)a1;
- (char)isCloserToTitleCase:(id)a0 than:(id)a1;
- (void)reloadRecents;
- (void)removeAllEntities;

@end
