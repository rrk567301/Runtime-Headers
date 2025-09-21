@class EWSExchangeServiceBinding, MFEWSAccount, NSObject;
@protocol OS_os_log;

@interface MFEWSConnection : MCConnection

@property (class, readonly, nonatomic) NSObject<OS_os_log> *log;

@property (retain) EWSExchangeServiceBinding *binding;
@property (weak) MFEWSAccount *account;

- (void)dealloc;
- (void).cxx_destruct;
- (void)disconnect;
- (void)quit;
- (char)authenticate;
- (void)disconnectWithError:(id)a0;
- (char)supportsSchema:(id)a0;
- (char)connectDiscoveringBestSettings:(char)a0;
- (id)_connectAndAuthenticateDiscoveringBestSettings:(char)a0;
- (id)_fetchRootFolderId:(id *)a0;
- (void)_handleServerBusyError:(id)a0;
- (void)_setupConnectionErrorForMonitorWithPort:(long long)a0 usingSSL:(char)a1 serverTrust:(struct __SecTrust { } *)a2;
- (char)connectAndAuthenticate;
- (char)isValidAllowNetworking:(char)a0;
- (id)sendMessage:(id)a0 forRequest:(id)a1;
- (id)sendMessage:(id)a0 schemaVersion:(id)a1 error:(id *)a2;

@end
