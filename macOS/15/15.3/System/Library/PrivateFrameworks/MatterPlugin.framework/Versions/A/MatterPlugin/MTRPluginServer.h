@class NSSet, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, MTRPluginServerDelegate;

@interface MTRPluginServer : NSObject

@property (retain) NSMutableSet *_clientConnections;
@property (retain) id<MTRPluginServerDelegate> delegate;
@property (retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (getter=isRunning) BOOL running;
@property (readonly, retain) NSSet *clientConnections;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)stop;
- (BOOL)addClientConnection:(id)a0;
- (BOOL)handleIncomingMessage:(id)a0;
- (BOOL)removeClientConnection:(id)a0;
- (BOOL)startWithDelegate:(id)a0 queue:(id)a1;
- (BOOL)_deliverMessageToDelegate:(id)a0 homeUUID:(id)a1;
- (long long)_queryHomeRunningModeFromDelegateForHomeUUID:(id)a0;
- (void)runningModeForHomeUUID:(id)a0 runningModeChanged:(long long)a1;

@end
