@class NSLock, NSXPCConnection;

@interface DKHelperDaemonController : NSObject

@property (retain) NSXPCConnection *serviceConnection;
@property (retain, nonatomic) NSLock *serviceConnectionLock;

+ (id)sharedInstance;

- (void)dealloc;
- (id)proxy;
- (void)reboot;
- (id)init;
- (id)_serviceConnection;
- (void).cxx_destruct;
- (id)synchronousProxy;
- (BOOL)cancelSoftwareUpdates;
- (BOOL)cleanUpBootStateWithError:(id *)a0;
- (BOOL)doKeybagStashWithOptions:(id)a0 acmContextData:(id)a1;
- (BOOL)muteBootChime;
- (BOOL)removeApplePayWithUsername:(id)a0 password:(id)a1;
- (BOOL)rolloverTelemetry;
- (void)rolloverTelemetryWithCompletion:(id /* block */)a0;
- (BOOL)setLanguageCodeAndKeyboardLayoutInNVRAM;
- (BOOL)updateLocalPoliciesWithExternalizedData:(id)a0;
- (BOOL)writeLanguageChooserSkipMouseDetectionNVRAMWithError:(id *)a0;
- (BOOL)writeTemplateMigrationBootPlistWithObliterationOptions:(id)a0 isManaged:(BOOL)a1;

@end
