@class CATSharingDevice, NSString, SFService, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface DMTSharingBroadcastPrimitives : NSObject <CATSharingBroadcastPrimitives>

@property (retain, nonatomic) CATSharingDevice *remoteDevice;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *broadcastCallbackQueue;
@property (readonly, nonatomic) NSMutableArray *receivedObjectQueue;
@property (readonly, nonatomic) SFService *sharingService;
@property (nonatomic, getter=isActivated) char activated;
@property (nonatomic, getter=isInvalidated) char invalidated;
@property (nonatomic, getter=isPaired) char paired;
@property (copy) id /* block */ showPinHandler;
@property (copy) id /* block */ dismissPinHandler;
@property (copy) id /* block */ sessionPairedHandler;
@property (copy) id /* block */ messageReceivedHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invalidateWithError:(id)a0;
- (void)deactivate;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)sendMessageToPairedDevice:(id)a0;
- (void)addDependencyHandlers;
- (id)initWithLoggingIdentifier:(id)a0;
- (void)removeDependencyHandlers:(char)a0;
- (void)serviceReceivedObjectQueue;
- (void)updateRemoteDeviceWithSession:(id)a0;

@end
