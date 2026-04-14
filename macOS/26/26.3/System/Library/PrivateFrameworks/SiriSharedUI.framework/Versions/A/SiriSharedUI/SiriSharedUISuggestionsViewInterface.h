@class _TtC12SiriSharedUI44SiriSharedUIAssistantSuggestionsViewProvider;

@interface SiriSharedUISuggestionsViewInterface : NSObject {
    _TtC12SiriSharedUI44SiriSharedUIAssistantSuggestionsViewProvider *suggestionsViewProvider;
}

- (void).cxx_destruct;
- (void)setDialogPhase:(id)a0;
- (void)suggestionsWereShownForCallback;
- (void)autoCompleteSuggestionsWereShownForCallback;
- (void)fetchAutoCompletionSuggestionsViewsWithQuery:(id)a0 deviceLocked:(BOOL)a1 turnId:(id)a2 completion:(id /* block */)a3;
- (void)fetchContinuerSuggestionsViewsWithRequestId:(id)a0 currentMode:(id)a1 deviceLocked:(BOOL)a2 invocationSource:(long long)a3 completion:(id /* block */)a4;
- (void)fetchStarterSuggestionsViewsWithDeviceLocked:(BOOL)a0 isVoiceTrigger:(BOOL)a1 invocationSource:(long long)a2 isFirstInvocationSinceOSInstalled:(BOOL)a3 turnId:(id)a4 completion:(id /* block */)a5;
- (id)initWithStartersPressDown:(id /* block */)a0 startersPressUp:(id /* block */)a1 continuersPressDown:(id /* block */)a2 continuersPressUp:(id /* block */)a3;
- (void)setContextMenuHandler:(id /* block */)a0;
- (void)startNewTypingSession;
- (id)getInitialSuggestionViewWrappers;
- (id)initWithStartersPressDownHandler:(id /* block */)a0 startersPressUpHandler:(id /* block */)a1 continuersPressDownHandler:(id /* block */)a2 continuersPressUpHandler:(id /* block */)a3;

@end
