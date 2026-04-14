@class NSString, TITypingSession, TITypingSessionAligned;

@interface TITypingEffortAnalyzer : NSObject <TITypingSessionAnalyzing> {
    TITypingSession *_session;
    TITypingSessionAligned *_alignedSession;
    BOOL _emojiPlaneActive;
    BOOL _emojiSearchActive;
}

@property (readonly, nonatomic) BOOL hasEmojiInput;
@property (readonly, nonatomic) BOOL hasCursorMovement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEmojiSearchCandidateSelection:(id)a0;
- (BOOL)isFlickInput:(id)a0;
- (id)countOutput;
- (void)addKeyboardInputActionsForKeyboardInputs:(id)a0 inputMode:(id)a1 toActionSummary:(id)a2 andKeyboardInputTouches:(id)a3 emojiSearchMode:(BOOL)a4;
- (void)registerEventSpec;
- (void)addActionsForArrowKey:(id)a0 toActionSummary:(id)a1 emojiSearchMode:(BOOL)a2;
- (BOOL)isPopupVariantInput:(id)a0 inputMode:(id)a1;
- (void)addActionsForDocumentStateChange:(id)a0 toActionSummary:(id)a1 emojiSearchMode:(BOOL)a2;
- (BOOL)isTenKeyInputMode:(id)a0;
- (void)addActionsForPaste:(id)a0 toActionSummary:(id)a1 emojiSearchMode:(BOOL)a2;
- (void)addActionsForCursorEvent:(id)a0 lastAction:(id)a1 nextAction:(id)a2 toActionSummary:(id)a3 emojiSearchMode:(BOOL)a4;
- (void)addCountsForEmojiInputs:(id)a0 toOutputSummary:(id)a1;
- (int)countComposedCharactersInText:(id)a0;
- (void)addCountsForPropertyWithName:(id)a0 andEmojiSearchPropertyName:(id)a1 contributesToTotal:(BOOL)a2 toActionSummary:(id)a3 emojiSearchMode:(BOOL)a4;
- (void)addCountsForAlignedEntry:(id)a0 toOutputSummary:(id)a1;
- (void)dispatchEventWithActionSummary:(id)a0 outputSummary:(id)a1;
- (void)addPathWeightActionsForTouches:(id)a0 withLayout:(id)a1 forWord:(id)a2 toActionSummary:(id)a3 emojiSearchMode:(BOOL)a4;
- (id)keyStringWithCode:(long long)a0 fromLayout:(id)a1;
- (void)addSpecialKeyActionsForFirstTouch:(id)a0 andLastTouch:(id)a1 fromLayout:(id)a2 toActionSummary:(id)a3 emojiSearchMode:(BOOL)a4;
- (void)addActionsForCut:(id)a0 toActionSummary:(id)a1 emojiSearchMode:(BOOL)a2;
- (BOOL)hasEmojiInKeyboardInputs:(id)a0;
- (void).cxx_destruct;
- (BOOL)analyzeSession:(id)a0 alignedSession:(id)a1 withConfidence:(unsigned long long)a2;
- (void)addCountsForWord:(id)a0 toOutputSummary:(id)a1;
- (void)addTouchRelatedActionsForTouches:(id)a0 layouts:(id)a1 acceptedCandidate:(id)a2 toActionSummary:(id)a3 keyboardInputTouches:(id)a4 pathTouches:(id)a5 emojiSearchMode:(BOOL)a6;
- (void)addActionsForDeleteWord:(id)a0 toActionSummary:(id)a1 emojiSearchMode:(BOOL)a2;
- (void)addPathAndCandidateBarActionsForWordEntry:(id)a0 toActionSummary:(id)a1 andPathTouches:(id)a2 emojiSearchMode:(BOOL)a3;
- (id)countActions;
- (unsigned long long)evaluateConfidenceInSession:(id)a0 alignedSession:(id)a1;
- (id)init;
- (void)addActionsForWordEntry:(id)a0 toActionSummary:(id)a1 emojiSearchMode:(BOOL)a2;

@end
