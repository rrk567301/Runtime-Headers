@class NSHashTable, MRPlayerPath, NSArray, MRMediaRemoteService, MRNowPlayingSessionServiceClient, MRAVRoutingClientController, NSMutableSet, NSObject, MRNotificationServiceClient, MRNotificationClient;
@protocol OS_dispatch_queue;

@interface MRMediaRemoteServiceClient : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    MRAVRoutingClientController *_routingClientController;
    MRPlayerPath *_activePlayerPath;
    MRPlayerPath *_currentSessionPlayerPath;
    NSMutableSet *_playerPathInvalidationHandlers;
    NSHashTable *_weakEndpointObservers;
    NSHashTable *_weakNowPlayingControllers;
    NSHashTable *_weakDiscoverySessions;
    MRNotificationServiceClient *_notificationService;
    MRNowPlayingSessionServiceClient *_nowPlayingSessionService;
}

@property (readonly, nonatomic) MRMediaRemoteService *service;
@property (readonly, nonatomic) MRNotificationClient *notificationClient;
@property (readonly, nonatomic) NSArray *registeredOrigins;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workerQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *playbackQueueDispatchQueue;
@property (retain, nonatomic) MRPlayerPath *activePlayerPath;
@property (retain, nonatomic) MRPlayerPath *currentSessionPlayerPath;

+ (id)sharedServiceClient;

- (void)dealloc;
- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;
- (void)fetchPickableRoutesWithCategory:(id)a0 completion:(id /* block */)a1;
- (id)addPlayerPathInvalidationHandler:(id)a0;
- (void)removeInvalidationHandler:(id)a0;
- (void)processPlayerPathInvalidationHandlersWithInvalidOrigin:(id)a0;
- (void)processPlayerPathInvalidationHandlersWithBlock:(id /* block */)a0;
- (void)addEndpointObserver:(id)a0;
- (void)removeEndpointObserver:(id)a0;
- (void)addNowPlayingController:(id)a0;
- (void)removeNowPlayingController:(id)a0;
- (void)addDiscoverySession:(id)a0;
- (void)removeDiscoverySession:(id)a0;

@end
