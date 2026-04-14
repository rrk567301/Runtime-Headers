@class MPCModelPlaybackContext, MPCPlaybackRequestEnvironment, NSDictionary, NSObject, MPModelGenericObject, MPModelResponse, NSString, MPIdentifierSet, NSHashTable, MPPropertySet, MPModelRequest, MPCModelGenericAVItemUserIdentityPropertySet, MPCRequestController;
@protocol MPCModelPlaybackRequest, MPMutableIdentifierListSection, MPCQueueControllerBehaviorMusicDataSourceDelegate, MPCModelPlaybackResponse, OS_dispatch_queue, MPCCriticalSectionTaskCancellable;

@interface MPCModelQueueFeeder : MPQueueFeeder <MPRTCReportingItemSessionContaining, MPCRequestControllerDelegate, MPCPlaybackEngineInfoProvider, MPCPlaybackAccountManagerObserver, MPCQueueControllerBehaviorMusicDataSource> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_diffQueue;
    NSHashTable *_activeModelGenericAVItems;
    NSDictionary *_endTimeModifications;
    id /* block */ _loadingCompletionHandler;
    MPCRequestController *_requestController;
    MPModelRequest<MPCModelPlaybackRequest> *_request;
    NSString *_rtcReportingPlayQueueSourceIdentifier;
    BOOL _isSiriInitiated;
    MPCPlaybackRequestEnvironment *_playbackRequestEnvironment;
    MPIdentifierSet *_startItemIdentifiers;
    NSDictionary *_startTimeModifications;
    id<MPMutableIdentifierListSection> _section;
    MPCModelGenericAVItemUserIdentityPropertySet *_identityPropertySet;
    MPCModelPlaybackContext *_playbackContext;
    MPPropertySet *_representativeMetadataPropertySet;
    id<MPCCriticalSectionTaskCancellable> _automaticResponseLoadingCriticalSection;
    id<MPCCriticalSectionTaskCancellable> _loadNextPageCriticalSection;
    unsigned long long _backgroundTaskIdentifier;
    unsigned long long _backgroundTasks;
}

@property (class, readonly, nonatomic) BOOL usesIdentifierRegistry;
@property (class, readonly, nonatomic) BOOL restoresIdentifierRegistry;

@property (copy, nonatomic) MPModelGenericObject *fallbackSectionRepresentation;
@property (readonly, nonatomic) MPModelResponse<MPCModelPlaybackResponse> *response;
@property (readonly, copy, nonatomic) NSString *rtcReportingPlayQueueSourceIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *playbackEngineID;
@property (readonly, nonatomic) BOOL containsLiveStream;
@property (readonly, nonatomic) BOOL containsRadioContent;
@property (weak, nonatomic) id<MPCQueueControllerBehaviorMusicDataSourceDelegate> delegate;


- (void)dealloc;
- (id)init;
- (id)uniqueIdentifier;
- (void).cxx_destruct;
- (void)applyVolumeNormalizationForItem:(id)a0;
- (BOOL)controller:(id)a0 shouldRetryFailedRequestWithError:(id)a1;
- (void)didFinishLoadingRequestForController:(id)a0;
- (id)firstModelPlayEvent;
- (void)getRepresentativeMetadataForPlaybackContext:(id)a0 properties:(id)a1 completion:(id /* block */)a2;
- (void)reloadSection:(id)a0 completion:(id /* block */)a1;
- (BOOL)section:(id)a0 shouldShuffleExcludeItem:(id)a1;
- (long long)supplementalPlaybackContextBehavior;
- (id)supplementalPlaybackContextWithReason:(long long)a0;
- (void)willBeginLoadingRequestForController:(id)a0;
- (void)loadPlaybackContext:(id)a0 completion:(id /* block */)a1;
- (void)_beginBackgroundTaskAssertion;
- (void)_clearQueueDueToAccountChange;
- (id)_emptyStaticRequest;
- (void)_endBackgroundTaskAssertion;
- (id)_modelPlayEventForItem:(id)a0;
- (id)_playlistFolderPlayEventForItem:(id)a0;
- (id)_sectionedModelObjectsRepresentationForSectionedCollection:(id)a0;
- (id)_staticRegistryRequest;
- (id)accountIDForItem:(id)a0 inSection:(id)a1;
- (void)accountManager:(id)a0 didChangeAccounts:(id)a1;
- (BOOL)canJumpToItem:(id)a0 reason:(id *)a1;
- (void)clearSectionProxy;
- (BOOL)containsTransportableContentWithReason:(id *)a0;
- (void)controller:(id)a0 defersResponse:(id)a1 completion:(id /* block */)a2;
- (void)controllerReplacingResponse:(id)a0 withNewResponse:(id)a1 fromRequest:(id)a2;
- (id)firstItemIntersectingIdentifierSet:(id)a0;
- (id)identifiersForItem:(id)a0 inSection:(id)a1;
- (BOOL)isExportableMediaTypeForItem:(id)a0 inSection:(id)a1;
- (BOOL)isPlayableItem:(id)a0 inSection:(id)a1;
- (unsigned long long)itemCountInSection:(id)a0;
- (id)itemForItem:(id)a0 inSection:(id)a1;
- (id)modelPlayEventForItem:(id)a0 inSection:(id)a1;
- (id)playbackInfoForItem:(id)a0;
- (BOOL)section:(id)a0 supportsShuffleType:(long long)a1;
- (BOOL)shouldUsePlaceholderForItem:(id)a0 inSection:(id)a1;
- (BOOL)supportsAutoPlayForItem:(id)a0 inSection:(id)a1;
- (id)updatedPlaybackContext;

@end
