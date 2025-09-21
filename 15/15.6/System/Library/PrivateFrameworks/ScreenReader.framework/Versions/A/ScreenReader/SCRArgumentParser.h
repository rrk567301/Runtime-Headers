@class SCRMIGHelper;

@interface SCRArgumentParser : SCRCArgumentParser {
    char _hasReceivedMessageFromLaunchdStart;
    char _startedByLaunchd;
    char _isKeyboardHelpOnlyEnabled;
    char _shouldSkipSplash;
    char _isQuickStarted;
    char _isAutomaticStartAfterLogin;
    char _bailAsSoonAsPossible;
    char _isQuickStartRunning;
    char _shouldShortCircuitSpeechSynthesizer;
    SCRMIGHelper *_migHelper;
}

+ (id)processIdentifier;
+ (id)versionString;

- (int)run;
- (void).cxx_destruct;
- (void)stop;
- (unsigned long long)_sessionID;
- (id)initWithArgc:(int)a0 argv:(const char **)a1;
- (void)stopDueToSigTerm;
- (void)_setSessionID:(unsigned long long)a0;
- (id)_setQuickStart:(id)a0;
- (id)_setSkipSplash:(id)a0;
- (char)_checkAndRunSplash;
- (void)_handleCommand:(id)a0 synchronizationHandler:(id /* block */)a1;
- (void)_initializeStartupOptions:(int)a0;
- (char)_isRunningAsRoot;
- (unsigned long long)_securitySessionID;
- (id)_setAutomaticStartAfterLogin:(id)a0;
- (id)_setKeyboardHelp:(id)a0;
- (id)_setLogMask:(id)a0;
- (id)_setStartedByLaunchd:(id)a0;
- (id)_setTargetApplications:(id)a0;
- (id)_setTestTargetApplicationPIDs:(id)a0;
- (char)_shouldStartVoiceOver;
- (void)_stopAndPlayMessage:(char)a0;
- (void)_tearDownMachServicesWithReturnValue:(int)a0;
- (void)setCommandList:(id)a0 isAllowList:(char)a1;
- (void)setHasReceivedMessageFromLaunchdStart:(char)a0;
- (char)startedByLaunchd;
- (char)wasLastShutdownPlanned;

@end
