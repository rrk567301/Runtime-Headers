@class NSArray, NSMutableString, NSMutableOrderedSet, NSString, NSMutableArray;

@interface AXLanguageTaggedContent : NSObject {
    struct _NSRange { unsigned long long location; unsigned long long length; } _currentChunk;
    char _predictedByTagger;
    void *_nlTagger;
    void *_namedEntityTagger;
}

@property (retain, nonatomic) NSMutableString *contentString;
@property (nonatomic, getter=isTagged) char tagged;
@property (retain, nonatomic) NSMutableArray *tags;
@property (retain, nonatomic) NSMutableOrderedSet *unpredictedAmbiguousLangMaps;
@property (retain, nonatomic) NSMutableOrderedSet *predictedSecondaryLangMaps;
@property (retain, nonatomic) NSArray *currentDialects;
@property (retain, nonatomic) NSArray *shorthandDateMatches;
@property (nonatomic) unsigned long long nextShorthandDateIndex;
@property (readonly, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *userPreferredLangID;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithContent:(id)a0;
- (id)_allLangIDs;
- (id)_overrideLanguageDetection:(id)a0;
- (id)langCodeForlangId:(int)a0;
- (int)langIDforLangCode:(id)a0;
- (void)_addTag;
- (char)_isNamedEntity:(id)a0;
- (char)_addLanguageTagForCurrentChunk;
- (char)_addLanguageTagForDateIfNecessary;
- (void)_debugLog:(id)a0 token:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 script:(id)a3 dialects:(id)a4;
- (char)_isStringCombinationOfCommonAndEmoji:(id)a0;
- (struct { int x0; float x1; } *)_languageHintsEvenlyDistributedWithProbability:(float)a0 excludingHints:(id)a1;
- (void)_manuallyProcessContentWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)_preferredLanguagesForTagging;
- (void)_searchForShorthandDates;
- (id)ambiguousLangMaps;
- (void)appendLanguageTaggedContent:(id)a0;
- (void)enumeratePredictedTags:(id /* block */)a0;
- (void)enumerateUnpredictedTags:(id /* block */)a0;
- (char)hasOnlyNonWesternLangMaps;
- (char)hasOnlyWesternLangMaps;
- (char)langMapIsSignificant:(id)a0;
- (id)primaryAmbiguousDialect;
- (id)primaryUnambiguousDialect;
- (id)significantAmbiguousLangMaps;
- (id)significantAmbiguousLangMapsForUserKeyboards;
- (void)tagContent;
- (id)unambiguousLangMaps;
- (void)updateTagsForLocalePrefChange;

@end
