@class TIDictionaryLookup, NSArray, TIKeyboardInputManager, NSMapTable, NSMutableArray, TLTransliterator;

@interface TIKeyboardInputManagerTransliteration : TIKeyboardInputManagerTransliterationBase

@property (retain, nonatomic) TLTransliterator *transliterator;
@property (retain, nonatomic) TLTransliterator *exactStringTransliterator;
@property (retain, nonatomic) TLTransliterator *autocorrectionTransliterator;
@property (nonatomic) BOOL prioritizeLatinCandidates;
@property (nonatomic) BOOL hasCandidates;
@property (retain, nonatomic) TIDictionaryLookup *dictionaryLookup;
@property (retain, nonatomic) NSArray *currentCandidates;
@property (retain, nonatomic) TIKeyboardInputManager *nativeModelManager;
@property (retain, nonatomic) NSMapTable *transliteratorCandidateByMecabraCandidatePointerValue;
@property (retain, nonatomic) NSMutableArray *committedCandidates;

+ (id)transliteratorInputCharacterSet;

- (id)initWithConfig:(id)a0 keyboardState:(id)a1;
- (id)generateTypingAutocorrectionsWithCandidateRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)keyboardConfiguration;
- (void)suspend;
- (id)keyEventMap;
- (void)loadDictionaries;
- (BOOL)acceptsCharacter:(unsigned int)a0;
- (void).cxx_destruct;
- (struct CandidateCollection { struct vector<KB::Candidate, std::allocator<KB::Candidate>> { struct Candidate *x0; struct Candidate *x1; struct Candidate *x2; } x0; struct vector<KB::Candidate, std::allocator<KB::Candidate>> { struct Candidate *x0; struct Candidate *x1; struct Candidate *x2; } x1; struct vector<KB::Candidate, std::allocator<KB::Candidate>> { struct Candidate *x0; struct Candidate *x1; struct Candidate *x2; } x2; struct vector<KB::Candidate, std::allocator<KB::Candidate>> { struct Candidate *x0; struct Candidate *x1; struct Candidate *x2; } x3; int x4; unsigned int x5; })autocorrectionCandidateStrings;
- (id)autocorrectionListForEmptyInputWithDesiredCandidateCount:(unsigned long long)a0;
- (id)candidateContextFromDocumentStateOnly;
- (id)candidatesForInputString:(id)a0;
- (id)candidatesForInputString:(id)a0 transliterator:(id)a1;
- (id)candidatesWithTypedString:(id)a0 autocorrectedCandidates:(id)a1;
- (id)candidatesWithTypedString:(id)a0 autocorrectedString:(id)a1;
- (void)decrementLanguageModelCount:(id)a0 latinInputString:(id)a1 tokenID:(struct TITokenID { unsigned int x0; unsigned int x1; })a2 contextTokens:(id)a3;
- (void)deleteFromInputWithContext:(id)a0;
- (id)dictionaryInputMode;
- (id)handleAcceptedCandidate:(id)a0 keyboardState:(id)a1;
- (BOOL)hasInputToTransliterate;
- (void)incrementLanguageModelCount:(id)a0 latinInputString:(id)a1 tokenID:(struct TITokenID { unsigned int x0; unsigned int x1; })a2 contextTokens:(id)a3 saveToDifferentialPrivacy:(int)a4;
- (void *)initImplementation;
- (BOOL)isTransliterationManager;
- (Class)keyEventMapClass;
- (id)lexiconLocales;
- (void)loadFavoniusTypingModel;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel *x0; struct __shared_weak_count *x1; })loadNewLanguageModel;
- (id)mecabraCandidatePointerValueWithCandidate:(id)a0;
- (void)processCandidates:(id)a0 withGeometryScore:(float)a1 originalLatinString:(id)a2 context:(void *)a3 intoCandidateCollection:(void *)a4 intoStringCandidateMap:(id)a5;
- (id)scoreAndResortCandidates:(id)a0 string:(id)a1 geometryScore:(float)a2;
- (id)sortedCandidatesFromTypedStringCandidates:(id)a0 autocorrectedStringCandidates:(id)a1 autocorrectedLatinString:(id)a2;
- (void)syncToKeyboardState:(id)a0 from:(id)a1 afterContextChange:(BOOL)a2;

@end
