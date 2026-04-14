@interface SiriInformationSearch.PommesLocationManager : NSObject <CLLocationManagerDelegate> {
    void /* unknown type, empty encoding */ status;
    void /* unknown type, empty encoding */ manager;
}

- (id)init;
- (void).cxx_destruct;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManagerDidChangeAuthorization:(id)a0;

@end
