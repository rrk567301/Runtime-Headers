@class NSXPCConnection;

@interface TSXDaemonServiceClient : NSObject {
    BOOL _inited;
    BOOL _invalidated;
}

@property (readonly) NSXPCConnection *serverConnection;

+ (id)serverProtocol;
+ (id)serviceName;
+ (id)clientProtocol;
+ (id)sharedDaemonServiceClient;

- (id)exportedObject;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)propertyForRegistryEntryID:(unsigned long long)a0 key:(id)a1;
- (unsigned long long)addMSGClock:(unsigned int)a0 withNominalSyncDuration:(struct { unsigned long long x0; unsigned long long x1; })a1 error:(id *)a2;
- (unsigned long long)addMSGClockRef:(unsigned int)a0 error:(id *)a1;
- (BOOL)callMethodForDaemonClient:(unsigned int)a0 clientMethodSelector:(unsigned int)a1 scalarInputs:(const unsigned long long *)a2 scalarInputCount:(unsigned int)a3 structInput:(const void *)a4 structInputSize:(unsigned long long)a5 scalarOutputs:(unsigned long long *)a6 scalarOutputCount:(unsigned int *)a7 error:(id *)a8;
- (BOOL)closeDaemonClient:(unsigned int)a0 error:(id *)a1;
- (unsigned long long)getMSGClock:(unsigned int)a0 error:(id *)a1;
- (void)interruptedConnection;
- (void)invalidatedConnection;
- (BOOL)isMSGServiceAvailable;
- (unsigned int)openDaemonClientWithRegistryEntryID:(unsigned long long)a0 clientType:(unsigned int)a1 error:(id *)a2;
- (id)propertiesForRegistryEntryID:(unsigned long long)a0;
- (BOOL)removeMSGClock:(unsigned int)a0 error:(id *)a1;
- (unsigned long long)restoreMSGClockSession:(unsigned int)a0 withNominalSyncDuration:(struct { unsigned long long x0; unsigned long long x1; })a1 refCnt:(unsigned long long)a2 error:(id *)a3;
- (unsigned int)startMSGExternalSync:(const struct { unsigned int x0; unsigned int x1; struct { unsigned long long x0; unsigned long long x1; } x2; struct { unsigned long long x0; unsigned long long x1; } x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; char *x7; } *)a0;
- (unsigned int)stopMSGExternalSync:(unsigned int)a0;

@end
