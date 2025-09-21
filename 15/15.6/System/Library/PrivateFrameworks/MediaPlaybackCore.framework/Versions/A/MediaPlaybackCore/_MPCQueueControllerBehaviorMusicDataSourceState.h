@class NSString, MPPlaceholderAVItem, MPPlaybackContext, MPCPlaybackEngineEventStream;
@protocol MPCQueueControllerBehaviorMusicDataSource, MPCQueueControllerDataSourceStateRestoring;

@interface _MPCQueueControllerBehaviorMusicDataSourceState : NSObject <MPCQueueControllerBehaviorMusicDataSourceDelegate, MPShuffleableSectionedIdentifierListDataSource, NSSecureCoding> {
    struct { unsigned char dataSourcePlaceholderItemForLoadingAdditionalItemsInSection : 1; unsigned char dataSourceSupplementalPlaybackContextWithReason : 1; unsigned char dataSourceSupplementalPlaybackContextBehavior : 1; unsigned char dataSourceCanJumpToItem : 1; unsigned char dataSourceCanSkipItem : 1; unsigned char dataSourceFirstItemIntersectingIdentifierSet : 1; unsigned char dataSourceItemDidBeginPlayback : 1; unsigned char dataSourceShouldRequestAdditionalItemsWhenReachingTailOfSection : 1; unsigned char dataSourcePrefetchThresholdForSection : 1; unsigned char dataSourceShouldUsePlaceholderForItemInSection : 1; unsigned char dataSourceSectionShouldShuffleExcludeItem : 1; unsigned char dataSourceUpdatedPlaybackContext : 1; unsigned char dataSourceContainsRadioContent : 1; } _supportedMethods;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *preferredStartContentItemID;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } stateLock;
@property (readonly, nonatomic) long long supplementalPlaybackContextBehavior;
@property (readonly, nonatomic) MPPlaybackContext *supplementalPlaybackContext;
@property (readonly, nonatomic) id<MPCQueueControllerBehaviorMusicDataSource, MPCQueueControllerDataSourceStateRestoring> dataSource;
@property (readonly, nonatomic) MPPlaybackContext *playbackContext;
@property (readonly, nonatomic) char shouldAddOriginalPlaybackContextAfterReplacement;
@property (readonly, nonatomic) MPPlaybackContext *originalPlaybackContext;
@property (nonatomic) long long state;
@property (nonatomic, getter=isFrozen) char frozen;
@property (readonly, nonatomic) NSString *sectionIdentifier;
@property (readonly, nonatomic) NSString *preferredStartItemIdentifier;
@property (readonly, nonatomic) MPPlaceholderAVItem *tailPlaceholderItem;
@property (readonly, nonatomic) char containsLiveStream;
@property (copy, nonatomic) NSString *playerID;
@property (weak, nonatomic) MPCPlaybackEngineEventStream *eventStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPlaybackContext:(id)a0;
- (void)reloadSection:(id)a0 completion:(id /* block */)a1;
- (char)section:(id)a0 shouldShuffleExcludeItem:(id)a1;
- (id)getTailPlaceholderItemAndState:(long long *)a0;
- (void)_buildPlaceholder;
- (void)_inLock_buildPlaceholder;
- (unsigned long long)_loadedItemCount;
- (id)_rtcSourceServiceName;
- (char)canJumpToItem:(id)a0 reason:(id *)a1;
- (char)canSkipItem:(id)a0 reason:(id *)a1;
- (id)firstItemIntersectingIdentifierSet:(id)a0;
- (char)isRadioDataSource;
- (void)itemDidBeginPlayback:(id)a0;
- (id)itemForItem:(id)a0 inSection:(id)a1;
- (void)loadAdditionalItemsIfNeededWithCount:(long long)a0 completion:(id /* block */)a1;
- (id)playbackEngineID;
- (long long)prefetchThreshold;
- (char)section:(id)a0 supportsShuffleType:(long long)a1;
- (char)shouldRequestAdditionalItemsAtTail;
- (char)shouldUsePlaceholderForItem:(id)a0 inSection:(id)a1;
- (void)updatePlaybackContext;

@end
