@class NSArray;

@interface AVPlaybackItemInspectorLoader : AVAssetMakeReadyForInspectionLoader {
    struct OpaqueFigPlaybackItem { } *_playbackItem;
    NSArray *_trackIDs;
    BOOL _shouldCacheDuration;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _cachedDuration;
}

@property (readonly, nonatomic, getter=_playbackItem) struct OpaqueFigPlaybackItem { } *playbackItem;

- (void)cancelLoading;
- (id)assetInspector;
- (unsigned long long)hash;
- (id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)a0;
- (id)initWithURL:(id)a0 playbackItem:(struct OpaqueFigPlaybackItem { } *)a1 trackIDs:(id)a2 dynamicBehavior:(BOOL)a3;
- (void)_removeFigObjectNotifications;
- (id)_playbackItemPropertiesForKeys:(id)a0;
- (struct OpaqueFigFormatReader { } *)_copyFormatReaderFromFigObjectWithFigErrorCode:(int *)a0;
- (BOOL)_inspectionRequiresAFormatReader;
- (void)dealloc;
- (Class)_classForTrackInspectors;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (id)_dictionaryOfSpecialGettersForKeyValueStatus;
- (BOOL)isEqual:(id)a0;
- (void)_addFigObjectNotifications;

@end
