@class NSArray;

@interface TIWordSearchChinesePhonetic : TIWordSearch

@property (retain, nonatomic) NSArray *fuzzyPinyinPairs;
@property (nonatomic) char fuzzyPinyinEnabled;
@property (nonatomic) char tenKeyPinyinEnabled;
@property (nonatomic) int shuangpinType;

+ (id)pinyinCharacterSetWithTones;

- (void)dealloc;
- (void).cxx_destruct;
- (int)mecabraInputMethodType;
- (id)candidatesCacheKeyForOperation:(id)a0;
- (char)shareVocabulary;
- (id)uncachedCandidatesForOperation:(id)a0;
- (unsigned char)nameReadingPairGenerationMode;
- (void)updateMecabraState;
- (void)clearCacheForInputString:(id)a0 keyboardInput:(id)a1 unambiguousSyllableCount:(unsigned long long)a2 selectedDisambiguationCandidateIndex:(unsigned long long)a3;
- (unsigned long long)mecabraAnalysisOptionsWithAutocorrectionEnabled:(char)a0 firstSyllableLocked:(char)a1 reanalysisMode:(char)a2 hardwareKeyboardMode:(char)a3 predictionEnabled:(char)a4;
- (void)setCustomDialectLanguageModel:(id)a0;
- (void)updateFuzzyPinyinSettings;
- (void)updateShuangpinTypeWithReanalysisMode:(char)a0;

@end
