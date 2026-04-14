@interface SnippetUI.RFComponentShown : VRXTurnBasedInstrumentationEvent {
    void /* unknown type, empty encoding */ componentName;
    void /* unknown type, empty encoding */ componentType;
    void /* unknown type, empty encoding */ componentIndex;
    void /* unknown type, empty encoding */ instrumentationClient;
}

- (void).cxx_destruct;
- (id)init;
- (void)emitWithTurnIdentifier:(id)a0;
- (void)emitWithTurnIdentifier:(id)a0 aceViewId:(id)a1;

@end
