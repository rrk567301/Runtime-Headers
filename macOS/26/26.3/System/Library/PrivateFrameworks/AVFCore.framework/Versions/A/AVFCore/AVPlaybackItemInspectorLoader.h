@class NSArray;

@interface AVPlaybackItemInspectorLoader : AVAssetMakeReadyForInspectionLoader {
    struct OpaqueFigPlaybackItem { } *_playbackItem;
    NSArray *_trackIDs;
    BOOL _shouldCacheDuration;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _cachedDuration;
}

@property (readonly, nonatomic, getter=_playbackItem) struct OpaqueFigPlaybackItem { } *playbackItem;

- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (id)initWithURL:(id)a0 playbackItem:(struct OpaqueFigPlaybackItem { } *)a1 trackIDs:(id)a2 dynamicBehavior:(BOOL)a3;
- (void)_removeFigObjectNotifications;
- (void)cancelLoading;
- (Class)_classForTrackInspectors;
- (id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)a0;
- (struct OpaqueFigFormatReader { } *)_copyFormatReaderFromFigObjectWithFigErrorCode:(int *)a0;
- (void)_addFigObjectNotifications;
- (void)dealloc;
- (id)_playbackItemPropertiesForKeys:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)_inspectionRequiresAFormatReader;
- (id)assetInspector;
- (id)_dictionaryOfSpecialGettersForKeyValueStatus;

@end
