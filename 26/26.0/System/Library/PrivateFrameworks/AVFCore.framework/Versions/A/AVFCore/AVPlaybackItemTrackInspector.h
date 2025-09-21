@class AVWeakReference;

@interface AVPlaybackItemTrackInspector : AVAssetTrackInspector {
    struct OpaqueFigPlaybackItem { } *_playbackItem;
    int _trackID;
    unsigned int _mediaType;
    AVWeakReference *_weakReferenceToAsset;
}

- (struct CGSize { double x0; double x1; })naturalSize;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRange;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (void)dealloc;
- (struct OpaqueFigPlaybackItem { } *)_playbackItem;
- (BOOL)isEnabled;
- (unsigned int)_figMediaType;
- (id)formatDescriptions;
- (id)_initWithAsset:(id)a0 trackID:(int)a1 trackIndex:(long long)a2;
- (float)peakDataRate;
- (int)trackID;
- (float)estimatedDataRate;
- (struct CGSize { double x0; double x1; })dimensions;
- (id)mediaType;
- (id)asset;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })samplePresentationTimeForTrackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
