@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, SFCompanionServiceManagerProtocol;

@interface SFCompanionManager : NSObject <SFCompanionServiceManagerClient, SFCompanionXPCManagerObserver>

@property (copy) NSString *identifier;
@property (retain) id<SFCompanionServiceManagerProtocol> managerProxy;
@property (copy) NSString *deviceID;
@property (copy) NSString *deviceIP;
@property (copy) NSString *deviceName;
@property (retain) NSMutableDictionary *services;
@property (retain) NSMutableDictionary *streamHandlers;
@property (retain) NSObject<OS_dispatch_queue> *serviceIdentifierQueue;
@property (retain) NSObject<OS_dispatch_semaphore> *managerSemaphore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceManager;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)streamToService:(id)a0 withFileHandle:(id)a1 acceptReply:(id /* block */)a2;
- (void)xpcManagerConnectionInterrupted;
- (void)xpcManagerDidInvalidate:(id)a0;
- (id)serviceForIdentifier:(id)a0;
- (id)streamDataForIdentifier:(id)a0;
- (void)retrieveManagerProxy;
- (void)signalSemaphore;
- (void)getStreamsForData:(id)a0 withStreamHandler:(id /* block */)a1;
- (void)supportStreamsWithIdentifier:(id)a0 withStreamHandler:(id /* block */)a1;
- (void)disableStreamSupportForIdentifier:(id)a0;
- (void)streamsFromFileHandle:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
