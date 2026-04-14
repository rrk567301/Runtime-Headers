@interface SKGImporterAgent : CSXPCConnection

+ (void)initialize;
+ (id)sharedAgent;

- (BOOL)addClientConnectionIfAllowedForConnection:(id)a0;
- (BOOL)start;
- (BOOL)handleCommand:(const char *)a0 info:(id)a1 connection:(id)a2;
- (void)_setup;
- (void)didReceiveMemoryPressureNotification:(unsigned long long)a0;
- (void)didReceiveSignal:(unsigned long long)a0;
- (BOOL)handleProcessRecordMessage:(id)a0 connection:(id)a1;

@end
