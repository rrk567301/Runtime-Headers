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

- (void)setupConnection;
- (void)streamsForMessage:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)appleAccountSignedOut;
- (void)serviceManagerProxyForIdentifier:(id)a0 client:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)remoteHotspotSessionForClient:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)appleAccountSignedIn;
- (void)unlockManagerWithCompletionHandler:(id /* block */)a0;
- (void)notifyOfInvalidation;
- (void)updateLowLatencyFilter:(id)a0 isAddFilter:(BOOL)a1 completion:(id /* block */)a2;
- (void)notifyOfInterruption;
- (void)onQueue_setupConnection;
- (void).cxx_destruct;
- (void)unregisterObserver:(id)a0;
- (id)init;
- (void)registerObserver:(id)a0;
- (void)clearConnection;
- (void)dealloc;
- (void)notifyOfResume;

@end
