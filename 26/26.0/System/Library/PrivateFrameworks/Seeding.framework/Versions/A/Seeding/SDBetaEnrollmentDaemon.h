@class NSString, NSXPCConnection;

@interface SDBetaEnrollmentDaemon : NSObject <NSXPCListenerDelegate, SDBetaEnrollmentDaemonInterface>

@property (retain) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)start;
- (void).cxx_destruct;
- (void)addFBAHelpMenu:(id /* block */)a0;
- (void)addFBASymlink:(id /* block */)a0;
- (void)configureWithOfferProgramTokens:(id)a0 requireProgramToken:(id)a1 enrollmentPolicy:(long long)a2 language:(id)a3 completion:(id /* block */)a4;
- (void)enrolledBetaProgramWithCompletion:(id /* block */)a0;
- (void)fetchBetaEnrollmentTokens:(id /* block */)a0;
- (void)isPreReleaseInstallationAllowed:(id /* block */)a0;
- (void)loadMDMConfigurationWithCompletion:(id /* block */)a0;
- (void)removeBetaEnrollmentData:(id /* block */)a0;
- (void)removeFBAHelpMenu:(id /* block */)a0;
- (void)removeSeedEnrollmentCookie:(id /* block */)a0;
- (void)saveMDMConfiguration:(id)a0 withCompletion:(id /* block */)a1;
- (void)setupAssistant_enrollInProgramWithBetaEnrollmentToken:(id)a0 language:(id)a1 completion:(id /* block */)a2;

@end
