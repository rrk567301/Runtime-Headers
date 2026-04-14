@class NSArray, NSMutableDictionary, NSMutableArray;

@interface TIKeyboardInputManagerTransliteration : TIKeyboardInputManagerTransliterationBase

@property (nonatomic) void *transliterator;
@property (nonatomic) BOOL prioritizeLatinCandidates;
@property (nonatomic) BOOL hasCandidates;
@property (retain, nonatomic) NSArray *currentCandidates;
@property (retain, nonatomic) NSMutableDictionary *candidateRefsDictionary;
@property (retain, nonatomic) NSMutableArray *committedCandidates;

- (void)dealloc;
- (void).cxx_destruct;
- (void)suspend;
- (id)languageIdentifier;
- (id)candidates;
- (id)defaultCandidate;
- (id)keyboardConfiguration;
- (BOOL)supportsNumberKeySelection;
- (BOOL)usesCandidateSelection;
- (id)keyboardBehaviors;
- (id)keyEventMap;
- (id)wordCharacters;
- (id)sortingMethods;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1;
- (id)handleAcceptedCandidate:(id)a0 keyboardState:(id)a1;
- (void)syncToKeyboardState:(id)a0 from:(id)a1 afterContextChange:(BOOL)a2;
- (void)deleteFromInputWithContext:(id)a0;
- (id)dictionaryInputMode;
- (void *)initImplementation;
- (id)titleForSortingMethod:(id)a0;
- (id)groupedCandidatesFromCandidates:(id)a0 usingSortingMethod:(id)a1;
- (Class)keyEventMapClass;
- (id)candidateContextByVerifyingAgainstDocumentState;
- (id)autocorrectionCandidates;
- (id)languageLatinIdentifier;
- (id)mecabraCandidatePointerValueWithCandidate:(id)a0;
- (id)candidatesWithTypedString:(id)a0 autocorrectedString:(id)a1;
- (id)candidatesForInputString:(id)a0;

@end
