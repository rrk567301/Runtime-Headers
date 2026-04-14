@class TIHandwritingStrokes, RecognizerProvider, CHRecognizer, NSArray, TIWordSearchHandwriting, NSMutableDictionary, NSLocale, NSString, CIMCandidateData, NSMutableArray;

@interface TIInputManagerHandwriting : TIKeyboardInputManager <TIKeyboardActivityObserving> {
    BOOL _showingCompletionCandidates;
    id /* block */ _contactObserver;
    id _userDictionaryObserver;
    id _dictionaryUpdateObserver;
}

@property (nonatomic) BOOL isInCompletionMode;
@property (nonatomic) BOOL shouldLearnAcceptedCandidate;
@property (retain, nonatomic) TIHandwritingStrokes *userDrawing;
@property (nonatomic) BOOL showingFacemarks;
@property (readonly, nonatomic) NSArray *facemarkCandidates;
@property (readonly, nonatomic) CIMCandidateData *candidateData;
@property (retain, nonatomic) NSArray *candidates;
@property (retain, nonatomic) NSMutableDictionary *candidateRefsDictionary;
@property (retain, nonatomic) NSMutableArray *committedCandidates;
@property (readonly, nonatomic) NSLocale *recognitionLanguage;
@property (readonly) CHRecognizer *recognizer;
@property (readonly, nonatomic) RecognizerProvider *recognizerProvider;
@property (retain, nonatomic) NSArray *proactiveTriggers;
@property (readonly, nonatomic) TIWordSearchHandwriting *wordSearch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)wordSearchClass;

- (void)dealloc;
- (void).cxx_destruct;
- (void)suspend;
- (BOOL)updateCandidates;
- (void)cancelRecognition;
- (void)clearInput;
- (unsigned long long)initialSelectedIndex;
- (id)defaultCandidate;
- (id)candidateResultSet;
- (BOOL)suppliesCompletions;
- (BOOL)usesAutoDeleteWord;
- (BOOL)usesCandidateSelection;
- (BOOL)suppressPlaceholderCandidate;
- (unsigned long long)autoquoteType;
- (id)searchStringForMarkedText;
- (id)addInputObject:(id)a0;
- (id)didAcceptCandidate:(id)a0;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1;
- (void)syncMarkedTextForKeyboardState:(id)a0 afterContextChange:(BOOL)a1;
- (void)deleteFromInputWithContext:(id)a0;
- (void)loadDictionaries;
- (void)keyboardActivityDidTransition:(id)a0;
- (int)mecabraLanguage;
- (void)clearObservers;
- (void)updateUserWordEntries;
- (void)updateAddressBook;
- (void)updateDictionaryPaths;
- (id)keyboardConfigurationLayoutTag;
- (BOOL)shouldCommitInputString;
- (void)addInput:(id)a0 withContext:(id)a1;
- (void)inputLocationChanged;
- (void *)initImplementation;
- (void)setLearnsCorrection:(BOOL)a0;
- (BOOL)shouldLookForCompletionCandidates;
- (BOOL)shouldEnableHalfWidthPunctuationForCurrentInputContext;
- (BOOL)updateCompletionCandidatesIfAppropriate;
- (void)mainThreadUpdateCandidates:(id)a0;
- (BOOL)shouldUpdateDictionaryPaths;
- (id)keyboardCandidateResultSetFromResults;
- (BOOL)isDummyCandidate:(id)a0;
- (id)markedTextForDefaultCandidate;
- (id)historyForRecognition;
- (void)clearCandidateRefsDictionary;
- (unsigned long long)predictionOptions:(BOOL)a0;
- (void)resetCompletionStates;
- (id)processCandidates:(id)a0;

@end
