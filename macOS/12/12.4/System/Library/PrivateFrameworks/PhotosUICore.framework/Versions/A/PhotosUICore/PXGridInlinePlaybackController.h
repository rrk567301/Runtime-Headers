@class NSArray, NSString, NSMapTable, PXUpdater, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface PXGridInlinePlaybackController : NSObject <PXPreferencesObserver> {
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
@property (readonly, copy, nonatomic) NSArray *currentRecords;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } currentVisibleRect;
@property (readonly, nonatomic) BOOL canProvideGeometriesForRecords;
@property (readonly, nonatomic) BOOL shouldEnablePlayback;
@property (readonly, nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } criticallyVisibleEdgeInsets;
@property (nonatomic) BOOL isContentViewVisible;
@property (nonatomic) BOOL isOneUpVisible;
@property (nonatomic) BOOL isContextMenuInteractionActive;
@property (nonatomic) BOOL isDragSessionActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setNeedsUpdate;
- (void)visibleRectDidChange;
- (void)_applicationDidBecomeActive:(id)a0;
- (void)preferencesDidChange;
- (void)_processInfoPowerStateDidChange:(id)a0;
- (void)_applicationDidResignActive:(id)a0;
- (id)checkOutPlaybackRecordForDisplayAsset:(id)a0 mediaProvider:(id)a1 geometryReference:(id)a2;
- (void)checkInPlaybackRecordForDisplayAssets:(id)a0;
- (void)invalidatePlaybackEnabled;
- (void)invalidatePlayingRecords;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForPlaybackRecord:(id)a0 minPlayableSize:(out struct CGSize { double x0; double x1; } *)a1;
- (id)createPlaybackRecordForDisplayAsset:(id)a0 mediaProvider:(id)a1 geometryReference:(id)a2;
- (BOOL)canUpdatePlayingRecords;
- (void)didUpdatePlayingRecords;
- (id)filterSortedRecordsToPlay:(id)a0;
- (BOOL)canPlayAsset:(id)a0;
- (void)_updateActive;
- (void)_updateLowPowerModeEnabled;
- (void)_updateCanCreateRecords;
- (void)_updatePlaybackEnabled;
- (void)_updatePlayingRecords;
- (void)_updateVisibilityOfRecords;
- (void)_handleOcclusionNotification:(id)a0;
- (id)checkOutPlaybackRecordForDisplayAsset:(id)a0 mediaProvider:(id)a1 geometryReference:(id)a2 configurationBlock:(id /* block */)a3;
- (BOOL)isDisplayAssetEligibleForAutoPlayback:(id)a0;
- (BOOL)_hasAnyPlaybackRecords;
- (void)_stopPlaybackForRecords:(id)a0;
- (void)_startPlaybackForRecords:(id)a0;
- (void)willCheckInPlaybackRecordForDisplayAsset:(id)a0;
- (void)checkInPlaybackRecordForDisplayAsset:(id)a0;
- (BOOL)isPlayingDisplayAsset:(id)a0;

@end
