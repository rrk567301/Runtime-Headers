@interface TIKeyboardInputManagerCangjie : TIKeyboardInputManagerShapeBased

@property (nonatomic) char suchengEnabled;
@property (nonatomic) char supportsEnglish;

+ (Class)wordSearchClass;

- (id)keyboardBehaviors;
- (char)supportsNumberKeySelection;
- (id)sortingMethods;
- (void)addInput:(id)a0 withContext:(id)a1;
- (id)deleteFromInput:(unsigned long long *)a0;
- (id)nonstopPunctuationCharacters;
- (void)syncToKeyboardState:(id)a0 from:(id)a1 afterContextChange:(char)a2;
- (void)syncToLayoutState:(id)a0;
- (void)updateMarkedText;
- (id)cangjieAlphabetSet;
- (unsigned long long)cangjieInputType:(id)a0 fromPopupVariant:(char)a1;
- (id)cangjieSet;
- (char)firstCandidateIsEnglish;
- (id)formattedSearchString;
- (char)isPunctuationInput;
- (void)notifyUpdateCandidates:(id)a0 forOperation:(id)a1;
- (char)selectedCandidateIsEnglish;
- (void)syncWordSearch;
- (char)updateCandidatesWithTIWordSearch:(id)a0 predictionEnabled:(char)a1;

@end
