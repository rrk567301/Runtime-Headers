@class NSString, LSMDocMetadata, NSArray, NSMutableDictionary, NSDictionary;

@interface HelpSDMModel : NSObject {
    LSMDocMetadata *docMetadata;
    struct __LSMMap { } *LSMMap;
    NSString *modelLanguage;
    NSArray *sortedWordListCache;
    NSMutableDictionary *cachedSuggestionNGrams;
    NSArray *cachedAllHelpbookIDs;
    NSDictionary *cachedEnvironmentProperties;
    NSDictionary *cachedSuggestions;
}

@property (readonly) NSString *modelDirectoryPath;
@property int activity;

+ (id)_modelGroupInfo;
+ (id)defaultModelGroups;
+ (float)combiningWeightForModelGroupName:(id)a0;
+ (float)combiningWeightForHelpbookID:(id)a0;
+ (id)allModelGroupNames;
+ (id)synonymsTableForLanguage:(id)a0;
+ (id)modelGroupNameForHelpbookID:(id)a0;
+ (id)copyHelpbookIDsForModelGroupName:(id)a0 includeSmoothingBooks:(BOOL)a1;
+ (id)helpbookPropertiesForHelpbookID:(id)a0 modelGroupName:(id)a1;
+ (id)directoryPathForModelGroupName:(id)a0 language:(id)a1;
+ (BOOL)modelExistsForHelpbookID:(id)a0 language:(id)a1;
+ (BOOL)modelExistsForGroupName:(id)a0 language:(id)a1;
+ (id)directoryPathForLanguage:(id)a0;
+ (BOOL)modelExistsForLanguage:(id)a0;

- (void)dealloc;
- (void)reset;
- (id)suggestions;
- (BOOL)setSuggestions:(id)a0;
- (int)saveWithOptions:(id)a0;
- (id)allHelpbookIDs;
- (BOOL)addHelpbookID:(id)a0;
- (id)environmentProperties;
- (BOOL)setEnvironmentProperties:(id)a0;
- (void)_initializeMetadataDoc;
- (void)_resetMetadataDoc;
- (id)initWithDirectoryPath:(id)a0 language:(id)a1;
- (void)_disposeRetainedData;
- (void)_setPropertiesOnLSMMap;
- (BOOL)needsBuild;
- (void)loadLSMMap;
- (void)currentThreadIsAboutToComplete;
- (int)addTokenCounts:(id)a0 forFile:(id)a1 withBookIdentifier:(id)a2;
- (int)addTokenCounts:(id)a0 forFile:(id)a1 keywords:(id)a2 withBookIdentifier:(id)a3;
- (unsigned long long)numberOfDocuments;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfStrings:(id)a0 withPrefix:(id)a1;
- (id)suggestionResultsForSubString:(id)a0 bookID:(id)a1 tokenCounts:(id)a2 initiatingQuery:(id)a3;
- (id)prefixSuggestionResultsForTokenString:(id)a0 bookID:(id)a1 attemptSpellingCorrection:(BOOL)a2 initiatingQuery:(id)a3;
- (id)_prefixSuggestionTokenizedStringsForTokenString:(id)a0 bookID:(id)a1 initiatingQuery:(id)a2;
- (BOOL)bigram:(id)a0 containsUnigram:(id)a1;
- (BOOL)trigram:(id)a0 containsUnigram:(id)a1;
- (BOOL)trigram:(id)a0 containsBigram:(id)a1;
- (id)createListOfNearestDocuments:(unsigned long long)a0 fromText:(id)a1 initiatingQuery:(id)a2;
- (id)arrayOfMapWords;
- (BOOL)containsUnigram:(id)a0;
- (BOOL)_tokenString:(id)a0 isAlreadyContainedAsHigherOrderNGramInTokenCounts:(id)a1;
- (void)_rescoreResults:(id)a0 containingKeywordsMatchingTokens:(id)a1 usingThreshold:(float)a2;
- (id)_createArrayOfExpandedNgramsForToken:(id)a0 alternativeSubTokenExpansions:(id)a1 accumulatedLowerOrderTokenCounts:(id)a2 initiatingQuery:(id)a3;
- (id)_createListOfCombinedResultsFromText:(id)a0 initiatingQuery:(id)a1;
- (id)createListOfCombinedNearestDocuments:(unsigned long long)a0 fromText:(id)a1 originalQuery:(id)a2 tokenizer:(id)a3 initiatingQuery:(id)a4;
- (id)createListOfPrefixSuggestionDocuments:(unsigned long long)a0 fromText:(id)a1 originalQuery:(id)a2 tokenizer:(id)a3 bookID:(id)a4 initiatingQuery:(id)a5;
- (id)attribute:(id)a0 forDocID:(long long)a1;

@end
