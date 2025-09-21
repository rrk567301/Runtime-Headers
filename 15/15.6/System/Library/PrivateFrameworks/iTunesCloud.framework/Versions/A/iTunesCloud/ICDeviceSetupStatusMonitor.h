@class NSMutableArray, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface ICDeviceSetupStatusMonitor : NSObject <ICNanoPairedDeviceStatusObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_pendingBuddyCompleteBlocks;
    NSMutableArray *_pendingSetupCompleteBlocks;
    char _setupAssistantComplete;
    char _watchInitialSyncIsComplete;
    int _setupAssistantFinishedNotifyToken;
    int _setupAssistantLaunchedNotifyToken;
}

@property (class, readonly, nonatomic) ICDeviceSetupStatusMonitor *sharedMonitor;

@property (nonatomic, getter=isSetupAssistantComplete) char setupAssistantComplete;
@property (readonly, nonatomic, getter=isDeviceSetupComplete) char deviceSetupComplete;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_init;
- (void)_runAllPendingBlocksOfType:(long long)a0;
- (void)nanoPairedDeviceStatusMonitor:(id)a0 didChangeClientSyncState:(unsigned long long)a1;
- (void)performBlockAfterBuddySetup:(id /* block */)a0;
- (void)performBlockAfterDeviceSetup:(id /* block */)a0;

@end
