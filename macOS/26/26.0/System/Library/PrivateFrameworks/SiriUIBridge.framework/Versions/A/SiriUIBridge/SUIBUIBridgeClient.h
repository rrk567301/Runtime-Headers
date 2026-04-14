@interface SUIBUIBridgeClient : NSObject <SUIBUIBridgeServiceProtocol> {
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ delegateWrapper;
}

- (id)initWithDelegate:(id)a0 delegateQueue:(id)a1;
- (void)preheat;
- (void)dealloc;
- (id)init;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)siriDismissed;
- (void)siriPrompted;
- (void)siriWillPrompt;
- (void)startAttending;
- (void)notifyTypingStartedWith:(id)a0;
- (void)startAttendingWithReason:(unsigned long long)a0 deviceId:(id)a1;
- (void)stopAttendingForReason:(unsigned long long)a0;

@end
