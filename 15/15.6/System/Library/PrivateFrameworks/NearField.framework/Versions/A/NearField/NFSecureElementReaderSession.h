@protocol NFSecureElementReaderSessionDelegate;

@interface NFSecureElementReaderSession : NFSession

@property (weak) id<NFSecureElementReaderSessionDelegate> delegate;

- (void).cxx_destruct;
- (char)start:(id *)a0;
- (char)stop:(id *)a0;
- (char)connectTag:(id)a0 error:(id *)a1;
- (char)stopVASPolling:(id *)a0;
- (void)didDetectTags:(id)a0;
- (void)didEndSecureElementReader:(id)a0;
- (void)didEndUnexpectedly;
- (void)didReceiveThermalIndication:(BOOL)a0;
- (void)didStartSecureElementReader:(id)a0;
- (char)disconnectTag:(id *)a0;
- (char)performGetVASDataWithRequestList:(id)a0 responseList:(id)a1 error:(id *)a2;
- (char)performSelectVAS:(id)a0 error:(id *)a1;
- (id)performVAS:(id)a0 error:(id *)a1;
- (void)receivedSecureElementReaderData:(id)a0 forApplet:(id)a1;
- (id)selectApplets:(id)a0;
- (char)selectApplets:(id)a0 error:(id *)a1;
- (id)startSecureElementReader;
- (char)startVASPolling:(id)a0 error:(id *)a1;
- (id)stopSecureElementReader;
- (id)transceive:(id)a0 error:(id *)a1;

@end
