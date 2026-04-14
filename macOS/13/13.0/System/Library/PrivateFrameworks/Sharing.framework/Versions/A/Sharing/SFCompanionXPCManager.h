@class NSXPCConnection, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SFCompanionXPCManager : NSObject

@property (retain) NSObject<OS_dispatch_queue> *xpcSetupQueue;
@property int listenerResumedToken;
@property BOOL interrupted;
@property (retain) NSXPCConnection *connection;
@property (retain) NSMutableArray *observers;
@property (getter=isInvalid) BOOL invalid;

+ (void)initialize;
+ (id)sharedManager;
+ (id)xpcManagerInterface;
+ (id)serviceManagerClientInterface;
+ (id)serviceManagerInterface;
+ (id)unlockInterface;
+ (id)hotspotClientInterface;
+ (id)hotspotInterface;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)appleAccountSignedIn;
- (void)appleAccountSignedOut;
- (void)updateLowLatencyFilter:(id)a0 isAddFilter:(BOOL)a1 completion:(id /* block */)a2;
- (void)setupConnection;
- (void)notifyOfInterruption;
- (void)notifyOfResume;
- (void)notifyOfInvalidation;
- (void)registerObserver:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)serviceManagerProxyForIdentifier:(id)a0 client:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)streamsForMessage:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)unlockManagerWithCompletionHandler:(id /* block */)a0;
- (void)remoteHotspotSessionForClient:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
