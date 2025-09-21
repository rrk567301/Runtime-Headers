@interface SiriSharedUI.SiriSharedUISuggestionsViewProvider : NSObject {
    void /* unknown type, empty encoding */ suggestionsDataModel;
    void /* unknown type, empty encoding */ suggestionsView;
}

- (id)init;
- (void).cxx_destruct;
- (void)filterSuggestionsWithText:(id)a0;
- (void)hideConversationStarterSuggestionsIfNecessary;
- (void)makeConversationContinuerSuggestionsViewWithRequestId:(id)a0 currentMode:(id)a1 deviceLocked:(char)a2 keyboardShowing:(char)a3 suggestionTapHandler:(id /* block */)a4;
- (void)makeConversationStarterSuggestionsViewWithDeviceLocked:(char)a0 keyboardShowing:(char)a1 isVoiceTrigger:(char)a2 invocationSource:(long long)a3 suggestionTapHandler:(id /* block */)a4;
- (void)makeConversationStarterSuggestionsViewWithDeviceLocked:(char)a0 keyboardShowing:(char)a1 isVoiceTrigger:(char)a2 suggestionTapHandler:(id /* block */)a3;
- (void)makeConversationStarterSuggestionsViewWithDeviceLocked:(char)a0 keyboardShowing:(char)a1 suggestionTapHandler:(id /* block */)a2;
- (id)makeSuggestionsViewWithSuggestionsResizeHandler:(id /* block */)a0;
- (void)setShowSuggestions:(char)a0;
- (void)showConversationStarterSuggestionsForTwoShot;

@end
