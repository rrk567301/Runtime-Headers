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
- (void)runWithCompletion:(id /* block */)a0;
- (id)initWithHostWindow:(id)a0;
- (void)updateStatus;
- (id)taskDescription;
- (char)needsToRun;
- (char)timeMachineEnabled;
- (char)runWithError:(id *)a0;
- (char)_sendAsyncBackupdMessage:(id)a0;
- (void)backUpNowToDestination:(id)a0 forceConsistencyScan:(char)a1;
- (double)estimatedTimeOfCompletion;
- (id)initWithHostWindow:(id)a0 progressCompletion:(id /* block */)a1;
- (void)initiateBackup;
- (id)latestBackupDate;
- (id)latestBackupDateString;
- (void)registerForStateChangeNotifications;
- (id)timeMachineBackupStatus;
- (id)timeMachineDestinations;

@end
