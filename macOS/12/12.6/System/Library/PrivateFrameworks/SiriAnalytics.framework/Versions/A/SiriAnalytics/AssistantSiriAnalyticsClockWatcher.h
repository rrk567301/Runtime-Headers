@class NSString, SiriAnalyticsClientMessageStream, SiriAnalyticsSensitiveConditionsObservers, SiriAnalyticsInternalTelemetry;

@interface AssistantSiriAnalyticsClockWatcher : NSObject <SiriAnalyticsWhiteRoseDelegate> {
    SiriAnalyticsInternalTelemetry *_internalTelemetry;
    SiriAnalyticsSensitiveConditionsObservers *_sensitiveConditionsObservers;
    SiriAnalyticsClientMessageStream *_clientMessageStream;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)whiteRose:(id)a0 derivativeClockCreated:(id)a1 rootClock:(id)a2;
- (void)whiteRose:(id)a0 rootClockCreated:(id)a1 trailingRootClock:(id)a2;
- (void)whiteRose:(id)a0 willCreateRootClock:(id)a1 completion:(id /* block */)a2;
- (void)whiteRose:(id)a0 rootClockDestroyed:(id)a1;
- (id)initWithInternalTelemetry:(id)a0 sensitiveConditionsObservers:(id)a1 clientMessageStream:(id)a2;
- (void)_triggerDeviceFixedContextOnStreamUUID:(id)a0;
- (void)_triggerSiriAccountInformation;

@end
