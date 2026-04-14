@class NSArray, NSDictionary, NSHashTable, TURoute, NSObject;
@protocol OS_dispatch_queue, TURouteControllerActions;

@interface TURouteController : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) void *queueContext;
@property (readonly, weak, nonatomic) id<TURouteControllerActions> actionsDelegate;
@property (readonly, nonatomic) NSHashTable *delegates;
@property (copy, nonatomic) NSDictionary *routesByUniqueIdentifier;
@property (readonly, copy, nonatomic) NSArray *routes;
@property (readonly, copy, nonatomic) TURoute *pickedRoute;
@property (readonly, copy, nonatomic) TURoute *receiverRoute;
@property (readonly, copy, nonatomic) TURoute *speakerRoute;
@property (readonly, nonatomic) BOOL areAuxiliaryRoutesAvailable;
@property (nonatomic) float volume;

- (void)performBlockOnQueue:(id /* block */)a0;
- (void)addDelegate:(id)a0;
- (id)initWithActionsDelegate:(id)a0 serialQueue:(id)a1;
- (void)handleServerReconnect;
- (void)pickRouteWithUniqueIdentifier:(id)a0;
- (void)handleServerDisconnect;
- (void)removeDelegate:(id)a0;
- (id)routeWithSourceIdentifier:(id)a0;
- (void)pickRoute:(id)a0;
- (void)handleRoutesByUniqueIdentifierUpdated:(id)a0;
- (void)dealloc;
- (void)pickRouteWhenAvailableWithUniqueIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)requeryRoutes;
- (void)handleVolumeUpdateFromHost:(float)a0;

@end
