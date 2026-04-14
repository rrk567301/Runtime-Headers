@interface WeatherCore.LocationManager : NSObject <CLLocationManagerDelegate> {
    void /* unknown type, empty encoding */ locationManager;
    void /* unknown type, empty encoding */ isUpdatingLocation;
    void /* unknown type, empty encoding */ hasReducedLocationUpdates;
    void /* unknown type, empty encoding */ _firstRevGeoComplete;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ _locationUpdateSignpostID;
    void /* unknown type, empty encoding */ _authorizationSignpostID;
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ notifyQueue;
    void /* unknown type, empty encoding */ locationActivityQueue;
    void /* unknown type, empty encoding */ geocodeManager;
    void /* unknown type, empty encoding */ locationCacheManager;
    void /* unknown type, empty encoding */ _authorizationState;
    void /* unknown type, empty encoding */ _currentLocationStatus;
}

- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
