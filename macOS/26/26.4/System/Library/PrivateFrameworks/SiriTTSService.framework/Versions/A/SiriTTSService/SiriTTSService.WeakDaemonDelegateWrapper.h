@interface SiriTTSService.WeakDaemonDelegateWrapper : _TtCs12_SwiftObject <SiriTTSService.DaemonDelegateProtocol> {
    void /* unknown type, empty encoding */ delegate;
}

- (void)pingWithReply:(id /* block */)a0;
- (void)didGenerateAudioWithRequestId:(unsigned long long)a0 audio:(id)a1;
- (void)didGenerateWordTimingsWithRequestId:(unsigned long long)a0 wordTimingInfo:(id)a1;
- (void)didReportInstrumentWithRequestId:(unsigned long long)a0 instrumentationMetrics:(id)a1;
- (void)didStartSpeakingWithRequestId:(unsigned long long)a0;
- (void)event:(unsigned long long)a0 eventData:(id)a1;
- (void)internalEvent:(unsigned long long)a0 internalEventData:(id)a1;

@end
