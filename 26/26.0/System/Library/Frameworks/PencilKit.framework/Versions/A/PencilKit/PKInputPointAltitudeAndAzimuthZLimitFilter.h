@interface PKInputPointAltitudeAndAzimuthZLimitFilter : PKInputPointBaseFilter

@property (nonatomic) double altitudeAndAzimuthZLimit;
@property (nonatomic) double lastKnownAzimuth;
@property (nonatomic) double lastKnownAltitude;

- (void)addInputPoint:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; double x11; BOOL x12; double x13; long long x14; long long x15; })a0;

@end
