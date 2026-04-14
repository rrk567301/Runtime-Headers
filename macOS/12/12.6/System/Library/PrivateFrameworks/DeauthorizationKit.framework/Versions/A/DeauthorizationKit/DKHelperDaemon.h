@class NSXPCListener, LAContext, NSString;

@interface DKHelperDaemon : NSObject <NSXPCListenerDelegate, DKHelperDaemonServiceProtocol>

@property (retain) NSXPCListener *listener;
@property (retain) LAContext *localAuthenticationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)startListeningForConnections;
- (void)reboot;
- (id)currentAPFSPrebootUUID;
- (void)writeTemplateMigrationBootPlistWithObliterationOptions:(id)a0 isManaged:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)cleanUpBootStateWithCompletion:(id /* block */)a0;
- (void)doKeybagStashWithOptions:(id)a0 acmContextData:(id)a1 withCompletion:(id /* block */)a2;
- (void)updateLocalPoliciesWithExternalizedData:(id)a0 withCompletion:(id /* block */)a1;
- (void)removeApplePayWithUsername:(id)a0 password:(id)a1 completion:(id /* block */)a2;
- (id)_currentVolumeGroupUUID;

@end
