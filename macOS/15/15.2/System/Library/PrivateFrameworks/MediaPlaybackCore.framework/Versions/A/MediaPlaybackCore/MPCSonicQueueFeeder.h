@class MPRequestResponseController, NSString, MPCSonicQueueFeeder_Swift, MPCModelPlaybackContext, MPIdentifierSet, NSDictionary, MPModelGenericObject, MPModelRequest, MPCPlaybackRequestEnvironment, MPCModelGenericAVItemUserIdentityPropertySet, MSVSectionedCollection;
@protocol MPCModelPlaybackRequest, MPMutableIdentifierListSection;

@interface MPCSonicQueueFeeder : MPQueueFeeder <MPRTCReportingItemSessionContaining, MPCQueueControllerBehaviorMusicDataSource, MPCModelPlaybackRequestEnvironmentConsuming> {
    NSDictionary *_startTimeModifications;
    NSDictionary *_endTimeModifications;
    MPRequestResponseController *_requestController;
    MPModelRequest<MPCModelPlaybackRequest> *_request;
    NSString *_rtcReportingPlayQueueSourceIdentifier;
    BOOL _isSiriInitiated;
    MPIdentifierSet *_startItemIdentifiers;
    id<MPMutableIdentifierListSection> _section;
    MPCModelGenericAVItemUserIdentityPropertySet *_identityPropertySet;
    MPCModelPlaybackContext *_playbackContext;
}

@property (class, readonly, nonatomic) BOOL usesIdentifierRegistry;

@property (readonly, nonatomic) MPCSonicQueueFeeder_Swift *swift;
@property (copy, nonatomic) MPModelGenericObject *fallbackSectionRepresentation;
@property (readonly, nonatomic) MSVSectionedCollection *responseContentIDs;
@property (readonly, copy, nonatomic) NSString *rtcReportingPlayQueueSourceIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL containsLiveStream;
@property (readonly, nonatomic) BOOL containsRadioContent;
@property (copy, nonatomic) MPCPlaybackRequestEnvironment *playbackRequestEnvironment;

- (id)init;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (void)applyVolumeNormalizationForItem:(id)a0;
- (id)firstModelPlayEvent;
- (void)getRepresentativeMetadataForPlaybackContext:(id)a0 properties:(id)a1 completion:(id /* block */)a2;
- (void)reloadSection:(id)a0 completion:(id /* block */)a1;
- (BOOL)section:(id)a0 shouldShuffleExcludeItem:(id)a1;
- (long long)supplementalPlaybackContextBehavior;
- (id)supplementalPlaybackContextWithReason:(long long)a0;
- (void)loadPlaybackContext:(id)a0 completion:(id /* block */)a1;
- (id)_sectionedModelObjectsRepresentationForSectionedContentIDs:(id)a0;
- (id)accountIDForItem:(id)a0 inSection:(id)a1;
- (BOOL)canJumpToItem:(id)a0 reason:(id *)a1;
- (BOOL)containsTransportableContentWithReason:(id *)a0;
- (id)firstItemIntersectingIdentifierSet:(id)a0;
- (id)identifiersForItem:(id)a0 inSection:(id)a1;
- (BOOL)isExportableMediaTypeForItem:(id)a0 inSection:(id)a1;
- (id)itemForItem:(id)a0 inSection:(id)a1;
- (id)modelPlayEventForItem:(id)a0 inSection:(id)a1;
- (id)playbackInfoForItem:(id)a0;
- (BOOL)section:(id)a0 supportsShuffleType:(long long)a1;
- (BOOL)shouldUsePlaceholderForItem:(id)a0 inSection:(id)a1;
- (BOOL)supportsAutoPlayForItem:(id)a0 inSection:(id)a1;
- (id)updatedPlaybackContext;

@end
