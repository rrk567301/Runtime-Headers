@interface CMAltimeter : NSObject

+ (long long)authorizationStatus;
+ (BOOL)isRelativeAltitudeAvailable;
+ (BOOL)isSignificantElevationAvailable;

- (void)startRelativeAltitudeUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)stopRelativeAltitudeUpdates;
- (void)startSignificantElevationUpdatesWithHandler:(id /* block */)a0;
- (void)stopSignificantElevationUpdates;
- (void)querySignificantElevationChangeFromDate:(id)a0 toDate:(id)a1 withHandler:(id /* block */)a2;
- (void)startRelativeAltitudeUpdatesPrivateToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)stopRelativeAltitudeUpdatesPrivate;

@end
