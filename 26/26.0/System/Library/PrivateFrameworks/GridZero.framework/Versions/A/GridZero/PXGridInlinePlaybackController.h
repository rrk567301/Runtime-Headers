@class NSArray, PXEventCoalescer, NSMapTable, PXUpdater, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, PXDisplayAsset;

@interface PXGridInlinePlaybackController : NSObject <PXEventCoalescerObserver> {
    NSObject<OS_dispatch_queue> *_recordsQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lookupLock;
    NSMapTable *_lookupLock_recordsByDisplayAsset;
    NSMutableArray *_currentlyPlayingRecords;
    NSMutableArray *_visibleRecords;
    PXUpdater *_updater;
}

@property (nonatomic) BOOL active;
@property (nonatomic) BOOL canCreateRecords;
@property (nonatomic) BOOL playbackEnabled;
@property (nonatomic) BOOL applicationActive;
@property (nonatomic) BOOL lowPowerModeEnabled;
@property (nonatomic) BOOL autoplaySettingEnabled;
@property (readonly, nonatomic) BOOL shouldCoalescePlayingRecordsUpdates;
@property (readonly, nonatomic) PXEventCoalescer *playingRecordsEventCoalescer;
@property (readonly, copy, nonatomic) NSArray *currentRecords;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } currentVisibleRect;
@property (readonly, nonatomic) id<PXDisplayAsset> currentHoveredDisplayAsset;
@property (readonly, nonatomic) BOOL canProvideGeometriesForRecords;
@property (readonly, nonatomic) BOOL shouldEnablePlayback;
@property (readonly, nonatomic) BOOL shouldPlayOnHover;
@property (readonly, nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } criticallyVisibleEdgeInsets;
@property (readonly, nonatomic) long long maxNumberOfPlayingItems;
@property (readonly, nonatomic) BOOL isSpatialPhotoPlaybackEnabled;
@property (nonatomic) BOOL isContentViewVisible;
@property (nonatomic) BOOL isOneUpVisible;
@property (nonatomic) BOOL isContextMenuInteractionActive;
@property (nonatomic) BOOL isDragSessionActive;

- (void)_applicationDidBecomeActive:(id)a0;
- (void)setNeedsUpdate;
- (id)init;
- (void).cxx_destruct;
- (void)_applicationDidResignActive:(id)a0;
- (void)removeAllRecords;
- (void)_processInfoPowerStateDidChange:(id)a0;
- (BOOL)canPlayAsset:(id)a0;
- (BOOL)canUpdatePlayingRecords;
- (void)checkInPlaybackRecordForDisplayAsset:(id)a0;
- (void)checkInPlaybackRecordForDisplayAssets:(id)a0;
- (void)checkInPlaybackRecordForDisplayAssets:(id)a0 record:(id)a1;
- (id)checkOutPlaybackRecordForDisplayAsset:(id)a0 mediaProvider:(id)a1 geometryReference:(id)a2 spriteSize:(struct CGSize { double x0; double x1; })a3 displayScale:(double)a4;
- (id)createPlaybackRecordForDisplayAsset:(id)a0 mediaProvider:(id)a1 geometryReference:(id)a2 spriteSize:(struct CGSize { double x0; double x1; })a3 displayScale:(double)a4;
- (void)didUpdatePlayingRecords;
- (id)filterSortedRecordsToPlay:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForPlaybackRecord:(id)a0 minPlayableSize:(out struct CGSize { double x0; double x1; } *)a1;
- (void)invalidatePlaybackEnabled;
- (void)invalidatePlayingRecords;
- (BOOL)isDisplayAssetEligibleForAutoPlayback:(id)a0;
- (void)outputEventSignaledForCoalescer:(id)a0;
- (void)visibleRectDidChange;
- (void)_gridPreferencesDidChange:(id)a0;
- (void)_handleOcclusionNotification:(id)a0;
- (BOOL)_hasAnyPlaybackRecords;
- (void)_startPlaybackForRecords:(id)a0;
- (void)_stopPlaybackForRecords:(id)a0;
- (void)_updateActive;
- (void)_updateCanCreateRecords;
- (void)_updateLowPowerModeEnabled;
- (void)_updatePlaybackEnabled;
- (void)_updatePlayingRecords;
- (void)_updatePlayingRecordsImmediately;
- (void)_updateVisibilityOfRecords;
- (id)checkOutPlaybackRecordForDisplayAsset:(id)a0 mediaProvider:(id)a1 geometryReference:(id)a2 spriteSize:(struct CGSize { double x0; double x1; })a3 displayScale:(double)a4 configurationBlock:(id /* block */)a5;
- (BOOL)isPlayingDisplayAsset:(id)a0;
- (void)willCheckInPlaybackRecordForDisplayAsset:(id)a0;

@end
