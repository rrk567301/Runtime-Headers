@class NSHashTable, MRPlayerPath, NSArray, MRMediaRemoteService, MRNowPlayingSessionServiceClient, MRAVRoutingClientController, NSMutableArray, NSObject, NSMutableSet, MRNotificationServiceClient, MRNotificationClient;
@protocol OS_dispatch_queue;

@interface MRMediaRemoteServiceClient : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableArray *_registeredOrigins;
    MRAVRoutingClientController *_routingClientController;
    MRPlayerPath *_activePlayerPath;
    NSMutableSet *_playerPathInvalidationHandlers;
    NSHashTable *_weakEndpointObservers;
    NSHashTable *_weakNowPlayingControllers;
    MRNotificationServiceClient *_notificationService;
    MRNowPlayingSessionServiceClient *_nowPlayingSessionService;
}

@property (readonly, nonatomic) MRMediaRemoteService *service;
@property (readonly, nonatomic) MRNotificationClient *notificationClient;
@property (readonly, nonatomic) NSArray *registeredOrigins;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workerQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *playbackQueueDispatchQueue;
@property (retain, nonatomic) MRPlayerPath *activePlayerPath;

+ (id)sharedServiceClient;

- (void)dealloc;
- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;
- (void)processPlayerPathInvalidationHandlersWithInvalidOrigin:(id)a0;
- (void)addEndpointObserver:(id)a0;
- (void)removeEndpointObserver:(id)a0;
- (void)processPlayerPathInvalidationHandlersWithBlock:(id /* block */)a0;
- (void)registerOrigin:(id)a0 withDeviceInfo:(id)a1 completion:(id /* block */)a2;
- (void)unregisterOrigin:(id)a0 withCompletion:(id /* block */)a1;
- (void)unregisterAllOriginsWithCompletion:(id /* block */)a0;
- (BOOL)isOriginRegistered:(id)a0;
- (void)fetchPickableRoutesWithCategory:(id)a0 completion:(id /* block */)a1;
- (id)addPlayerPathInvalidationHandler:(id)a0;
- (void)removeInvalidationHandler:(id)a0;
- (void)addNowPlayingController:(id)a0;
- (void)removeNowPlayingController:(id)a0;

@end
