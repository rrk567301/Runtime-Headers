@interface SUIBUIBridgeClient : NSObject <SUIBUIBridgeServiceProtocol> {
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ delegateWrapper;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)preheat;
- (void)siriDismissed;
- (void)siriPrompted;
- (void)siriWillPrompt;
- (void)startAttending;
- (void)stopAttendingForReason:(unsigned long long)a0;

@end
