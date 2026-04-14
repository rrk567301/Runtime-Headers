@class MRNowPlayingPlayerResponse, MRNowPlayingControllerConfiguration, MRDestination, NSError, NSObject, NSDate;
@protocol OS_dispatch_queue, MRNowPlayingControllerImpl, MRNowPlayingControllerDelegate;

@interface MRNowPlayingController : NSObject

@property (retain, nonatomic) id<MRNowPlayingControllerImpl> impl;
@property (retain, nonatomic) MRNowPlayingPlayerResponse *response;
@property (copy, nonatomic) MRNowPlayingControllerConfiguration *configuration;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue;
@property (retain, nonatomic) NSError *lastError;
@property (retain, nonatomic) NSDate *allocationDate;
@property (retain, nonatomic) NSDate *beginDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSDate *lastInitialLoadDate;
@property (retain, nonatomic) NSDate *lastInvalidationDate;
@property (retain, nonatomic) NSDate *lastErrorDate;
@property (retain, nonatomic) NSDate *lastUpdateDate;
@property (weak, nonatomic) id<MRNowPlayingControllerDelegate> delegate;
@property (readonly, copy, nonatomic) MRDestination *destination;

+ (void)sendCommand:(unsigned int)a0 toDestination:(id)a1 options:(id)a2 appOptions:(unsigned int)a3 withCompletion:(id /* block */)a4;
+ (void)performRequest:(id)a0 withCompletion:(id /* block */)a1;
+ (id)proactiveEndpointController;
+ (id)localRouteController;
+ (id)userSelectedEndpointController;

- (void)_notifyDelegateOfSupportedCommandsChange:(id)a0;
- (void)_notifyDelegateOfPlaybackStateChange:(unsigned int)a0;
- (void)_notifyDelegateOfPlaybackQueueChange:(id)a0;
- (id)initWithUID:(id)a0;
- (void)_notifyDelegateOfNewResponse:(id)a0;
- (void)beginLoadingUpdates;
- (void)_notifyDelegateOfInvalidation;
- (void)_notifyDelegateOfUpdatedClientProperties:(id)a0;
- (id)initWithDestination:(id)a0;
- (void)_notifyDelegateOfUpdatedContentItemsWithContentItems:(id)a0;
- (void)_notifyDelegateOfPlayerPathChange:(id)a0;
- (id)_createImplWithConfiguration:(id)a0;
- (void)_notifyDelegateOfError:(id)a0;
- (void)_notifyDelegateOfUpdatedArtwork:(id)a0;
- (void)_notifyDelegateOfUpdatedPlayerLastPlayingDate:(id)a0;
- (id)debugDescription;
- (id)initWithConfiguration:(id)a0;
- (id)description;
- (void)sendCommand:(unsigned int)a0 options:(id)a1 completion:(id /* block */)a2;
- (id)playerPath;
- (void)_notifyDelegateOfUpdatedDeviceLastPlayingDate:(id)a0;
- (void)sendCommand:(unsigned int)a0 options:(id)a1 appOptions:(unsigned int)a2 completion:(id /* block */)a3;
- (id)_makeHelper;
- (void)performRequestWithCompletion:(id /* block */)a0;
- (void)endLoadingUpdates;
- (void).cxx_destruct;
- (void)_notifyDelegateOfUpdate;
- (void)dealloc;

@end
