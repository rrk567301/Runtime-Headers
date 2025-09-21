@class NSXPCInterface, NSXPCConnection;

@interface GDXPCViewService : NSObject {
    NSXPCConnection *_connection;
    NSXPCInterface *_serverInterface;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)accessInfoForViewName:(id)a0 useCase:(id)a1 error:(id *)a2;
- (id)accessTokenForFeaturesWithIsSandboxed:(char)a0 useCase:(id)a1 error:(id *)a2;
- (id)accessTokenForViewName:(id)a0 isSandboxed:(char)a1 useCase:(id)a2 error:(id *)a3;
- (void)locked_establishConnection;
- (char)performUpdateForViewNames:(id)a0 includeDependencies:(char)a1 error:(id *)a2;
- (char)performUpdateForViewNames:(id)a0 useCase:(id)a1 includeDependencies:(char)a2 error:(id *)a3;
- (char)reportSQLiteErrorForViewName:(id)a0 sqliteErrorCode:(long long)a1 useCase:(id)a2 error:(id *)a3;
- (char)reportUnknownErrorForViewName:(id)a0 useCase:(id)a1 error:(id *)a2;

@end
