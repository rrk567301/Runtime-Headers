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

+ (char)isBlackListed:(unsigned int)a0;
+ (id)textReplacementServer;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)cleanup;
- (char)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)start;
- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void)connection:(id)a0 didReceiveToken:(id)a1 forTopic:(id)a2 identifier:(id)a3;
- (void)shutdown;
- (void)removeAllEntries;
- (void)_performCleanup;
- (void)requestSyncWithCompletionBlock:(id /* block */)a0;
- (char)_cancelPendingUpdateForClient:(id)a0;
- (void)addEntries:(id)a0 removeEntries:(id)a1 forClient:(id)a2 withCompletionHandler:(id /* block */)a3;
- (void)addEntries:(id)a0 removeEntries:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)buddySetupDidFinish;
- (void)cancelPendingUpdates;
- (id)initWithDatabaseDirectoryPath:(id)a0;
- (char)isSetupAssistantRunning;
- (void)queryTextReplacementsWithCallback:(id /* block */)a0;
- (void)queryTextReplacementsWithPredicate:(id)a0 callback:(id /* block */)a1;
- (void)registerForPushNotifications;
- (void)requestSync:(unsigned long long)a0 withCompletionBlock:(id /* block */)a1;
- (void)scheduleSyncTask;
- (id)textReplacementEntries;
- (id)textReplacementEntriesForClient:(id)a0;

@end
