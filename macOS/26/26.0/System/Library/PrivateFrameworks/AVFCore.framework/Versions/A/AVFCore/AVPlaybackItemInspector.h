@class NSArray;

@interface AVPlaybackItemInspector : AVAssetInspector {
    struct OpaqueFigPlaybackItem { } *_playbackItem;
    NSArray *_trackIDs;
}

@property (retain, nonatomic, getter=_playbackItem, setter=_setPlaybackItem:) struct OpaqueFigPlaybackItem { } *playbackItem;

- (id)commonMetadata;
- (struct CGSize { double x0; double x1; })naturalSize;
- (id)lyrics;
- (id)availableMetadataFormats;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (id)metadataForFormat:(id)a0;
- (void)dealloc;
- (BOOL)providesPreciseDurationAndTiming;
- (id)initWithPlaybackItem:(struct OpaqueFigPlaybackItem { } *)a0 trackIDs:(id)a1;
- (long long)trackCount;
- (id)trackIDs;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (unsigned long long)hash;
- (id)compatibleTrackForCompositionTrack:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
