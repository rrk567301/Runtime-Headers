@class GEOLocationShifter;

@interface RTLocationShifter : NSObject {
    GEOLocationShifter *_geoLocationShifter;
}

+ (BOOL)isLocationShiftRequiredForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;

- (id)init;
- (void)shiftLocation:(id)a0 handler:(id /* block */)a1;
- (id)shiftedLocation:(id)a0 allowNetwork:(BOOL)a1 error:(id *)a2;
- (void)shiftCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 accuracy:(double)a1 handler:(id /* block */)a2;
- (void).cxx_destruct;

@end
