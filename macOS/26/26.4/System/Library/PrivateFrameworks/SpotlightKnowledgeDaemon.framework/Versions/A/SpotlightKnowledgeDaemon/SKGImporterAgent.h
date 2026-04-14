@interface SKGImporterAgent : CSXPCConnection <SDSignalHandlerDelegate>

+ (void)initialize;
+ (id)sharedAgent;

- (BOOL)handleCommand:(const char *)a0 info:(id)a1 connection:(id)a2;
- (void)_setup;
- (BOOL)addClientConnectionIfAllowedForConnection:(id)a0;
- (void)start;
- (void)didReceiveMemoryPressureNotification:(unsigned long long)a0;
- (void)didReceiveSignal:(unsigned long long)a0;
- (BOOL)handleProcessRecordMessage:(id)a0 connection:(id)a1;

@end
