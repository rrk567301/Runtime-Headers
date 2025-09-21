@class NSObject, NSMutableDictionary, NSDate;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CWFBrokenBackhaulMonitor : NSObject {
    int _bbhNotifyToken;
    NSObject<OS_dispatch_queue> *_internalQueue;
    unsigned long long _initialIndicationTimestamp;
    NSMutableDictionary *_pendingMetricSubmissionPayload;
    NSObject<OS_dispatch_source> *_metricAutoSubmissionTimer;
}

@property long long brokenBackhaulState;
@property (readonly, copy) NSDate *brokenBackhaulStateUpdatedAt;
@property (retain) NSObject<OS_dispatch_queue> *targetQueue;
@property (copy) id /* block */ updatedBrokenBackhaulState;

- (void)reset;
- (void)invalidate;
- (void)activateWithCompletion:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)__confirmBrokenBackhaulUsingTimeout:(unsigned long long)a0 count:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)__fetchSymptomsBrokenBackhaulStateWithEventID:(unsigned long long)a0 completion:(id /* block */)a1;
- (long long)__mapSymptomsBrokenBackhaulState:(unsigned long long)a0;
- (void)__performProbeToRemoteEndpointUsingTimeout:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)__submitCoreAnalyticsEvent;
- (void)__updateBrokenBackhaulState:(long long)a0 timestamp:(id)a1 usingQuickProbeTimeout:(unsigned long long)a2;
- (void)__updatePendingCoreAnalyticsPayloadWithNewBrokenBackhaulState:(long long)a0 usingQuickProbeTimeout:(unsigned long long)a1;
- (void)confirmBrokenBackhaulUsingTimeout:(unsigned long long)a0 count:(unsigned long long)a1 preflightPingAddress:(id)a2 completion:(id /* block */)a3;

@end
