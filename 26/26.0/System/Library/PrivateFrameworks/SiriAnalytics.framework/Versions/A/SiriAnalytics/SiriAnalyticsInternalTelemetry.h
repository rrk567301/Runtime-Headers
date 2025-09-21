@interface SiriAnalyticsInternalTelemetry : NSObject {
    BOOL _isInternal;
}

- (void)trackEmittedEvents:(id)a0;
- (void)trackFBFError:(int)a0 forEventData:(id)a1;
- (void)trackRuntimeBootstrapCompleteWithBootstrapTimeInNs:(unsigned long long)a0;
- (id)initWithPreferences:(id)a0;
- (void)trackAnyEventEmitted:(id)a0;
- (void)_trackLogicalClock:(id)a0 isDerivativeClock:(BOOL)a1;
- (void)trackMessageStagedWithSuccess:(BOOL)a0;
- (void)trackRuntimeBootstrapWithKillSwitchEnabled:(BOOL)a0;
- (void)trackLogicalClock:(id)a0;
- (void)trackEventEmitted:(id)a0;
- (void)trackMessageStreamProcessed:(long long)a0 timeToFirstMessage:(long long)a1 messageCount:(unsigned long long)a2 processingReason:(id)a3 failureReason:(id)a4;

@end
