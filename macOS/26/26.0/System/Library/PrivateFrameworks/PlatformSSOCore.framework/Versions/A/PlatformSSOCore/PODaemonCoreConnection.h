@class NSString, NSXPCConnection;

@interface PODaemonCoreConnection : NSObject <PODaemonCoreProtocol>

@property (retain) NSXPCConnection *xpcConnection;
@property (retain) NSString *volume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)xpcQueue;

- (void)dealloc;
- (id)initWithVolume:(id)a0;
- (BOOL)_connectToService;
- (void).cxx_destruct;
- (void)deviceConfigurationForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)insertTokenForUserName:(id)a0 completion:(id /* block */)a1;
- (void)loginConfigurationForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)retrievePendingSSOTokenForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)retrieveStashedDecryptionContextForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)retrieveStashedSSOTokenForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)saveCachedContextsToDiskWithCompletion:(id /* block */)a0;
- (void)savePendingSSOTokens:(id)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (void)saveStashedDecryptionContext:(id)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (void)saveStashedSSOTokens:(id)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (void)updateLoginStateForIdentifier:(id)a0 state:(id)a1 loginDate:(id)a2 loginType:(id)a3 completion:(id /* block */)a4;
- (void)useVolume:(id)a0 completion:(id /* block */)a1;
- (void)userConfigurationForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)userLoginStateForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)verifyTokenForUserName:(id)a0 passwordContext:(id)a1 completion:(id /* block */)a2;

@end
