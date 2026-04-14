@class AVWeakReference;

@interface AVPlaybackItemTrackInspector : AVAssetTrackInspector {
    struct OpaqueFigPlaybackItem { } *_playbackItem;
    int _trackID;
    unsigned int _mediaType;
    AVWeakReference *_weakReferenceToAsset;
}

- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (struct CGSize { double x0; double x1; })naturalSize;
- (struct CGSize { double x0; double x1; })dimensions;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRange;
- (int)trackID;
- (id)formatDescriptions;
- (id)mediaType;
- (float)estimatedDataRate;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEnabled;
- (unsigned long long)hash;
- (unsigned int)_figMediaType;
- (id)asset;
- (float)peakDataRate;
- (struct OpaqueFigPlaybackItem { } *)_playbackItem;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })samplePresentationTimeForTrackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)_initWithAsset:(id)a0 trackID:(int)a1 trackIndex:(long long)a2;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (void)dealloc;

@end
