@class NSDate, MRPlayerPath, NSArray, NSString, MRMediaRemoteService, NSHashTable, MRNowPlayingSessionServiceClient, MRAVRoutingClientController, NSObject, NSMutableSet, MRNotificationServiceClient, MRNotificationClient;
@protocol OS_dispatch_queue;

@interface MRMediaRemoteServiceClient : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    MRAVRoutingClientController *_routingClientController;
    MRPlayerPath *_activePlayerPath;
    MRPlayerPath *_currentSessionPlayerPath;
    NSDate *_currentSessionPlayerPathDate;
    NSString *_currentSessionRoutingContextID;
    NSDate *_currentSessionRoutingContextIDDate;
    NSMutableSet *_playerPathInvalidationHandlers;
    NSHashTable *_weakEndpointObservers;
    NSHashTable *_weakNowPlayingControllers;
    NSHashTable *_weakDiscoverySessions;
    NSHashTable *_weakEndpoints;
    NSHashTable *_weakExternalDevices;
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
@property (retain, nonatomic) NSString *currentSessionRoutingContextID;

+ (id)sharedServiceClient;

- (id)debugDescription;
- (void)dealloc;
- (void)removeDistantEndpoint:(id)a0;
- (void)removeDistantExternalDevice:(id)a0;
- (void)removeEndpointObserver:(id)a0;
- (void)processPlayerPathInvalidationHandlersWithBlock:(id /* block */)a0;
- (void)removeInvalidationHandler:(id)a0;
- (void)addEndpointObserver:(id)a0;
- (id)init;
- (void)processPlayerPathInvalidationHandlersWithInvalidOrigin:(id)a0;
- (void)fetchPickableRoutesWithCategory:(id)a0 completion:(id /* block */)a1;
- (void)addNowPlayingController:(id)a0;
- (void)addDiscoverySession:(id)a0;
- (void)removeNowPlayingController:(id)a0;
- (void)addDistantEndpoint:(id)a0;
- (void)addDistantExternalDevice:(id)a0;
- (void)removeDiscoverySession:(id)a0;
- (id)addPlayerPathInvalidationHandler:(id)a0;
- (void).cxx_destruct;

@end
