@class NSArray;

@interface AVPlaybackItemInspectorLoader : AVAssetMakeReadyForInspectionLoader {
    struct OpaqueFigPlaybackItem { } *_playbackItem;
    NSArray *_trackIDs;
    char _shouldCacheDuration;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _cachedDuration;
}

@property (readonly, nonatomic, getter=_playbackItem) struct OpaqueFigPlaybackItem { } *playbackItem;

- (void)dealloc;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (id)_playbackItemPropertiesForKeys:(id)a0;
- (void)_addFigObjectNotifications;
- (Class)_classForTrackInspectors;
- (struct OpaqueFigFormatReader { } *)_copyFormatReaderFromFigObjectWithFigErrorCode:(int *)a0;
- (id)_dictionaryOfSpecialGettersForKeyValueStatus;
- (char)_inspectionRequiresAFormatReader;
- (id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)a0;
- (void)_removeFigObjectNotifications;
- (id)assetInspector;
- (void)cancelLoading;
- (id)initWithURL:(id)a0 playbackItem:(struct OpaqueFigPlaybackItem { } *)a1 trackIDs:(id)a2 dynamicBehavior:(char)a3;

@end
