@class TIHandwritingStrokes, RecognizerProvider, CHRecognizer, NSArray, TIWordSearchHandwriting, NSMutableDictionary, NSLocale, NSString, CIMCandidateData, NSMutableArray;

@interface TIInputManagerHandwriting : TIKeyboardInputManager <TIKeyboardActivityObserving> {
    char _showingCompletionCandidates;
    id /* block */ _contactObserver;
    id _userDictionaryObserver;
    id _dictionaryUpdateObserver;
}

@property (nonatomic) char isInCompletionMode;
@property (nonatomic) char shouldLearnAcceptedCandidate;
@property (retain, nonatomic) TIHandwritingStrokes *userDrawing;
@property (nonatomic) char showingFacemarks;
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
- (char)updateCandidates;
- (void)cancelRecognition;
- (char)usesCandidateSelection;
- (int)recognitionMode;
- (void)clearInput;
- (unsigned long long)initialSelectedIndex;
- (unsigned long long)autoquoteType;
- (id)candidateResultSet;
- (id)defaultCandidate;
- (id)searchStringForMarkedText;
- (char)suppliesCompletions;
- (char)suppressPlaceholderCandidate;
- (char)usesAutoDeleteWord;
- (id)addInputObject:(id)a0;
- (id)didAcceptCandidate:(id)a0;
- (int)mecabraLanguage;
- (void)addInput:(id)a0 withContext:(id)a1;
- (void)clearObservers;
- (void)deleteFromInputWithContext:(id)a0;
- (void *)initImplementation;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1;
- (void)inputLocationChanged;
- (void)keyboardActivityDidTransition:(id)a0;
- (id)keyboardConfigurationLayoutTag;
- (void)loadDictionaries;
- (void)setLearnsCorrection:(char)a0;
- (char)shouldCommitInputString;
- (void)syncMarkedTextForKeyboardState:(id)a0 afterContextChange:(char)a1;
- (void)updateAddressBook;
- (void)updateDictionaryPaths;
- (void)updateUserWordEntries;
- (void)clearCandidateRefsDictionary;
- (id)historyForRecognition;
- (char)isDummyCandidate:(id)a0;
- (id)keyboardCandidateResultSetFromResults;
- (void)mainThreadUpdateCandidates:(id)a0;
- (id)markedTextForDefaultCandidate;
- (unsigned long long)predictionOptions:(char)a0;
- (id)processCandidates:(id)a0 stickers:(id)a1;
- (void)resetCompletionStates;
- (char)shouldEnableHalfWidthPunctuationForCurrentInputContext;
- (char)shouldLookForCompletionCandidates;
- (char)shouldUpdateDictionaryPaths;
- (char)updateCompletionCandidatesIfAppropriate;

@end
