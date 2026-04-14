@interface SnippetUI.RFVisualResponseShown : VRXTurnBasedInstrumentationEvent {
    void /* unknown type, empty encoding */ instrumentationPayload;
    void /* unknown type, empty encoding */ patternId;
    void /* unknown type, empty encoding */ responseViewId;
    void /* unknown type, empty encoding */ instrumentationClient;
    void /* unknown type, empty encoding */ preferences;
    void /* unknown type, empty encoding */ remoteAssetManager;
}

- (void).cxx_destruct;
- (id)init;
- (void)emitWithTurnIdentifier:(id)a0;
- (void)emitWithTurnIdentifier:(id)a0 aceViewId:(id)a1;
- (id)initWithCardData:(id)a0 responseViewId:(id)a1;

@end
