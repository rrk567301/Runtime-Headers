@class NSString, TULocked, NSObject;
@protocol OS_dispatch_queue, TUIDSIDQueryController, TUIDSBatchIDQueryController;

@interface TUIDSLookupManager : NSObject <IDSBatchIDQueryControllerDelegate>

@property (class, readonly, nonatomic) TUIDSLookupManager *sharedManager;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id<TUIDSIDQueryController> queryController;
@property (readonly, nonatomic) TULocked *idsFaceTimeVideoStatuses;
@property (readonly, nonatomic) TULocked *idsFaceTimeAudioStatuses;
@property (readonly, nonatomic) TULocked *idsFaceTimeMultiwayStatuses;
@property (readonly, nonatomic) TULocked *idsVideoMessagingStatuses;
@property (readonly, nonatomic) TULocked *idsiMessageStatuses;
@property (readonly, nonatomic) TULocked *idsNameAndPhotoStatuses;
@property (readonly, nonatomic) TULocked *idsModernStatuses;
@property (readonly, nonatomic) TULocked *idsWebCapableStatuses;
@property (readonly, nonatomic) TULocked *idsAVLessSharePlayCapableStatuses;
@property (retain, nonatomic) id<TUIDSBatchIDQueryController> batchQuerySearchVideoController;
@property (retain, nonatomic) id<TUIDSBatchIDQueryController> batchQuerySearchAudioController;
@property (retain, nonatomic) id<TUIDSBatchIDQueryController> batchQuerySearchMultiwayController;
@property (retain, nonatomic) id<TUIDSBatchIDQueryController> batchQuerySearchVideoMessagingController;
@property (retain, nonatomic) id<TUIDSBatchIDQueryController> batchQuerySearchiMessageController;
@property (retain, nonatomic) id<TUIDSBatchIDQueryController> batchQuerySearchShareNameAndPhotoController;
@property (copy, nonatomic) id /* block */ batchQueryControllerCreationBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned int)fzHandleIDStatusForDestination:(id)a0 usingCache:(id)a1;
+ (char)isAnyDestinationAvailableInDestinations:(id)a0 usingCache:(id)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)batchQueryController:(id)a0 updatedDestinationsStatus:(id)a1 onService:(id)a2 error:(id)a3;
- (id)preferredFromID;
- (void)beginBatchQueryWithDestinations:(id)a0;
- (void)beginBatchQueryWithDestinations:(id)a0 includeMessages:(char)a1;
- (void)beginBatchQueryWithDestinations:(id)a0 services:(unsigned long long)a1;
- (void)beginCachedQueryWithDestinations:(id)a0;
- (void)beginCachedQueryWithDestinations:(id)a0 includeMessages:(char)a1;
- (void)beginCachedQueryWithDestinations:(id)a0 onService:(id)a1;
- (void)beginCachedQueryWithDestinations:(id)a0 services:(unsigned long long)a1;
- (void)beginQueryWithDestination:(id)a0 onService:(id)a1;
- (void)beginQueryWithDestinations:(id)a0;
- (void)beginQueryWithDestinations:(id)a0 includeMessages:(char)a1;
- (void)beginQueryWithDestinations:(id)a0 services:(unsigned long long)a1;
- (void)beginQueryWithRefreshForDestination:(id)a0 onService:(id)a1;
- (void)cancelQueries;
- (unsigned int)faceTimeAudioAvailabilityForDestination:(id)a0;
- (unsigned int)faceTimeMultiwayAvailabilityForDestination:(id)a0;
- (unsigned int)faceTimeVideoAvailabilityForDestination:(id)a0;
- (void)filteredDestinationForMultiway:(id)a0 completionBlock:(id /* block */)a1;
- (void)handleIDSQueryResultWithDestinationStatus:(id)a0 onService:(id)a1;
- (id)initWithQueryController:(id)a0 batchQueryControllerCreationBlock:(id /* block */)a1;
- (char)isAVLessSharePlayCapableForAnyDestinationInDestinations:(id)a0;
- (char)isFaceTimeAudioAvailableForAnyDestinationInDestinations:(id)a0;
- (char)isFaceTimeAudioAvailableForItem:(id)a0;
- (char)isFaceTimeMultiwayAvailableForAnyDestinationInDestinations:(id)a0;
- (char)isFaceTimeMultiwayAvailableForItem:(id)a0;
- (char)isFaceTimeVideoAvailableForAnyDestinationInDestinations:(id)a0;
- (char)isFaceTimeVideoAvailableForItem:(id)a0;
- (char)isModernFaceTimeAvailableForDestination:(id)a0;
- (char)isNameAndPhotoAvailableForDestination:(id)a0;
- (char)isVideoMessagingAvailableForAnyDestinationInDestinations:(id)a0;
- (char)isVideoMessagingAvailableForItem:(id)a0;
- (char)isWebCapableFaceTimeAvailableForDestination:(id)a0;
- (char)isiMessageAvailableForAnyDestinationInDestinations:(id)a0;
- (void)postStatusChangedNotification;
- (void)queryHasEndpointWithCapabilities:(id)a0 forMultiwayDestinations:(id)a1 completionBlock:(id /* block */)a2;
- (void)queryHasWebOnlyEndpointsForDestinations:(id)a0 completionBlock:(id /* block */)a1;

@end
