@interface SiriMessageBus.UIBridgeServiceIF : NSObject <SUIBUIBridgeServiceProtocol, AFBridgeConnectionListenerDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ serviceDelegate;
}

- (void)connectionInterrupted;
- (void)preheat;
- (void)connectionInvalidated;
- (void).cxx_destruct;
- (id)init;
- (void)siriDismissed;
- (void)siriPrompted;
- (void)siriWillPrompt;
- (void)startAttending;
- (void)notifyTypingStartedWith:(id)a0;
- (void)startAttendingWithReason:(unsigned long long)a0 deviceId:(id)a1;
- (void)stopAttendingForReason:(unsigned long long)a0;

@end
