@class NSLock, NSXPCConnection;

@interface DKHelperDaemonController : NSObject

@property (retain) NSXPCConnection *serviceConnection;
@property (retain, nonatomic) NSLock *serviceConnectionLock;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)proxy;
- (id)_serviceConnection;
- (void)reboot;
- (id)synchronousProxy;
- (BOOL)writeTemplateMigrationBootPlistWithObliterationOptions:(id)a0 isManaged:(BOOL)a1;
- (BOOL)cleanUpBootStateWithError:(id *)a0;
- (BOOL)doKeybagStashWithOptions:(id)a0 acmContextData:(id)a1;
- (BOOL)updateLocalPoliciesWithExternalizedData:(id)a0;
- (BOOL)removeApplePayWithUsername:(id)a0 password:(id)a1;

@end
