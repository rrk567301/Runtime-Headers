@class AVWeakReference;

@interface AVPlaybackItemTrackInspector : AVAssetTrackInspector {
    struct OpaqueFigPlaybackItem { } *_playbackItem;
    int _trackID;
    unsigned int _mediaType;
    AVWeakReference *_weakReferenceToAsset;
}

- (struct CGSize { double x0; double x1; })naturalSize;
- (BOOL)isEnabled;
- (int)trackID;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRange;
- (struct OpaqueFigPlaybackItem { } *)_playbackItem;
- (id)formatDescriptions;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (float)peakDataRate;
- (id)_initWithAsset:(id)a0 trackID:(int)a1 trackIndex:(long long)a2;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (unsigned int)_figMediaType;
- (float)estimatedDataRate;
- (id)asset;
- (id)mediaType;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })samplePresentationTimeForTrackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })dimensions;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
