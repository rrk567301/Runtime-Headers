@class NSSet, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, MTRPluginServerDelegate, OS_dispatch_source;

@interface MTRPluginServer : NSObject

@property (retain) NSMutableSet *_clientConnections;
@property (retain) id<MTRPluginServerDelegate> delegate;
@property (retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (getter=isRunning) char running;
@property (retain) NSObject<OS_dispatch_source> *primaryResidentUpdatedSource;
@property (retain) NSMutableSet *homesWithPrimaryResidentUpdated;
@property (readonly, retain) NSSet *clientConnections;

+ (id)sharedInstance;
+ (id)serverWorkQueue;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)stop;
- (char)addClientConnection:(id)a0;
- (char)handleIncomingMessage:(id)a0;
- (void)handlePrimaryResidentUpdateNotification:(id)a0;
- (char)removeClientConnection:(id)a0;
- (void)runningModeForHomeUUID:(id)a0 runningModeChanged:(long long)a1;
- (char)startWithDelegate:(id)a0 queue:(id)a1;
- (char)_deliverMessageToDelegate:(id)a0 homeUUID:(id)a1 timeout:(double)a2;
- (void)_registerForResidentChangedNotifications;
- (long long)_safeQueryRunningModeFromDelegateForHomeUUID:(id)a0;
- (long long)_unsafeQueryRunningModeFromDelegateForHomeUUID:(id)a0;

@end
