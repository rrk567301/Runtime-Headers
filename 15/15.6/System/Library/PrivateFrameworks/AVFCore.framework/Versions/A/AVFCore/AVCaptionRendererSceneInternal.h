@interface AVCaptionRendererSceneInternal : NSObject {
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _timeRange;
    char _hasActiveCaptions;
    char _needsPeriodicRefresh;
}

@end
