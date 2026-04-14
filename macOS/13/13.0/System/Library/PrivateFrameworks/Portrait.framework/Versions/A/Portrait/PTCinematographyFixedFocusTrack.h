@class PTCinematographyDetection;

@interface PTCinematographyFixedFocusTrack : PTCinematographyTrack

@property (readonly, nonatomic) float focusDistance;
@property (readonly, nonatomic) PTCinematographyDetection *detection;

- (void).cxx_destruct;
- (unsigned long long)detectionType;
- (unsigned long long)trackType;
- (BOOL)isDiscrete;
- (id)detectionNearestTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initWithDetection:(id)a0;
- (id)_asCinematographyDictionary;
- (id)_initWithCinematographyDictionary:(id)a0;
- (id)detectionAtOrBeforeTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)detectionsInTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)detectionInFrame:(id)a0;
- (id)_calculateTimeRanges;
- (id)initWithFocusDistance:(float)a0;
- (id)_fixedFocusDetectionAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
