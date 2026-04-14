@interface TeaFoundation.BackgroundFetchManager : NSObject <CLLocationManagerDelegate> {
    void /* unknown type, empty encoding */ workers;
    void /* unknown type, empty encoding */ configuredTriggers;
    void /* unknown type, empty encoding */ locationManager;
}

- (void)locationManager:(id)a0 didExitRegion:(id)a1;
- (void)locationManager:(id)a0 didStartMonitoringForRegion:(id)a1;
- (void)locationManager:(id)a0 monitoringDidFailForRegion:(id)a1 withError:(id)a2;
- (id)init;
- (void).cxx_destruct;

@end
