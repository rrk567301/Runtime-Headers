@class NSString, NSDictionary, NSSet, _EARPeopleSuggesterConfig;

@interface _EARUserProfileBuilder : NSObject {
    NSString *_language;
    struct LmePackedUserData { struct SymbolTable { void /* function */ **_vptr$SymbolTable; struct SymbolTableImpl *impl_; } dataPronSyms; struct map<std::string, std::vector<std::vector<quasar::LmePackedWord>>, std::less<std::string>, std::allocator<std::pair<const std::string, std::vector<std::vector<quasar::LmePackedWord>>>>> { struct __tree<std::__value_type<std::string, std::vector<std::vector<quasar::LmePackedWord>>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::vector<quasar::LmePackedWord>>>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::vector<std::vector<quasar::LmePackedWord>>>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } data; } _userData;
    struct shared_ptr<quasar::LmeDataFactory> { struct LmeDataFactory *__ptr_; struct __shared_weak_count *__cntrl_; } _dataFactory;
    struct unique_ptr<quasar::TextTokenizer, std::default_delete<quasar::TextTokenizer>> { struct TextTokenizer *__ptr_; } _tokenizer;
    struct unique_ptr<quasar::G2P, std::default_delete<quasar::G2P>> { struct G2P *__ptr_; } _g2p;
    struct unique_ptr<quasar::G2Embedding, std::default_delete<quasar::G2Embedding>> { struct G2Embedding *__ptr_; } _g2emb;
    struct shared_ptr<quasar::PronCache<std::string, std::vector<std::string>>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } _pronCache;
    struct BasicTextSanitizer { void /* function */ **_vptr$TextSanitizer; struct shared_ptr<quasar::URegularExpressionWrapper> { struct URegularExpressionWrapper *__ptr_; struct __shared_weak_count *__cntrl_; } mUnicodeOutliers; struct shared_ptr<quasar::URegularExpressionWrapper> { struct URegularExpressionWrapper *__ptr_; struct __shared_weak_count *__cntrl_; } mSpecialChars; struct shared_ptr<quasar::URegularExpressionWrapper> { struct URegularExpressionWrapper *__ptr_; struct __shared_weak_count *__cntrl_; } mDupSpacePattern; struct shared_ptr<quasar::URegularExpressionWrapper> { struct URegularExpressionWrapper *__ptr_; struct __shared_weak_count *__cntrl_; } mCtrlCharsPattern; int state; struct unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::string>>> { struct __hash_table<std::__hash_value_type<std::string, std::string>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::string>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::string>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, std::string>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } UTF8_MAP; struct unordered_map<char32_t, char32_t, std::hash<char32_t>, std::equal_to<char32_t>, std::allocator<std::pair<const char32_t, char32_t>>> { struct __hash_table<std::__hash_value_type<char32_t, char32_t>, std::__unordered_map_hasher<char32_t, std::__hash_value_type<char32_t, char32_t>, std::hash<char32_t>, std::equal_to<char32_t>>, std::__unordered_map_equal<char32_t, std::__hash_value_type<char32_t, char32_t>, std::equal_to<char32_t>, std::hash<char32_t>>, std::allocator<std::__hash_value_type<char32_t, char32_t>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<char32_t, char32_t>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<char32_t, char32_t>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<char32_t, char32_t>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<char32_t, char32_t>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } unicode_map; } _sanitizer;
    struct unique_ptr<quasar::PersonalizationRecipe, std::default_delete<quasar::PersonalizationRecipe>> { struct PersonalizationRecipe *__ptr_; } _personalizationRecipe;
    struct shared_ptr<quasar::LmeData> { struct LmeData *__ptr_; struct __shared_weak_count *__cntrl_; } _quasarLmeData;
    BOOL _reuseProfile;
    struct unique_ptr<quasar::WordPronCache, std::default_delete<quasar::WordPronCache>> { struct WordPronCache *__ptr_; } _outPronCache;
    int _outPronCacheHits;
    int _outPronCacheMisses;
    int _wordsRejected;
    int _wordsAccepted;
    struct unordered_map<std::string, int, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, int>>> { struct __hash_table<std::__hash_value_type<std::string, int>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, int>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, int>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, int>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _quasarTemplate2Count;
    struct set<std::vector<std::string>, quasar::NameEnumerator::EnumComparator, std::allocator<std::vector<std::string>>> { struct __tree<std::vector<std::string>, quasar::NameEnumerator::EnumComparator, std::allocator<std::vector<std::string>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } _contactEnumSet;
    struct shared_ptr<quasar::PronCache<std::string, std::vector<std::string>>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } _embeddingCache;
    struct unique_ptr<quasar::WordPronCache, std::default_delete<quasar::WordPronCache>> { struct WordPronCache *__ptr_; } _outEmbeddingCache;
    int _outEmbeddingCacheHits;
    int _outEmbeddingCacheMisses;
    struct map<std::string, long long, std::less<std::string>, std::allocator<std::pair<const std::string, long long>>> { struct __tree<std::__value_type<std::string, long long>, std::__map_value_compare<std::string, std::__value_type<std::string, long long>, std::less<std::string>>, std::allocator<std::__value_type<std::string, long long>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } _templateToVersion;
    struct set<std::string, std::less<std::string>, std::allocator<std::string>> { struct __tree<std::string, std::less<std::string>, std::allocator<std::string>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } _experimentIds;
}

@property (readonly, nonatomic) _EARPeopleSuggesterConfig *peopleSuggesterConfig;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSDictionary *templateToVersion;
@property (copy, nonatomic) NSSet *experimentIds;

+ (void)initialize;
+ (BOOL)isEasyToRecognizeWord:(id)a0 forLocale:(id)a1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_embeddingsForOrthography:(const void *)a0 templateName:(const void *)a1 embeddings:(void *)a2 pronRequest:(int)a3;
- (void)_logLmeSlotUpdatedEventsWithLanguage:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; })a0 numEnumeratedEntries:(struct map<std::string, int, std::less<std::string>, std::allocator<std::pair<const std::string, int>>> { struct __tree<std::__value_type<std::string, int>, std::__map_value_compare<std::string, std::__value_type<std::string, int>, std::less<std::string>>, std::allocator<std::__value_type<std::string, int>>> { void *x0; struct __tree_end_node<std::__tree_node_base<void *> *> { void *x0; } x1; unsigned long long x2; } x0; })a1;
- (void)_logSpeechProfileUpdatedEventWithLmeData:(struct shared_ptr<quasar::LmeData> { struct LmeData *x0; struct __shared_weak_count *x1; })a0 sizeInBytes:(int)a1 numEnumeratedEntries:(struct map<std::string, int, std::less<std::string>, std::allocator<std::pair<const std::string, int>>> { struct __tree<std::__value_type<std::string, int>, std::__map_value_compare<std::string, std::__value_type<std::string, int>, std::less<std::string>>, std::allocator<std::__value_type<std::string, int>>> { void *x0; struct __tree_end_node<std::__tree_node_base<void *> *> { void *x0; } x1; unsigned long long x2; } x0; })a2;
- (void)_pronunciationsForOrthography:(const void *)a0 phoneticOrthography:(const void *)a1 templateName:(const void *)a2 pronunciations:(void *)a3 pronRequest:(int)a4 outOrthography:(void *)a5;
- (BOOL)_writeProfileToStream:(void *)a0;
- (void)addPersonalizationData:(id)a0;
- (void)addPersonalizationJsonData:(id)a0;
- (void)addWordWithParts:(id)a0 templateName:(id)a1;
- (id)createInlineLmeUserDataForContextData:(id)a0 speechProfile:(id)a1;
- (void)createInlineLmeUserDataForContextStrings:(id)a0;
- (void)createInlineLmeUserDataForWordsWithMetadata:(id)a0;
- (id)dataProfile;
- (id)initWithConfig:(id)a0 language:(id)a1 overrides:(id)a2 textNormalizationModelRoot:(id)a3 sdapiOverrides:(id)a4 emptyVoc:(id)a5 pgVoc:(id)a6 paramsetHolder:(id)a7 isJit:(BOOL)a8 error:(id *)a9;
- (id)initWithConfiguration:(id)a0 language:(id)a1 overrides:(id)a2 sdapiOverrides:(id)a3 emptyVoc:(id)a4 pgVoc:(id)a5 paramsetHolder:(id)a6;
- (id)initWithConfiguration:(id)a0 language:(id)a1 overrides:(id)a2 sdapiOverrides:(id)a3 emptyVoc:(id)a4 pgVoc:(id)a5 paramsetHolder:(id)a6 isJit:(BOOL)a7;
- (id)initWithConfiguration:(id)a0 language:(id)a1 overrides:(id)a2 sdapiOverrides:(id)a3 generalVoc:(id)a4 emptyVoc:(id)a5 pgVoc:(id)a6 lexiconEnh:(id)a7 tokenEnh:(id)a8 paramsetHolder:(id)a9;
- (id)initWithConfiguration:(id)a0 language:(id)a1 overrides:(id)a2 sdapiOverrides:(id)a3 generalVoc:(id)a4 emptyVoc:(id)a5 pgVoc:(id)a6 lexiconEnh:(id)a7 tokenEnh:(id)a8 paramsetHolder:(id)a9 isJit:(BOOL)a10;
- (id)initWithConfiguration:(id)a0 language:(id)a1 overrides:(id)a2 textNormalizationModelRoot:(id)a3 sdapiOverrides:(id)a4 emptyVoc:(id)a5 pgVoc:(id)a6 paramsetHolder:(id)a7 isJit:(BOOL)a8;
- (id)initWithConfiguration:(id)a0 language:(id)a1 sdapiOverrides:(id)a2 generalVoc:(id)a3 emptyVoc:(id)a4 pgVoc:(id)a5 lexiconEnh:(id)a6 tokenEnh:(id)a7 paramsetHolder:(id)a8;
- (id)initWithConfiguration:(id)a0 withLanguage:(id)a1 withSdapiOverrides:(id)a2 withSdapiConfig:(id)a3;
- (id)pronunciationsForOrthography:(id)a0;
- (void)readUserProfile:(id)a0;
- (void)readUserProfile:(id)a0 reuseProfile:(BOOL)a1;
- (void)readUserProfileWithPath:(id)a0;
- (void)readUserProfileWithPath:(id)a0 reuseProfile:(BOOL)a1;
- (void)removeAllWords;
- (void)removeLmeDataForTemplateName:(id)a0;
- (id)sanitizedStringWithString:(id)a0;
- (void)signalEndOfUserData;
- (void)writeOutUserDataToJson:(id)a0 withConfig:(id)a1;
- (BOOL)writeProfileToFile:(id)a0 protectionClass:(long long)a1 coordinated:(BOOL)a2 length:(unsigned long long *)a3 error:(id *)a4;
- (BOOL)writeProfileToFile:(id)a0 protectionClass:(long long)a1 length:(unsigned long long *)a2 error:(id *)a3;

@end
