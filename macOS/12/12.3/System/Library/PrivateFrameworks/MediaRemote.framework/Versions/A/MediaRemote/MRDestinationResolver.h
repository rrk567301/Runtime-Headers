@class MRDestination, NSString, MRAVEndpoint, MRPlayerPath, MSVVariableIntervalTimer, MRDestinationResolverDependencies, NSObject, MROrigin, MRAVEndpointObserver;
@protocol OS_dispatch_queue, MRDestinationResolverDelegate;

@interface MRDestinationResolver : NSObject <MREndpointObserver>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) MRDestinationResolverDependencies *dependencies;
@property (nonatomic) BOOL resolving;
@property (nonatomic) BOOL registeredForNotifications;
@property (nonatomic) BOOL registeredForEndpointChanges;
@property (nonatomic) BOOL registeredForEndpointInvalidations;
@property (nonatomic) BOOL registeredForPlayerPathInvalidations;
@property (retain, nonatomic) id playerPathInvalidationObserver;
@property (retain, nonatomic) MRAVEndpointObserver *endpointObserver;
@property (retain, nonatomic) NSString *endpointObserverGroupUID;
@property (retain, nonatomic) MRDestination *originalDestination;
@property (retain, nonatomic) MRAVEndpoint *delegateEndpoint;
@property (retain, nonatomic) MROrigin *delegateOrigin;
@property (retain, nonatomic) MRPlayerPath *delegatePlayerPath;
@property (retain, nonatomic) MRAVEndpoint *resolvingEndpoint;
@property (retain, nonatomic) MRPlayerPath *resolvingPlayerPath;
@property (retain, nonatomic) MSVVariableIntervalTimer *reconRetryTimer;
@property (retain, nonatomic) MSVVariableIntervalTimer *connectionRetryTimer;
@property (weak, nonatomic) id<MRDestinationResolverDelegate> delegate;
@property (readonly, copy, nonatomic) MRDestination *destination;
@property (readonly, nonatomic) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)resolveDestination:(id)a0 level:(long long)a1 timeout:(double)a2 completion:(id /* block */)a3;
+ (void)resolvePartialDestination:(id)a0 level:(long long)a1 timeout:(double)a2 dependencies:(id)a3 completion:(id /* block */)a4;
+ (void)resolveDestination:(id)a0 timeout:(double)a1 completion:(id /* block */)a2;
+ (void)resolvePartialDestination:(id)a0 level:(long long)a1 timeout:(double)a2 completion:(id /* block */)a3;

- (void)dealloc;
- (void).cxx_destruct;
- (void)resolve;
- (void)endpointDidDisconnect:(id)a0;
- (void)onQueue_setResolvedPlayerPath:(id)a0;
- (id)initWithDestination:(id)a0 label:(id)a1 dependencies:(id)a2;
- (void)beginResolving;
- (void)unregisterForPlayerPathInvalidations;
- (void)onQueue_setOrigin:(id)a0;
- (void)notifyDelegateOfEndpointChange:(id)a0;
- (void)notifyDelegateOfOriginChange:(id)a0;
- (void)notifyDelegateOfPlayerPathChange:(id)a0;
- (void)resolveForResolvedPlayerPath:(id)a0;
- (void)resolveForEndpoint:(id)a0 client:(id)a1 player:(id)a2;
- (void)resolveForOutputDeviceUID:(id)a0 client:(id)a1 player:(id)a2;
- (void)resolveForUnresolvedPlayerPath:(id)a0;
- (void)notifyDelegateOfError:(id)a0;
- (void)onQueue_registerForPlayerPathInvalidationsForUnresolvedPlayerPath:(id)a0;
- (void)onQueue_clearStateForPlayerPath;
- (void)onQueue_setUnresolvedPlayerPath:(id)a0;
- (void)resolvePlayerPath:(id)a0 completion:(id /* block */)a1;
- (void)onQueue_registerForEndpointInvalidations:(id)a0;
- (void)createPlayerPathForEndpoint:(id)a0 client:(id)a1 player:(id)a2 completion:(id /* block */)a3;
- (void)registerForEndpointChangesForOutputDeviceUID:(id)a0;
- (void)onQueue_retrieveEndpointForUID:(id)a0 completion:(id /* block */)a1;
- (BOOL)isDynamicEndpoint;
- (void)handleActiveSystemEndpointChangedNotification:(id)a0;
- (void)handleEndpointChanged;
- (void)onQueue_setEndpoint:(id)a0;
- (void)handlePlayerPathInvalidatedWithPlayerPath:(id)a0;
- (void)onQueue_clearStateForOutputDeviceUID;
- (void)notifyDelegateOfInvalidation;
- (void)onQueue_clearStateForEndpoint;
- (BOOL)isProactiveEndpoint;
- (BOOL)isUserSelectedEndpoint;
- (void)handleEndpointInvalidated;
- (void)unregisterForEndpointChanges;
- (void)unregisterForEndpointInvalidations;
- (id)initWithDestination:(id)a0 label:(id)a1;

@end
