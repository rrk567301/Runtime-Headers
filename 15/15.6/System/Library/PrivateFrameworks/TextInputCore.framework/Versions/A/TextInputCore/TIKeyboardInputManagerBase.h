@class NSString, TIInputMode;
@protocol TIKeyboardInputManagerLogging, TITypologyPreferences;

@interface TIKeyboardInputManagerBase : NSObject

@property (readonly, nonatomic) TIInputMode *inputMode;
@property (readonly, nonatomic) NSString *currentInputModeIdentifier;
@property (readonly, nonatomic) char hasHandledInput;
@property (retain, nonatomic) id<TITypologyPreferences> typologyPreferences;
@property (retain, nonatomic) id<TIKeyboardInputManagerLogging> inputManagerLogger;

- (id)init;
- (void).cxx_destruct;
- (void)resume;
- (void)suspend;
- (void)syncToKeyboardState:(id)a0;
- (void)acceptingCandidateWithTrigger:(id)a0;
- (void)candidateRejected:(id)a0;
- (void)changingContextWithTrigger:(id)a0;
- (id)generateInlineCompletions:(id)a0 withPrefix:(id)a1;
- (id)keyboardConfiguration;
- (void)lastAcceptedCandidateCorrected;
- (void)logDiscoverabilityEvent:(int)a0 userInfo:(id)a1;
- (void)registerLearning:(id)a0 fullCandidate:(id)a1 keyboardState:(id)a2 mode:(id)a3;
- (void)registerLearningForCompletion:(id)a0 fullCompletion:(id)a1 context:(id)a2 prefix:(id)a3 mode:(id)a4;
- (void)setOriginalInput:(id)a0;
- (void)skipHitTestForTouchEvent:(id)a0 keyboardState:(id)a1;
- (char)syncToKeyboardState:(id)a0 completionHandler:(id /* block */)a1;
- (void)addSynthesizedTouchToInput:(id)a0 keyboardState:(id)a1;
- (void)adjustPhraseBoundaryInForwardDirection:(char)a0;
- (void)adjustPhraseBoundaryInForwardDirection:(char)a0 granularity:(int)a1;
- (void)candidatesOfferedFeedback:(id)a0 keyboardState:(id)a1;
- (void)clearHumanReadableTrace;
- (id)configurationPropertyList;
- (long long)deletionCountForString:(id)a0;
- (void)generateAutocorrectionsWithKeyboardState:(id)a0 candidateRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 candidateHandler:(id)a2;
- (void)generateCandidatesWithKeyboardState:(id)a0 candidateRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 candidateHandler:(id)a2;
- (id)generateRefinementsForCandidate:(id)a0;
- (id)generateReplacementsForString:(id)a0 keyLayout:(id)a1;
- (id)handleAcceptedCandidate:(id)a0 keyboardState:(id)a1;
- (id)handleKeyboardInput:(id)a0;
- (id)humanReadableTrace;
- (id)initWithInputMode:(id)a0 keyboardState:(id)a1;
- (char)isHardwareKeyboardAutocorrectionEnabled;
- (char)isHighMemoryManager;
- (long long)performHitTestForTouchEvent:(id)a0 keyboardState:(id)a1;
- (void)prepareForKeyboardActivity;
- (void)prepareForKeyboardInactivity:(int)a0;
- (id)resourceInputModes;
- (void)runMaintenanceTask;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })smartSelectionRangeForTextInDocument:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 language:(id)a2 tokenizedRanges:(id)a3 options:(unsigned long long)a4;
- (void)storeLanguageModelDynamicDataIncludingCache;
- (void)textAccepted:(id)a0 fromPredictiveInputBar:(char)a1 withInput:(id)a2;

@end
