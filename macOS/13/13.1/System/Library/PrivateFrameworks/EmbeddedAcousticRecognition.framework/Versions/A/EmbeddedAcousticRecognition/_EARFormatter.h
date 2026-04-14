@class NSString, NSMutableDictionary, NSMutableArray, _EAREmojiRecognition;

@interface _EARFormatter : NSObject {
    struct unique_ptr<SpeechITN, std::default_delete<SpeechITN>> { struct __compressed_pair<SpeechITN *, std::default_delete<SpeechITN>> { struct SpeechITN *__value_; } __ptr_; } _itn;
    _EAREmojiRecognition *_emojiFormatter;
    double _itnDurationSum;
    long long _itnCount;
    NSMutableArray *_recognizedEmojis;
    NSMutableDictionary *_emojiMetrics;
}

@property (copy, nonatomic) NSString *language;

+ (void)initialize;
+ (BOOL)supportedByQuasarConfig:(id)a0;
+ (BOOL)supportedByQuasarSystemConfig:(const void *)a0;
+ (struct vector<quasar::Token, std::allocator<quasar::Token>> { struct Token *x0; struct Token *x1; struct __compressed_pair<quasar::Token *, std::allocator<quasar::Token>> { struct Token *x0; } x2; })convertStringsToQuasarTokens:(id)a0;
+ (struct vector<quasar::Token, std::allocator<quasar::Token>> { struct Token *x0; struct Token *x1; struct __compressed_pair<quasar::Token *, std::allocator<quasar::Token>> { struct Token *x0; } x2; })convertStringsToQuasarTokens:(id)a0 offset:(unsigned int)a1;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithLanguage:(id)a0 withSdapiConfig:(id)a1 quasarConfig:(id)a2;
- (id)initWithQuasarConfig:(id)a0;
- (id)initWithQuasarConfig:(id)a0 overrideConfigFiles:(id)a1;
- (id)initWithQuasarConfig:(id)a0 overrideConfigFiles:(id)a1 supportEmojiRecognition:(BOOL)a2 language:(id)a3;
- (id)initWithQuasarConfig:(id)a0 overrideConfigFiles:(id)a1 supportEmojiRecognition:(BOOL)a2 language:(id)a3 skipPathsExistCheck:(BOOL)a4;
- (id)initWithQuasarConfig:(id)a0 language:(id)a1;
- (BOOL)isEnableAutoPunctuation:(const void *)a0 task:(const void *)a1 itnEnablingFlags:(unsigned short)a2;
- (id)initWithGeneralVoc:(id)a0 withLexiconEnh:(id)a1 withItnEnh:(id)a2;
- (struct vector<quasar::Token, std::allocator<quasar::Token>> { struct Token *x0; struct Token *x1; struct __compressed_pair<quasar::Token *, std::allocator<quasar::Token>> { struct Token *x0; } x2; })formatWords:(const void *)a0 unrepairedWordsOut:(void *)a1;
- (struct vector<quasar::Token, std::allocator<quasar::Token>> { struct Token *x0; struct Token *x1; struct __compressed_pair<quasar::Token *, std::allocator<quasar::Token>> { struct Token *x0; } x2; })formatWords:(const void *)a0 unrepairedWordsOut:(void *)a1 task:(id)a2;
- (struct vector<quasar::Token, std::allocator<quasar::Token>> { struct Token *x0; struct Token *x1; struct __compressed_pair<quasar::Token *, std::allocator<quasar::Token>> { struct Token *x0; } x2; })formatWords:(const void *)a0 unrepairedWordsOut:(void *)a1 task:(id)a2 language:(id)a3 preItnLeftContext:(const void *)a4 separateAutoEndPunctuation:(BOOL)a5 partialResults:(void *)a6 timestampOffset:(unsigned int)a7 zeroTimestamp:(BOOL)a8 continuousListeningConfig:(struct shared_ptr<quasar::ContinuousListeningConfig> { struct ContinuousListeningConfig *x0; struct __shared_weak_count *x1; })a9 postItnLeftContext:(const void *)a10 itnResult:(void *)a11 itnOverrides:(const void *)a12 itnEnablingFlags:(unsigned short)a13 recognizeEmoji:(BOOL)a14 leftContextProvidedByClient:(BOOL)a15 preItnRightContext:(const void *)a16 emojiTokenIndices:(void *)a17 persistEmoji:(BOOL)a18 shouldHideTrailingPunctuation:(BOOL)a19 isTrailingPunctuationHidden:(struct shared_ptr<bool> { BOOL *x0; struct __shared_weak_count *x1; })a20 isFinal:(BOOL)a21 choiceIdx:(int)a22 itnCompletion:(id /* block */)a23;
- (void)recognizeEmojiForTokens:(void *)a0 recognizeEmoji:(BOOL)a1 emojiTokenIndices:(void *)a2 persistEmoji:(BOOL)a3 choiceIdx:(int)a4;
- (struct vector<quasar::Token, std::allocator<quasar::Token>> { struct Token *x0; struct Token *x1; struct __compressed_pair<quasar::Token *, std::allocator<quasar::Token>> { struct Token *x0; } x2; })formattedTokensWithoutEmojiModifier:(const void *)a0 emojiTokenIndices:(const void *)a1 recognizeEmoji:(BOOL)a2;
- (void)appendNbestListWithEmojiAlternativesForFormattedTokens:(const void *)a0 formattedTokensWithoutEmojiModifier:(const void *)a1 formattedNBestList:(void *)a2 formattedNBestListWithoutEmojiModifier:(void *)a3 emojiTokenIndices:(const void *)a4 recognizeEmoji:(BOOL)a5;
- (id)formatWords:(id)a0 task:(id)a1 autoPunctuate:(BOOL)a2;
- (id)formatWords:(id)a0 task:(id)a1 autoPunctuate:(BOOL)a2 recognizeEmoji:(BOOL)a3;
- (BOOL)refreshEmojiRecognizer;
- (void)initializeItnMetrics;
- (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; })getOrthography:(const void *)a0;
- (id)formattedStringWithStrings:(id)a0;
- (id)formattedStringWithStrings:(id)a0 task:(id)a1;
- (id)formattedStringWithStrings:(id)a0 preToPostItnArray:(id)a1;
- (id)formattedStringWithStrings:(id)a0 preToPostItnArray:(id)a1 task:(id)a2;
- (id)formattedRecognitionWithNBestList:(id)a0;
- (id)_formattedStringWithStrings:(id)a0 task:(id)a1 leftContext:(id)a2;
- (id)_formattedStringWithStrings:(id)a0 task:(id)a1 leftContext:(id)a2 recognizeEmoji:(BOOL)a3;
- (id)_formattedStringWithStrings:(id)a0 task:(id)a1 leftContext:(id)a2 recognizeEmoji:(BOOL)a3 rightContext:(id)a4;
- (id)_formattedStringWithoutEmojiModifier:(id)a0;
- (id)emojiPhraseRemoveKeyword:(id)a0;
- (id)emojiAlternativesForFormattedTokens:(id)a0 stringsWithoutEmojiModifier:(id)a1 alternateNameForTokens:(id)a2;

@end
