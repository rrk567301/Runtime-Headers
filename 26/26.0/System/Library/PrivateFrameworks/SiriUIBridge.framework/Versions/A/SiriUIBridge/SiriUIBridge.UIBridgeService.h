@interface SiriUIBridge.UIBridgeService : NSObject <AFUIBridgeService, SUIBUIBridgeServiceProtocol, AFBridgeConnectionListenerDelegate> {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ uiBridgeListener;
    void /* unknown type, empty encoding */ serviceHelper;
    void /* unknown type, empty encoding */ messagePublisher;
    void /* unknown type, empty encoding */ uiSessionProcessor;
    void /* unknown type, empty encoding */ uiBridgeConnectionListener;
    void /* unknown type, empty encoding */ $__lazy_storage_$_timeoutExtension;
}

- (void)preheat;
- (void)connectionInvalidated;
- (id)init;
- (void)connectionInterrupted;
- (void).cxx_destruct;
- (void)siriDismissed;
- (void)stopAttendingWithReason:(unsigned long long)a0;
- (void)siriPrompted;
- (void)siriWillPrompt;
- (void)startAttending;
- (void)notifyTypingStartedWith:(id)a0;
- (void)startAttendingWithReason:(unsigned long long)a0 deviceId:(id)a1;
- (void)stopAttendingForReason:(unsigned long long)a0;

@end
