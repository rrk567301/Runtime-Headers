@interface SRSensorWriterWrapper : NSObject <TISensorWriterWrapper>

- (BOOL)isReady;
- (void)write:(id)a0 withTimeStamp:(id)a1;
- (void)writeSessionSamples:(id)a0;

@end
