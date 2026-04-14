@interface SiriMessageBus.RequestDispatcher : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ isMUXEnabled;
    void /* unknown type, empty encoding */ afPreferences;
    void /* unknown type, empty encoding */ rdmbQueue;
    void /* unknown type, empty encoding */ broker;
    void /* unknown type, empty encoding */ messagePublisher;
    void /* unknown type, empty encoding */ sessionsManager;
    void /* unknown type, empty encoding */ aceCommandDispatcher;
    void /* unknown type, empty encoding */ serviceHelper;
    void /* unknown type, empty encoding */ instrumentationUtil;
    void /* unknown type, empty encoding */ assetLogger;
    void /* unknown type, empty encoding */ serverFallbackDisablingUtils;
    void /* unknown type, empty encoding */ featureChecker;
    void /* unknown type, empty encoding */ activeUserSessionObserver;
    void /* unknown type, empty encoding */ sessionContext;
}

- (void)startSpeechRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2 location:(id)a3 asrOnServer:(BOOL)a4 requestContextData:(id)a5;

@end
