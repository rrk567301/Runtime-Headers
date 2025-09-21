@interface DESFedStatsRecorder : NSObject <DESFedStatsRecorderProtocol>

+ (void)initialize;

- (char)record:(id)a0 data:(id)a1 dataTypeContent:(id)a2 metadata:(id)a3 errorOut:(id *)a4;
- (char)record:(id)a0 data:(id)a1 encodingSchema:(id)a2 metadata:(id)a3 errorOut:(id *)a4;

@end
