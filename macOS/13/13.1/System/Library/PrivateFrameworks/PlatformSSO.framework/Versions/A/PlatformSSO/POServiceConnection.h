@class NSString, NSXPCConnection;

@interface POServiceConnection : NSObject <POServiceProtocol>

@property (retain) NSXPCConnection *xpcConnection;
@property unsigned int uid;
@property BOOL forLogin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)xpcQueue;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)_connectToService;
- (id)initWithUid:(unsigned int)a0 forLogin:(BOOL)a1;
- (void)getLoginTypeForUser:(id)a0 completion:(id /* block */)a1;
- (void)performPasswordLogin:(id)a0 passwordContext:(id)a1 updateLocalAccountPassword:(BOOL)a2 completion:(id /* block */)a3;
- (void)performLocalPasswordLogin:(id)a0 passwordContext:(id)a1 completion:(id /* block */)a2;
- (void)performSEPKeyLogin:(id)a0 completion:(id /* block */)a1;
- (void)createUserAccount:(id)a0 passwordContext:(id)a1 completion:(id /* block */)a2;
- (void)saveCredentialForUserName:(id)a0 passwordContext:(id)a1 completion:(id /* block */)a2;

@end
