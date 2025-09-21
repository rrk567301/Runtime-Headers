@class TIWordSearch, NSString, TIKeyboardCandidate, NSSet, TIWordSearchCandidateResultSet;

@interface TIKeyboardInputManager_zh_Candidates : TIKeyboardInputManagerChinesePhonetic

@property (copy, nonatomic) NSString *inputString;
@property (copy, nonatomic) TIKeyboardCandidate *defaultCandidate;
@property (readonly, nonatomic) TIWordSearch *kbws;
@property (copy, nonatomic) NSString *autoCommitString;
@property (retain, nonatomic) TIWordSearchCandidateResultSet *wholePhraseCandidateResultSet;
@property (retain, nonatomic) TIWordSearchCandidateResultSet *lastCharacterCandidateResultSet;
@property (nonatomic) char skipLastCharacterCandidates;
@property (copy, nonatomic) NSSet *autoSelectCandidates;
@property (retain, nonatomic) NSString *syntheticCandidate;

- (void).cxx_destruct;
- (char)delayedCandidateList;
- (id)keyboardConfiguration;
- (char)supportsNumberKeySelection;
- (char)usesLiveConversion;
- (id)candidateResultSetFromCandidates:(id)a0;
- (id)handleAcceptedCandidate:(id)a0 keyboardState:(id)a1;
- (id)handleKeyboardInput:(id)a0;
- (void *)mecabraCandidateRefFromCandidate:(id)a0;
- (char)shouldClearInputOnMarkedTextOutOfSync;
- (char)supportsCandidateGeneration;
- (char)hasIdeographicCandidates;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1 wordSearch:(id)a2;
- (void)_notifyLastCharacterCandidate:(id)a0 forOperation:(id)a1;
- (void)_notifyUpdateCandidates;
- (void)_notifyWholePhraseCandidate:(id)a0 forOperation:(id)a1;
- (id)candidateResultSetFromCandidateResultSet:(id)a0 lastCharacterCandidateResultSet:(id)a1;
- (id)inputStringForLastCharacter:(id)a0;
- (char)makeCandidatesWithInputString:(id)a0 autoCommitString:(id)a1 predictionEnabled:(char)a2 reanalysisMode:(char)a3 geometoryModelData:(id)a4;
- (void)performWordSearch:(id)a0 action:(SEL)a1 waitUntilFinished:(char)a2;
- (id)punctuationCandiadtesFor:(id)a0 withAutoCommit:(id)a1;

@end
