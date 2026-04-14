@class NSXPCListener, APSConnection, _KSTextReplacementManager, NSString, NSObject, _KSTRClient;
@protocol OS_dispatch_queue;

@interface _KSTextReplacementServer : NSObject <NSXPCListenerDelegate, APSConnectionDelegate, _KSTextReplacementSyncProtocol, _KSTextReplacementStoreProtocol, _KSTextReplacementCancellation> {
    NSObject<OS_dispatch_queue> *_workQueue;
    _KSTRClient *_daemonClient;
}

@property (retain, nonatomic) APSConnection *pushConnection;
@property (retain, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) _KSTextReplacementManager *textReplacementManager;
@property (copy, nonatomic) NSString *directoryPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isBlackListed:(unsigned int)a0;
+ (id)textReplacementServer;

- (void)connection:(id)a0 didReceiveToken:(id)a1 forTopic:(id)a2 identifier:(id)a3;
- (void)shutdown;
- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (id)textReplacementEntries;
- (void)start;
- (void)removeAllEntries;
- (void)cancelPendingUpdates;
- (void)addEntries:(id)a0 removeEntries:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)init;
- (void)queryTextReplacementsWithCallback:(id /* block */)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (BOOL)_cancelPendingUpdateForClient:(id)a0;
- (void)registerForPushNotifications;
- (void)cleanup;
- (void)requestSync:(unsigned long long)a0 withCompletionBlock:(id /* block */)a1;
- (BOOL)isSetupAssistantRunning;
- (void)addEntries:(id)a0 removeEntries:(id)a1 forClient:(id)a2 withCompletionHandler:(id /* block */)a3;
- (void)requestSyncWithCompletionBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)scheduleSyncTask;
- (void)dealloc;
- (id)initWithDatabaseDirectoryPath:(id)a0;
- (void)_performCleanup;
- (id)textReplacementEntriesForClient:(id)a0;
- (void)queryTextReplacementsWithPredicate:(id)a0 callback:(id /* block */)a1;
- (void)buddySetupDidFinish;

@end
