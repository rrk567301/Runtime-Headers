@interface PKInputPointBaseFilter : NSObject <PKInputPointFilter>

@property (nonatomic) long long numInputPoints;
@property (nonatomic) struct { union { struct CGPoint { double x; double y; } point; struct CGPoint { double x; double y; } location; } ; double force; double azimuth; double altitude; double velocity; double directionAngle; double zPosition; double timestamp; char predicted; long long estimationUpdateIndex; double length; char hasEstimatedAltitudeAndAzimuth; double rollAngle; long long estimatedActiveInputProperties; long long estimatedActiveInputPropertiesExpectingUpdates; } filteredPoint;
@property (nonatomic) double maxZDistance;

- (id)init;
- (void)resetFilter;
- (void)addInputPoint:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; char x8; long long x9; double x10; char x11; double x12; long long x13; long long x14; })a0;
- (struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; char x8; long long x9; double x10; char x11; double x12; long long x13; long long x14; })currentFilteredPoint;

@end
