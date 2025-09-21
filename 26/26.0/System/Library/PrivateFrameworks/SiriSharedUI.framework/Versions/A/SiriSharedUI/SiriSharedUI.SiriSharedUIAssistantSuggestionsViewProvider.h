@interface SiriSharedUI.SiriSharedUIAssistantSuggestionsViewProvider : NSObject {
    void /* unknown type, empty encoding */ suggestionViews;
    void /* unknown type, empty encoding */ suggestionsList;
    void /* unknown type, empty encoding */ continuerSuggestionViews;
    void /* unknown type, empty encoding */ continuerSuggestionsList;
    void /* unknown type, empty encoding */ requestId;
    void /* unknown type, empty encoding */ suggestionsProvider;
    void /* unknown type, empty encoding */ suggestionsDataForExposureCallback;
    void /* unknown type, empty encoding */ shouldSuppressSuggestions;
    void /* unknown type, empty encoding */ conversationStarterHesitationCountdown;
    void /* unknown type, empty encoding */ speechTwoShotPromptDetected;
    void /* unknown type, empty encoding */ dismissSuggestionsRendering;
    void /* unknown type, empty encoding */ isVoiceTriggerActivation;
    void /* unknown type, empty encoding */ starterAndTypingSuggestionsPressDownHandler;
    void /* unknown type, empty encoding */ starterAndTypingSuggestionsPressUpHandler;
    void /* unknown type, empty encoding */ continuerSuggestionsPressDownHandler;
    void /* unknown type, empty encoding */ continuerSuggestionsPressUpHandler;
    void /* unknown type, empty encoding */ starterAndTypingPressDownHandler;
    void /* unknown type, empty encoding */ starterAndTypingPressUpHandler;
    void /* unknown type, empty encoding */ continuerPressDownHandler;
    void /* unknown type, empty encoding */ continuerPressUpHandler;
    void /* unknown type, empty encoding */ contextMenuHandler;
    void /* unknown type, empty encoding */ conversationStarterHesitationCountdownCompleted;
}

- (id)init;
- (void).cxx_destruct;
- (void)setDialogPhase:(id)a0;
- (void)suggestionsWereShownForCallback;
- (void)autoCompleteSuggestionsWereShownForCallback;
- (void)fetchStarterSuggestionsViewsWithDeviceLocked:(BOOL)a0 isVoiceTrigger:(BOOL)a1 invocationSource:(long long)a2 isFirstInvocationSinceOSInstalled:(BOOL)a3 turnId:(id)a4 completion:(id /* block */)a5;
- (id)initWithStartersPressDown:(id /* block */)a0 startersPressUp:(id /* block */)a1 continuersPressDown:(id /* block */)a2 continuersPressUp:(id /* block */)a3;
- (void)startNewTypingSession;
- (void)fetchAutoCompletionViewsWithQuery:(id)a0 deviceLocked:(BOOL)a1 turnId:(id)a2 completion:(id /* block */)a3;
- (void)fetchContinuerViewsWithRequestId:(id)a0 currentMode:(id)a1 deviceLocked:(BOOL)a2 invocationSource:(long long)a3 completion:(id /* block */)a4;
- (void)fetchConversationStarterViewsWithDeviceLocked:(BOOL)a0 isVoiceTrigger:(BOOL)a1 invocationSource:(long long)a2 isFirstInvocationSinceOSInstalled:(BOOL)a3 completion:(id /* block */)a4;
- (id)getInitialSuggestionViewWrappers;
- (id)initWithPressDownHandler:(id /* block */)a0 pressUpHandler:(id /* block */)a1;
- (id)initWithStartersPressDownHandler:(id /* block */)a0 startersPressUpHandler:(id /* block */)a1 continuersPressDownHandler:(id /* block */)a2 continuersPressUpHandler:(id /* block */)a3;
- (id)initWithTapHandler:(id /* block */)a0;
- (void)resetContinuerSuggestions;
- (void)resetSuggestions;
- (void)setContextMenuHandlerWithContextMenuHandler:(id /* block */)a0;

@end
