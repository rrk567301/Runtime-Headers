@protocol NFSecureElementReaderSessionDelegate;

@interface NFSecureElementReaderSession : NFSession

@property (weak) id<NFSecureElementReaderSessionDelegate> delegate;

- (void).cxx_destruct;
- (BOOL)stop:(id *)a0;
- (BOOL)start:(id *)a0;
- (BOOL)connectTag:(id)a0 error:(id *)a1;
- (void)didEndUnexpectedly;
- (id)selectApplets:(id)a0;
- (BOOL)selectApplets:(id)a0 error:(id *)a1;
- (id)startSecureElementReader;
- (id)stopSecureElementReader;
- (id)transceive:(id)a0 error:(id *)a1;
- (BOOL)startVASPolling:(id)a0 error:(id *)a1;
- (BOOL)stopVASPolling:(id *)a0;
- (id)performVAS:(id)a0 error:(id *)a1;
- (BOOL)disconnectTag:(id *)a0;
- (void)didStartSecureElementReader:(id)a0;
- (void)didEndSecureElementReader:(id)a0;
- (void)receivedSecureElementReaderData:(id)a0 forApplet:(id)a1;
- (void)didReceiveThermalIndication:(BOOL)a0;
- (void)didDetectTags:(id)a0;

@end
