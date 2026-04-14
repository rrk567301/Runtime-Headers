@interface SRSensorWriterWrapper : NSObject <TISensorWriterWrapper>

- (BOOL)isReady;
- (void)write:(id)a0;
- (void)writeSessionSamples:(id)a0;

@end
