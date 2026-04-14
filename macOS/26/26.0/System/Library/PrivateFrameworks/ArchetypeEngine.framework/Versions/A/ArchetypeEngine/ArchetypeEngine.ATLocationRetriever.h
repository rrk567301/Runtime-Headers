@interface ArchetypeEngine.ATLocationRetriever : NSObject <CLLocationManagerDelegate> {
    void /* unknown type, empty encoding */ locationManager;
    void /* unknown type, empty encoding */ semaphore;
}

- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
