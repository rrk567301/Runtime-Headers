@interface SnippetUI.MapViewModel : NSObject <CLLocationManagerDelegate> {
    void /* unknown type, empty encoding */ _didFinishLoading;
    void /* unknown type, empty encoding */ _canShowUserLocation;
    void /* unknown type, empty encoding */ _userLocation;
    void /* unknown type, empty encoding */ mapItems;
    void /* unknown type, empty encoding */ mapServiceTickets;
    void /* unknown type, empty encoding */ $__lazy_storage_$_locationManager;
}

- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
