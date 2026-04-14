@interface SnippetUI.RFSearchResultFeedbackSubmitted : VRXTurnBasedInstrumentationEvent {
    void /* unknown type, empty encoding */ actionType;
    void /* unknown type, empty encoding */ documentId;
    void /* unknown type, empty encoding */ instrumentationClient;
}

- (void).cxx_destruct;
- (id)init;
- (void)emitWithTurnIdentifier:(id)a0;
- (void)emitWithTurnIdentifier:(id)a0 aceViewId:(id)a1;

@end
