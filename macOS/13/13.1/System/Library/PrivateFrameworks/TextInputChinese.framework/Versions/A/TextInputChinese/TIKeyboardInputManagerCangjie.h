@interface TIKeyboardInputManagerCangjie : TIKeyboardInputManagerShapeBased

@property (nonatomic) BOOL suchengEnabled;
@property (nonatomic) BOOL supportsEnglish;

+ (Class)wordSearchClass;

- (BOOL)supportsNumberKeySelection;
- (id)keyboardBehaviors;
- (id)sortingMethods;
- (id)nonstopPunctuationCharacters;
- (void)syncToKeyboardState:(id)a0 from:(id)a1 afterContextChange:(BOOL)a2;
- (void)syncToLayoutState:(id)a0;
- (void)addInput:(id)a0 withContext:(id)a1;
- (id)deleteFromInput:(unsigned long long *)a0;
- (void)updateMarkedText;
- (BOOL)updateCandidatesWithTIWordSearch:(id)a0 predictionEnabled:(BOOL)a1;
- (id)formattedSearchString;
- (void)notifyUpdateCandidates:(id)a0 forOperation:(id)a1;
- (void)syncWordSearch;
- (BOOL)firstCandidateIsEnglish;
- (BOOL)selectedCandidateIsEnglish;
- (unsigned long long)cangjieInputType:(id)a0 fromPopupVariant:(BOOL)a1;
- (id)cangjieSet;
- (id)cangjieAlphabetSet;
- (BOOL)isPunctuationInput;

@end
