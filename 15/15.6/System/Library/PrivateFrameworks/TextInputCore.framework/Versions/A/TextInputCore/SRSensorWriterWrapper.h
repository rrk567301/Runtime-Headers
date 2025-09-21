@interface SRSensorWriterWrapper : NSObject <TISensorWriterWrapper>

- (char)isReady;
- (void)write:(id)a0 withTimeStamp:(id)a1;
- (void)writeSessionStats:(id)a0;

@end
