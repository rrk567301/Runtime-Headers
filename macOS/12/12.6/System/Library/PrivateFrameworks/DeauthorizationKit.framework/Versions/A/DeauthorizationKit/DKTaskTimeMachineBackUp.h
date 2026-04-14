@class NSWindow, DKTimeMachineBackupWindowController;

@interface DKTaskTimeMachineBackUp : DKTask

@property (retain) NSWindow *hostWindow;
@property (retain) DKTimeMachineBackupWindowController *timeMachineBackupWindowController;
@property struct OpaqueCSBackupServerProxyRef { } *statusProxy;
@property struct __CFMachPort { } *notifyPort;
@property struct __CFRunLoopSource { } *notifySource;
@property int notifyToken;
@property (copy) id /* block */ progressCompletion;

- (void).cxx_destruct;
- (id)identifier;
- (void)updateStatus;
- (id)initWithHostWindow:(id)a0;
- (id)taskDescription;
- (void)runWithCompletion:(id /* block */)a0;
- (BOOL)timeMachineEnabled;
- (BOOL)runWithError:(id *)a0;
- (BOOL)needsToRun;
- (id)latestBackupDate;
- (id)timeMachineDestinations;
- (void)backUpNowToDestination:(id)a0 forceConsistencyScan:(BOOL)a1;
- (BOOL)_sendAsyncBackupdMessage:(id)a0;
- (void)registerForStateChangeNotifications;
- (void)initiateBackup;
- (id)timeMachineBackupStatus;
- (double)estimatedTimeOfCompletion;
- (id)initWithHostWindow:(id)a0 progressCompletion:(id /* block */)a1;
- (id)latestBackupDateString;

@end
