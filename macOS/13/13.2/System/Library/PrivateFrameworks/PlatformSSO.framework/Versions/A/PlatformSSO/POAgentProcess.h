@class PODirectoryServices, POAuthenticationProcess, POAgentAuthenticationProcess, NSString, NSXPCConnection, POKeyWrap;

@interface POAgentProcess : NSObject <POServiceProtocol> {
    NSXPCConnection *_xpcConnection;
}

@property (retain) POAuthenticationProcess *authenticationProcess;
@property (retain) PODirectoryServices *directoryServices;
@property (retain) POAgentAuthenticationProcess *process;
@property (retain) POKeyWrap *keyWrap;
@property (copy) id /* block */ invalidationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithXPCConnection:(id)a0;
- (void)loadConfiguration;
- (void)connectionInvalidated;
- (void)getLoginTypeForUser:(id)a0 completion:(id /* block */)a1;
- (void)performPasswordLogin:(id)a0 passwordContext:(id)a1 updateLocalAccountPassword:(BOOL)a2 completion:(id /* block */)a3;
- (void)performLocalPasswordLogin:(id)a0 passwordContext:(id)a1 completion:(id /* block */)a2;
- (void)performSEPKeyLogin:(id)a0 completion:(id /* block */)a1;
- (void)createUserAccount:(id)a0 passwordContext:(id)a1 completion:(id /* block */)a2;
- (void)saveCredentialForUserName:(id)a0 passwordContext:(id)a1 completion:(id /* block */)a2;
- (id)initWithAuthenticationProcess:(id)a0;
- (void)saveConfiguration;

@end
