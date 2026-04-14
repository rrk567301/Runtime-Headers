@class AVWeakReference;

@interface AVPlaybackItemTrackInspector : AVAssetTrackInspector {
    struct OpaqueFigPlaybackItem { } *_playbackItem;
    int _trackID;
    unsigned int _mediaType;
    AVWeakReference *_weakReferenceToAsset;
}

- (unsigned int)_figMediaType;
- (float)peakDataRate;
- (struct CGSize { double x0; double x1; })naturalSize;
- (int)trackID;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (id)asset;
- (id)_initWithAsset:(id)a0 trackID:(int)a1 trackIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })dimensions;
- (float)estimatedDataRate;
- (unsigned long long)hash;
- (id)formatDescriptions;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRange;
- (BOOL)isEnabled;
- (void)dealloc;
- (struct OpaqueFigPlaybackItem { } *)_playbackItem;
- (id)mediaType;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (BOOL)isEqual:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })samplePresentationTimeForTrackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
