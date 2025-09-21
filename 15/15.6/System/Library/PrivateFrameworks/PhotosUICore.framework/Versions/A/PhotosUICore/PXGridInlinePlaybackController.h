@class NSArray, PXEventCoalescer, NSMapTable, PXUpdater, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, PXDisplayAsset;

@interface PXGridInlinePlaybackController : NSObject <PXPreferencesObserver, PXEventCoalescerObserver> {
    NSObject<OS_dispatch_queue> *_recordsQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lookupLock;
    NSMapTable *_lookupLock_recordsByDisplayAsset;
    NSMutableArray *_currentlyPlayingRecords;
    NSMutableArray *_visibleRecords;
    PXUpdater *_updater;
}

@property (nonatomic) char active;
@property (nonatomic) char canCreateRecords;
@property (nonatomic) char playbackEnabled;
@property (nonatomic) char applicationActive;
@property (nonatomic) char lowPowerModeEnabled;
@property (nonatomic) char autoplaySettingEnabled;
@property (readonly, nonatomic) char shouldCoalescePlayingRecordsUpdates;
@property (readonly, nonatomic) PXEventCoalescer *playingRecordsEventCoalescer;
@property (readonly, copy, nonatomic) NSArray *currentRecords;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } currentVisibleRect;
@property (readonly, nonatomic) id<PXDisplayAsset> currentHoveredDisplayAsset;
@property (readonly, nonatomic) char canProvideGeometriesForRecords;
@property (readonly, nonatomic) char shouldEnablePlayback;
@property (readonly, nonatomic) char shouldPlayOnHover;
@property (readonly, nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } criticallyVisibleEdgeInsets;
@property (readonly, nonatomic) long long maxNumberOfPlayingItems;
@property (nonatomic) char isContentViewVisible;
@property (nonatomic) char isOneUpVisible;
@property (nonatomic) char isContextMenuInteractionActive;
@property (nonatomic) char isDragSessionActive;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_applicationDidResignActive:(id)a0;
- (void)setNeedsUpdate;
- (void)_applicationDidBecomeActive:(id)a0;
- (void)_handleOcclusionNotification:(id)a0;
- (char)_hasAnyPlaybackRecords;
- (void)_processInfoPowerStateDidChange:(id)a0;
- (void)_startPlaybackForRecords:(id)a0;
- (void)_stopPlaybackForRecords:(id)a0;
- (void)_updateActive;
- (void)_updateCanCreateRecords;
- (void)_updateLowPowerModeEnabled;
- (void)_updatePlaybackEnabled;
- (void)_updatePlayingRecords;
- (void)_updatePlayingRecordsImmediately;
- (void)_updateVisibilityOfRecords;
- (char)canPlayAsset:(id)a0;
- (char)canUpdatePlayingRecords;
- (void)checkInPlaybackRecordForDisplayAsset:(id)a0;
- (void)checkInPlaybackRecordForDisplayAssets:(id)a0;
- (id)checkOutPlaybackRecordForDisplayAsset:(id)a0 mediaProvider:(id)a1 geometryReference:(id)a2;
- (id)checkOutPlaybackRecordForDisplayAsset:(id)a0 mediaProvider:(id)a1 geometryReference:(id)a2 configurationBlock:(id /* block */)a3;
- (id)createPlaybackRecordForDisplayAsset:(id)a0 mediaProvider:(id)a1 geometryReference:(id)a2;
- (void)didUpdatePlayingRecords;
- (id)filterSortedRecordsToPlay:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForPlaybackRecord:(id)a0 minPlayableSize:(out struct CGSize { double x0; double x1; } *)a1;
- (void)invalidatePlaybackEnabled;
- (void)invalidatePlayingRecords;
- (char)isDisplayAssetEligibleForAutoPlayback:(id)a0;
- (char)isPlayingDisplayAsset:(id)a0;
- (void)outputEventSignaledForCoalescer:(id)a0;
- (void)preferencesDidChange;
- (void)visibleRectDidChange;
- (void)willCheckInPlaybackRecordForDisplayAsset:(id)a0;

@end
