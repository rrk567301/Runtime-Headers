@class MSVVariableIntervalTimer, NSString, MRNowPlayingControllerHelper, MRNowPlayingControllerDestination, NSMutableArray, MRNowPlayingControllerConfiguration, NSObject, MRNowPlayingPlayerResponse, MRAVEndpointObserver;
@protocol OS_dispatch_queue;

@interface MRV1NowPlayingController : NSObject <MRNowPlayingControllerImpl>

@property (copy, nonatomic) MRNowPlayingControllerDestination *destination;
@property (copy, nonatomic) MRNowPlayingControllerConfiguration *configuration;
@property (copy, nonatomic) MRNowPlayingPlayerResponse *response;
@property (retain, nonatomic) id playerPathInvalidationObserver;
@property (retain, nonatomic) MRAVEndpointObserver *endpointObserver;
@property (retain, nonatomic) NSString *endpointObserverGroupUID;
@property (retain, nonatomic) NSMutableArray *deferredContentItemsToMerge;
@property (nonatomic) char registeredForNotifications;
@property (nonatomic) char registeredForEndpointChanges;
@property (nonatomic) char registeredForPlayerPathInvalidations;
@property (nonatomic) char updateLoadingEnabled;
@property (nonatomic) char requestingQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) MSVVariableIntervalTimer *retryTimer;
@property (retain, nonatomic) MRNowPlayingControllerHelper *helper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (void)_registerNotificationHandlersIfNeeded;
- (void)_unregisterNotificationHandlers;
- (void)_createPlayerPathForEndpoint:(id)a0 client:(id)a1 player:(id)a2 completion:(id /* block */)a3;
- (void)_handleActiveSystemEndpointChangedNotification:(id)a0;
- (void)_handlePlaybackQueueChangedNotification:(id)a0;
- (void)_handlePlaybackQueueContentItemsArtworkChangedNotification:(id)a0;
- (void)_handlePlaybackQueueContentItemsChangedNotification:(id)a0;
- (void)_handlePlaybackStateChangedNotification:(id)a0;
- (void)_handleSupportedCommandsChangedNotification:(id)a0;
- (void)_loadNowPlayingStateForEndpoint:(id)a0 client:(id)a1 player:(id)a2 completion:(id /* block */)a3;
- (id)_loadNowPlayingStateForPlayerPath:(id)a0 error:(id *)a1;
- (void)_loadNowPlayingStateForUID:(id)a0 client:(id)a1 player:(id)a2 completion:(id /* block */)a3;
- (void)_notifyDelegateOfError:(id)a0;
- (void)_notifyDelegateOfInvalidation;
- (void)_notifyDelegateOfNewResponse:(id)a0;
- (void)_notifyDelegateOfPlaybackQueueChange:(id)a0;
- (void)_notifyDelegateOfPlaybackStateChange:(unsigned int)a0;
- (void)_notifyDelegateOfPlayerPathChange:(id)a0;
- (void)_notifyDelegateOfSupportedCommandsChange:(id)a0;
- (void)_notifyDelegateOfUpdatedArtwork:(id)a0;
- (void)_notifyDelegateOfUpdatedClientProperties:(id)a0;
- (void)_notifyDelegateOfUpdatedContentItemsWithContentItems:(id)a0;
- (void)_notifyDelegateOfUpdatedPlayerLastPlayingDate:(id)a0;
- (void)_onQueue_clearState;
- (void)_onQueue_retrieveEndpointForUID:(id)a0 completion:(id /* block */)a1;
- (void)_registerForEndpointChangesIfNeeded;
- (void)_registerForPlayerPathInvalidationsIfNeeded;
- (void)_reloadForCompleteInvalidation;
- (void)_reloadForPlayerPathInvalidation;
- (void)_requestContentItemArtwork:(id)a0 forPlayerPath:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)_requestPlaybackQueueForPlayerPath:(id)a0 includeArtwork:(char)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)_requestPlayerLastPlayingDateForPlayerPath:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)_requestSupportedCommandsForPlayerPath:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)_resolvePlayerPath:(id)a0 completion:(id /* block */)a1;
- (void)_unregisterForEndpointChanges;
- (void)_unregisterForPlayerPathInvalidations;
- (void)beginLoadingUpdates;
- (void)destinationWithCompletion:(id /* block */)a0;
- (void)endLoadingUpdates;

@end
