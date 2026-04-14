@class NSArray;

@interface AVPlaybackItemInspector : AVAssetInspector {
    struct OpaqueFigPlaybackItem { } *_playbackItem;
    NSArray *_trackIDs;
}

@property (retain, nonatomic, getter=_playbackItem, setter=_setPlaybackItem:) struct OpaqueFigPlaybackItem { } *playbackItem;

- (struct CGSize { double x0; double x1; })naturalSize;
- (id)lyrics;
- (id)commonMetadata;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (id)metadataForFormat:(id)a0;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (id)initWithPlaybackItem:(struct OpaqueFigPlaybackItem { } *)a0 trackIDs:(id)a1;
- (id)availableMetadataFormats;
- (id)compatibleTrackForCompositionTrack:(id)a0;
- (long long)trackCount;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (BOOL)providesPreciseDurationAndTiming;
- (unsigned long long)hash;
- (id)trackIDs;

@end
