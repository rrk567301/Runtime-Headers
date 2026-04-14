@interface CMAltimeter : NSObject

+ (long long)authorizationStatus;
+ (BOOL)isSignificantElevationAvailable;
+ (BOOL)isRelativeAltitudeAvailable;

- (void)queryElevationProfileFromDate:(id)a0 toDate:(id)a1 withBatchSize:(unsigned long long)a2 withHandler:(id /* block */)a3;
- (void)stopSignificantElevationUpdates;
- (void)querySignificantElevationChangeFromDate:(id)a0 toDate:(id)a1 withHandler:(id /* block */)a2;
- (void)startRelativeAltitudeUpdatesPrivateToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)startRelativeAltitudeUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)startSignificantElevationUpdatesWithHandler:(id /* block */)a0;
- (void)stopRelativeAltitudeUpdates;
- (void)stopRelativeAltitudeUpdatesPrivate;

@end
