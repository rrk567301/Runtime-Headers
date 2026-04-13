@class NSString, CLLocationManager;

@interface CalLocationAuthorization : NSObject <CLLocationManagerDelegate> {
    id _bundleOrBundleIdentifier;
    CLLocationManager *_locationManager;
    _Atomic int _status;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)authorizationStatusForBundleIdentifier:(id)a0;
+ (int)authorizationStatusForBundle:(id)a0;
+ (id)logHandle;
+ (int)authorizationStatusForBundleIdentifier:(id)a0 bundle:(id)a1;

@end
