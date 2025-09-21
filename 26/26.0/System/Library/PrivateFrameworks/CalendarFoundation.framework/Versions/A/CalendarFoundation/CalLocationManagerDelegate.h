@class NSString, CLLocation, CLLocationManager;

@interface CalLocationManagerDelegate : NSObject <CLLocationManagerDelegate> {
    CLLocationManager *_manager;
    NSString *_currentBundleID;
}

@property (retain) CLLocation *currentLocation;
@property (copy) id /* block */ completionBlock;
@property BOOL didFinish;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)dealloc;
- (void)cancel;
- (void).cxx_destruct;
- (void)timeout;
- (void)didFinishLocationLookupWithLocation:(id)a0 error:(id)a1;
- (id)initWithCurrentBundleID:(id)a0 completionBlock:(id /* block */)a1;

@end
