@class SCRMIGHelper;

@interface SCRArgumentParser : SCRCArgumentParser <ScreenReaderStartupServer, ScreenReaderRunningServer> {
    BOOL _hasReceivedMessageFromLaunchdStart;
    BOOL _startedByLaunchd;
    BOOL _isKeyboardHelpOnlyEnabled;
    BOOL _shouldSkipSplash;
    BOOL _isQuickStarted;
    BOOL _isAutomaticStartAfterLogin;
    BOOL _bailAsSoonAsPossible;
    BOOL _isQuickStartRunning;
    BOOL _shouldShortCircuitSpeechSynthesizer;
    BOOL _shadowMode;
    SCRMIGHelper *_migHelper;
}

+ (id)processIdentifier;
+ (id)versionString;

- (void)stop;
- (int)run;
- (int)quit;
- (void).cxx_destruct;
- (unsigned long long)_sessionID;
- (int)setCommandListWithIsAllowList:(int)a0 mmappedBuffer:(char *)a1 bufferLength:(unsigned int)a2 token:(struct { unsigned int x0[8]; })a3;
- (int)copyInfoWithInfoItem:(int)a0 outputBuffer:(char *)a1 maxLength:(unsigned int)a2 outputBufferLength:(unsigned int *)a3 token:(struct { unsigned int x0[8]; })a4;
- (int)getPerformedCommandWithInfoItem:(int)a0 outputBuffer:(void *)a1 maxLength:(unsigned int)a2 outputBufferLength:(unsigned int *)a3 token:(struct { unsigned int x0[8]; })a4;
- (int)handleForwardedEvent:(id)a0 token:(struct { unsigned int x0[8]; })a1;
- (int)notifyAndQuit;
- (int)onRemoteCapturedOutput:(id)a0 remoteId:(id)a1 token:(struct { unsigned int x0[8]; })a2;
- (int)onRemoteEventReply:(id)a0 remoteId:(id)a1 token:(struct { unsigned int x0[8]; })a2;
- (int)onRemoteHighlightRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 remoteId:(id)a1 token:(struct { unsigned int x0[8]; })a2;
- (int)onRemoteLeaveSharedScreenWithRemoteId:(id)a0 token:(struct { unsigned int x0[8]; })a1;
- (int)openBRF:(id)a0 token:(struct { unsigned int x0[8]; })a1;
- (int)sendCommandWithCommandChars:(unsigned short *)a0 commandCharCount:(unsigned int)a1 token:(struct { unsigned int x0[8]; })a2;
- (int)setRemoteControlFlag:(id)a0 value:(BOOL)a1 token:(struct { unsigned int x0[8]; })a2;
- (int)startCapturingOutputWithClientPort:(unsigned int)a0 token:(struct { unsigned int x0[8]; })a1;
- (int)startControllingRemoteVoiceOverWithRemoteId:(id)a0 remoteName:(id)a1 clientPort:(unsigned int)a2 token:(struct { unsigned int x0[8]; })a3;
- (int)startupSynchronousWithStartupOptions:(int)a0 targetAppPID:(int)a1 scrError:(int *)a2 token:(struct { unsigned int x0[8]; })a3;
- (int)startupWithStartupOptions:(int)a0 targetAppPID:(int)a1 token:(struct { unsigned int x0[8]; })a2;
- (int)stopCapturingOutputWithToken:(struct { unsigned int x0[8]; })a0;
- (int)stopControllingRemoteVoiceOverWithRemoteId:(id)a0 clientPort:(unsigned int)a1 token:(struct { unsigned int x0[8]; })a2;
- (id)initWithArgc:(int)a0 argv:(const char **)a1;
- (void)stopDueToSigTerm;
- (void)_setSessionID:(unsigned long long)a0;
- (id)_setQuickStart:(id)a0;
- (id)_setShadowMode:(id)a0;
- (id)_setPreferencesArchiveLocation:(id)a0;
- (id)_setSkipSplash:(id)a0;
- (void)_autoTerminateWhenPidDies:(int)a0;
- (BOOL)_checkAndRunSplash;
- (void)_handleCommand:(id)a0 synchronizationHandler:(id /* block */)a1;
- (void)_initializeStartupOptions:(int)a0 targetAppPID:(int)a1;
- (BOOL)_isRunningAsRoot;
- (unsigned long long)_securitySessionID;
- (id)_setAutomaticStartAfterLogin:(id)a0;
- (id)_setKeyboardHelp:(id)a0;
- (id)_setLogMask:(id)a0;
- (id)_setMachPortSuffix:(id)a0;
- (id)_setStartedByLaunchd:(id)a0;
- (id)_setTargetApplications:(id)a0;
- (id)_setTestTargetApplicationPIDs:(id)a0;
- (BOOL)_shouldStartVoiceOver;
- (void)_stopAndPlayMessage:(BOOL)a0;
- (void)_tearDownMachServicesWithReturnValue:(int)a0;
- (void)setCommandList:(id)a0 isAllowList:(BOOL)a1;
- (void)setHasReceivedMessageFromLaunchdStart:(BOOL)a0;
- (BOOL)startedByLaunchd;
- (BOOL)wasLastShutdownPlanned;

@end
