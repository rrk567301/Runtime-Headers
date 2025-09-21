@class NSArray;

@interface PTCinematographyCustomTrack : PTCinematographyTrack

@property (retain, nonatomic) NSArray *detections;
@property (readonly, nonatomic) NSArray *allDetections;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)trackType;
- (void).cxx_destruct;
- (BOOL)isUserCreated;
- (BOOL)isDiscrete;
- (id)detectionNearestTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)_initWithCinematographyDictionary:(id)a0;
- (void)applyDetectionSmoothing;
- (id)detectionAtOrBeforeTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)detectionsInTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)initWithDetections:(id)a0;
- (id)_asCinematographyDictionary;
- (id)_initWithCustomTrack:(id)a0;
- (id)_trackByTrimmingToTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 subtracting:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)detectionInFrame:(id)a0;

@end
