@class NSXPCConnection, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SFCompanionXPCManager : NSObject

@property (retain) NSObject<OS_dispatch_queue> *xpcSetupQueue;
@property int listenerResumedToken;
@property BOOL interrupted;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain) NSMutableArray *observers;
@property (getter=isInvalid) BOOL invalid;

+ (void)initialize;
+ (id)sharedManager;
+ (id)unlockInterface;
+ (id)hotspotClientInterface;
+ (id)hotspotInterface;
+ (id)serviceManagerClientInterface;
+ (id)serviceManagerInterface;
+ (id)xpcManagerInterface;

- (void)clearConnection;
- (void)unregisterObserver:(id)a0;
- (void)appleAccountSignedIn;
- (void)updateLowLatencyFilter:(id)a0 isAddFilter:(BOOL)a1 completion:(id /* block */)a2;
- (void)streamsForMessage:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)appleAccountSignedOut;
- (void)notifyOfResume;
- (void)remoteHotspotSessionForClient:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)serviceManagerProxyForIdentifier:(id)a0 client:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)notifyOfInterruption;
- (void)registerObserver:(id)a0;
- (void).cxx_destruct;
- (void)notifyOfInvalidation;
- (void)setupConnection;
- (void)unlockManagerWithCompletionHandler:(id /* block */)a0;
- (id)init;
- (void)onQueue_setupConnection;
- (void)dealloc;

@end
