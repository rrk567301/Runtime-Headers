@class NSArray;

@interface BWIrisDiscontinuity : NSObject {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _discontinuityTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _duration;
    NSArray *_timeSkews;
    NSArray *_recipe;
    long long _recipeMinDisplacement;
    long long _recipeMaxDisplacement;
    int _recipeIdentifier;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _targetFrameDuration;
    char _onlyRetime;
    char _haveSeenNonPositiveDisplacement;
    char _generateIFrames;
    char _minDisplacementIFrameRequested;
}

@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } time;
@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } targetFrameDuration;

- (void)dealloc;
- (char)containsVideoBufferTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 targetFrameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 onlyRetime:(char)a3 generateIFrames:(char)a4 timeSkews:(id)a5;
- (void)resetWithNewTimeSkews:(id)a0;
- (char)shouldKeepBufferWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 forceKeepingBuffer:(char)a1 nextAdjustedTimeInOut:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a2 discontinuityFrameAttributesOut:(struct { char x0; char x1; long long x2; int x3; } *)a3;

@end
