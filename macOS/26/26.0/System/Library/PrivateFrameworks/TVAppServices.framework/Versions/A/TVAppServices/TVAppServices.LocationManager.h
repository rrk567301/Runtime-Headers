@interface TVAppServices.LocationManager : NSObject <CLLocationManagerDelegate> {
    void /* unknown type, empty encoding */ _lastKnownLocation;
    void /* unknown type, empty encoding */ $__lazy_storage_$__authorizationStatus;
    void /* unknown type, empty encoding */ accessQueue;
    void /* unknown type, empty encoding */ locationClient;
    void /* unknown type, empty encoding */ locationAccessLock;
    void /* unknown type, empty encoding */ locationRequestInProgress;
    void /* unknown type, empty encoding */ requestsWaitingLocation;
    void /* unknown type, empty encoding */ cancellables;
}

- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
