@class NSString, NSArray, NSMutableDictionary, _EAREmojiRecognition, NSMutableArray;

@interface _EARFormatter : NSObject {
    struct unique_ptr<SpeechITN, std::default_delete<SpeechITN>> { struct __compressed_pair<SpeechITN *, std::default_delete<SpeechITN>> { struct SpeechITN *__value_; } __ptr_; } _itn;
    _EAREmojiRecognition *_emojiFormatter;
    double _firstCandidateItnDurationSum;
    long long _firstCandidateItnCount;
    NSArray *_firstCandidateItnIntervalInTicks;
    NSMutableArray *_recognizedEmojis;
    NSMutableDictionary *_emojiMetrics;
}

@property (copy, nonatomic) NSString *language;

+ (void)initialize;
+ (struct vector<quasar::Token, std::allocator<quasar::Token>> { struct Token *x0; struct Token *x1; struct __compressed_pair<quasar::Token *, std::allocator<quasar::Token>> { struct Token *x0; } x2; })convertStringsToQuasarTokens:(id)a0;
+ (struct vector<quasar::Token, std::allocator<quasar::Token>> { struct Token *x0; struct Token *x1; struct __compressed_pair<quasar::Token *, std::allocator<quasar::Token>> { struct Token *x0; } x2; })convertStringsToQuasarTokens:(id)a0 offset:(unsigned int)a1;
+ (char)supportedByQuasarConfig:(id)a0;
+ (char)supportedByQuasarSystemConfig:(const void *)a0;
+ (char)useEmojiHammerWhenRecognizeEmoji:(char)a0;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct vector<quasar::Token, std::allocator<quasar::Token>> { struct Token *x0; struct Token *x1; struct __compressed_pair<quasar::Token *, std::allocator<quasar::Token>> { struct Token *x0; } x2; })formatWords:(const void *)a0 unrepairedWordsOut:(void *)a1;
- (id)formatWords:(id)a0 task:(id)a1 autoPunctuate:(char)a2;
- (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { struct { unsigned char x0 : 1; unsigned char x1 : 7; } x0; char x1[0]; char x2[23]; } x0; struct __long { struct { unsigned char x0 : 1; unsigned long x1 : 63; } x0; unsigned long long x1; char *x2; } x1; } x0; } x0; })getOrthography:(const void *)a0;
- (id)_earEmojiRecognition;
- (id)_formattedStringWithStrings:(id)a0 task:(id)a1 leftContext:(id)a2;
- (id)_formattedStringWithStrings:(id)a0 task:(id)a1 leftContext:(id)a2 recognizeEmoji:(char)a3;
- (id)_formattedStringWithStrings:(id)a0 task:(id)a1 leftContext:(id)a2 recognizeEmoji:(char)a3 rightContext:(id)a4;
- (id)_formattedStringWithoutEmojiModifier:(id)a0;
- (id)_recognizeEmojiInString:(id)a0 alternativesOut:(id)a1 persistEmoji:(char)a2;
- (void)appendNbestListWithEmojiAlternativesForFormattedTokens:(const void *)a0 formattedTokensWithoutEmojiModifier:(const void *)a1 formattedNBestList:(void *)a2 formattedNBestListWithoutEmojiModifier:(void *)a3 emojiTokenIndices:(const void *)a4 recognizeEmoji:(char)a5;
- (struct vector<std::string, std::allocator<std::string>> { void *x0; void *x1; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *x0; } x2; })emojiAlternativesForEmojis:(id)a0;
- (id)emojiAlternativesForFormattedTokens:(id)a0 stringsWithoutEmojiModifier:(id)a1 alternateNameForTokens:(id)a2;
- (id)emojiPhraseRemoveKeyword:(id)a0;
- (struct unordered_set<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> { struct __hash_table<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::string, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>> { void **x0; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>> { unsigned long long x0; } x0; } x1; } x0; } x0; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *> *>, std::allocator<std::__hash_node<std::string, void *>>> { struct __hash_node_base<std::__hash_node<std::string, void *> *> { void *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::hash<std::string>> { unsigned long long x0; } x2; struct __compressed_pair<float, std::equal_to<std::string>> { float x0; } x3; } x0; })endsOfSentencePunctuationsForLanguage:(const void *)a0;
- (id)formatWords:(id)a0 task:(id)a1 autoPunctuate:(char)a2 recognizeEmoji:(char)a3;
- (struct vector<quasar::Token, std::allocator<quasar::Token>> { struct Token *x0; struct Token *x1; struct __compressed_pair<quasar::Token *, std::allocator<quasar::Token>> { struct Token *x0; } x2; })formatWords:(const void *)a0 unrepairedWordsOut:(void *)a1 task:(id)a2;
- (struct vector<quasar::Token, std::allocator<quasar::Token>> { struct Token *x0; struct Token *x1; struct __compressed_pair<quasar::Token *, std::allocator<quasar::Token>> { struct Token *x0; } x2; })formatWords:(const void *)a0 unrepairedWordsOut:(void *)a1 task:(id)a2 language:(id)a3 preItnLeftContext:(const void *)a4 separateAutoEndPunctuation:(char)a5 partialResults:(void *)a6 timestampOffset:(unsigned int)a7 zeroTimestamp:(char)a8 continuousListeningConfig:(struct shared_ptr<quasar::ContinuousListeningConfig> { struct ContinuousListeningConfig *x0; struct __shared_weak_count *x1; })a9 postItnLeftContext:(const void *)a10 itnResult:(void *)a11 itnOverrides:(const void *)a12 itnEnablingFlags:(unsigned short)a13 recognizeEmoji:(char)a14 leftContextProvidedByClient:(char)a15 preItnRightContext:(const void *)a16 emojiTokenIndices:(void *)a17 persistEmoji:(char)a18 shouldHideTrailingPunctuation:(char)a19 isTrailingPunctuationHidden:(struct shared_ptr<bool> { BOOL *x0; struct __shared_weak_count *x1; })a20 isFinal:(char)a21 choiceIdx:(int)a22 itnCompletion:(id /* block */)a23;
- (id)formattedRecognitionWithNBestList:(id)a0;
- (id)formattedStringWithStrings:(id)a0;
- (id)formattedStringWithStrings:(id)a0 preToPostItnArray:(id)a1;
- (id)formattedStringWithStrings:(id)a0 preToPostItnArray:(id)a1 task:(id)a2;
- (id)formattedStringWithStrings:(id)a0 task:(id)a1;
- (struct vector<quasar::Token, std::allocator<quasar::Token>> { struct Token *x0; struct Token *x1; struct __compressed_pair<quasar::Token *, std::allocator<quasar::Token>> { struct Token *x0; } x2; })formattedTokensWithoutEmojiModifier:(const void *)a0 emojiTokenIndices:(const void *)a1 recognizeEmoji:(char)a2;
- (id)initNcsWithModelRoot:(id)a0;
- (id)initWithGeneralVoc:(id)a0 withLexiconEnh:(id)a1 withItnEnh:(id)a2;
- (id)initWithLanguage:(id)a0 withSdapiConfig:(id)a1 quasarConfig:(id)a2;
- (id)initWithQuasarConfig:(id)a0;
- (id)initWithQuasarConfig:(id)a0 language:(id)a1;
- (id)initWithQuasarConfig:(id)a0 overrideConfigFiles:(id)a1;
- (id)initWithQuasarConfig:(id)a0 overrideConfigFiles:(id)a1 supportEmojiRecognition:(char)a2 language:(id)a3;
- (id)initWithQuasarConfig:(id)a0 overrideConfigFiles:(id)a1 supportEmojiRecognition:(char)a2 language:(id)a3 skipPathsExistCheck:(char)a4;
- (void)initializeItnMetrics;
- (char)isEnableAutoPunctuation:(const void *)a0 task:(const void *)a1 itnEnablingFlags:(unsigned short)a2;
- (void)recognizeEmojiForTokens:(void *)a0 emojiTokenIndices:(void *)a1 persistEmoji:(char)a2 choiceIdx:(int)a3;
- (id)recognizeEmojiInString:(id)a0 alternativesOut:(id)a1;
- (char)refreshEmojiRecognizer;
- (void)setItnMetricsWithCompletion:(id /* block */)a0;

@end
