@class NSArray;

@interface AVPlaybackItemInspector : AVAssetInspector {
    struct OpaqueFigPlaybackItem { } *_playbackItem;
    NSArray *_trackIDs;
}

@property (retain, nonatomic, getter=_playbackItem, setter=_setPlaybackItem:) struct OpaqueFigPlaybackItem { } *playbackItem;

- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (id)availableMetadataFormats;
- (id)metadataForFormat:(id)a0;
- (id)commonMetadata;
- (struct CGSize { double x0; double x1; })naturalSize;
- (id)lyrics;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (id)trackIDs;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (long long)trackCount;
- (BOOL)providesPreciseDurationAndTiming;
- (id)compatibleTrackForCompositionTrack:(id)a0;
- (id)initWithPlaybackItem:(struct OpaqueFigPlaybackItem { } *)a0 trackIDs:(id)a1;
- (void)dealloc;

@end
