@class NSString, NSXPCConnection;

@interface SDBetaEnrollmentHelperDaemon : NSObject <NSXPCListenerDelegate, SDBetaEnrollmentHelperDaemonInterface>

@property (retain) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)start;
- (void)addFBAHelpMenu:(id /* block */)a0;
- (void)addFBASymlink:(id /* block */)a0;
- (void)fetchBetaEnrollmentTokens:(id /* block */)a0;
- (void)isPreReleaseInstallationAllowed:(id /* block */)a0;
- (void)loadMDMConfigurationWithCompletion:(id /* block */)a0;
- (void)removeBetaEnrollmentData:(id /* block */)a0;
- (void)removeFBAHelpMenu:(id /* block */)a0;
- (void)removeSeedEnrollmentCookie:(id /* block */)a0;
- (void)saveMDMConfiguration:(id)a0 withCompletion:(id /* block */)a1;
- (void)setupAssistant_enrollInProgramWithBetaEnrollmentToken:(id)a0 completion:(id /* block */)a1;

@end
