@interface SiriInformationSearch.PommesLocationManager : NSObject <CLLocationManagerDelegate> {
    void /* unknown type, empty encoding */ status;
    void /* unknown type, empty encoding */ currentLocation;
    void /* unknown type, empty encoding */ locationSema;
    void /* unknown type, empty encoding */ manager;
    void /* unknown type, empty encoding */ userDefaults;
}

- (id)init;
- (void).cxx_destruct;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)locationManagerDidChangeAuthorization:(id)a0;

@end
