@class NSXPCConnection, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SFCompanionXPCManager : NSObject

@property (retain) NSObject<OS_dispatch_queue> *xpcSetupQueue;
@property int listenerResumedToken;
@property BOOL interrupted;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain) NSMutableArray *observers;
@property (getter=isInvalid) BOOL invalid;

+ (id)sharedManager;
+ (void)initialize;
+ (id)unlockInterface;
+ (id)hotspotClientInterface;
+ (id)hotspotInterface;
+ (id)serviceManagerClientInterface;
+ (id)serviceManagerInterface;
+ (id)xpcManagerInterface;

- (void)setupConnection;
- (void)notifyOfResume;
- (void)clearConnection;
- (void)unregisterObserver:(id)a0;
- (void)unlockManagerWithCompletionHandler:(id /* block */)a0;
- (void)updateLowLatencyFilter:(id)a0 isAddFilter:(BOOL)a1 completion:(id /* block */)a2;
- (void)dealloc;
- (void)streamsForMessage:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)registerObserver:(id)a0;
- (void)notifyOfInterruption;
- (id)init;
- (void)onQueue_setupConnection;
- (void)appleAccountSignedIn;
- (void)notifyOfInvalidation;
- (void)serviceManagerProxyForIdentifier:(id)a0 client:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)appleAccountSignedOut;
- (void).cxx_destruct;
- (void)remoteHotspotSessionForClient:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
