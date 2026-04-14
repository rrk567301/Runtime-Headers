@interface SiriAnalyticsInternalTelemetry : NSObject

- (void)trackEmittedEvents:(id)a0;
- (void)trackEventEmitted:(id)a0;
- (void)trackLogicalClock:(id)a0;
- (void)_trackLogicalClock:(id)a0 isDerivativeClock:(BOOL)a1;
- (void)trackMessageStreamProcessed:(long long)a0 timeToFirstMessage:(long long)a1 messageCount:(unsigned long long)a2 processingReason:(id)a3 failureReason:(id)a4;

@end
