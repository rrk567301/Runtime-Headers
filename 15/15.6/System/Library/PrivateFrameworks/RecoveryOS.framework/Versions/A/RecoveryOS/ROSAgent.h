@class NSLock, NSXPCConnection;

@interface ROSAgent : NSObject

@property (retain, nonatomic) NSLock *connectionLock;
@property (retain, nonatomic) NSXPCConnection *agentConnection;
@property (readonly, nonatomic) char userAuthenticatedInRecovery;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)_serviceConnection;
- (char)bootstrapServiceWithDictionary:(id)a0 outError:(id *)a1;
- (char)installMenuExtrasWithError:(id *)a0;
- (void)launchExecutableAtPath:(id)a0 withArguments:(id)a1 waitUntilExit:(char)a2 synchronouslyWait:(char)a3 withCompletion:(id /* block */)a4;
- (char)launchLanguageChooser:(id *)a0;
- (char)runAquaSpecificTasks:(id *)a0;
- (char)setUserAuthenticatedInRecovery:(char)a0 error:(id *)a1;
- (char)shutdownRecoveryOSWithReason:(id)a0 rebootInstead:(char)a1 dueToFatalError:(char)a2 withError:(id *)a3;
- (char)trmAutoApproveDevices:(id *)a0;
- (char)trmEnableNotifications:(id *)a0;

@end
