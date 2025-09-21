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
- (id)synchronousProxy;
- (void)reboot;
- (char)cancelSoftwareUpdates;
- (char)cleanUpBootStateWithError:(id *)a0;
- (char)doKeybagStashWithOptions:(id)a0 acmContextData:(id)a1;
- (char)muteBootChime;
- (char)removeApplePayWithUsername:(id)a0 password:(id)a1;
- (char)rolloverTelemetry;
- (void)rolloverTelemetryWithCompletion:(id /* block */)a0;
- (char)setLanguageCodeAndKeyboardLayoutInNVRAM;
- (char)updateLocalPoliciesWithExternalizedData:(id)a0;
- (char)writeLanguageChooserSkipMouseDetectionNVRAMWithError:(id *)a0;
- (char)writeTemplateMigrationBootPlistWithObliterationOptions:(id)a0 isManaged:(char)a1;

@end
