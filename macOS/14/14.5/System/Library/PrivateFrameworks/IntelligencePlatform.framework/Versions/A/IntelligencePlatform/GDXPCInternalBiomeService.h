@class NSXPCInterface, NSXPCConnection;

@interface GDXPCInternalBiomeService : NSObject {
    NSXPCConnection *_connection;
    NSXPCInterface *_serverInterface;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)locked_establishConnection;
- (BOOL)viewClearAllDataWithViewQuery:(id)a0 error:(id *)a1;
- (BOOL)viewDumpStateWithError:(id *)a0;
- (BOOL)viewRunUpdateWithViewQuery:(id)a0 forceRebuild:(BOOL)a1 error:(id *)a2;
- (BOOL)viewSetEnabledWithName:(id)a0 enabled:(BOOL)a1 error:(id *)a2;
- (BOOL)viewValidateWithError:(id *)a0;

@end
