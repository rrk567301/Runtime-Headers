@class NSXPCInterface, NSXPCConnection;

@interface GDXPCInternalBiomeService : NSObject {
    NSXPCConnection *_connection;
    NSXPCInterface *_serverInterface;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)viewRunUpdateWithViewQuery:(id)a0 forceRebuild:(char)a1 priorityOverride:(id)a2 error:(id *)a3;
- (void)locked_establishConnection;
- (id)viewClearAllDataWithViewQuery:(id)a0 error:(id *)a1;
- (char)viewDumpStateWithError:(id *)a0;
- (char)viewSetEnabledWithName:(id)a0 enabled:(char)a1 error:(id *)a2;
- (char)viewStopWithError:(id *)a0;
- (char)viewValidateWithError:(id *)a0;
- (id)viewValidateWithViewQuery:(id)a0 applyFixes:(char)a1 verbose:(long long)a2 error:(id *)a3;

@end
