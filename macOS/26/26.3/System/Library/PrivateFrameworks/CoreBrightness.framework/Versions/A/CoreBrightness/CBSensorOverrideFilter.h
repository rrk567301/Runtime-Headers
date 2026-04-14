@interface CBSensorOverrideFilter : CBFilter {
    struct { float x; float y; } _chromaticity;
    double _illuminance;
}

@property int orientation;

- (id)filterEvent:(id)a0;
- (id)initWithData:(id)a0;
- (void)dealloc;

@end
