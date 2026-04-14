@class NSString, NSTimer, CLLocationManager, CLLocation;
@protocol NSPPrivacyProxyLocationMonitorDelegate;

@interface NSPPrivacyProxyLocationMonitor : NSObject <CLLocationManagerDelegate>

@property (retain, nonatomic) CLLocationManager *clLocationManager;
@property (retain) CLLocation *latestLocation;
@property (retain) NSString *latestCountryPlusTimezone;
@property (retain, nonatomic) NSTimer *locationMonitorTimer;
@property (nonatomic) BOOL isMonitoringEnabled;
@property (nonatomic, setter=setMonitorTimeInterval:) double monitorTimeInterval;
@property (weak, nonatomic) id<NSPPrivacyProxyLocationMonitorDelegate> delegate;
@property (readonly) BOOL isAuthorized;
@property (readonly) NSString *currentCountryPlusTimezone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedMonitor;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)startLocationMonitor;
- (void)stopLocationMonitor;
- (void)setUserEventAgentTimer;
- (BOOL)isCoreWLANAuthorized;
- (id)geohashFromLocation:(id)a0;
- (BOOL)checkSignificantLocationChange:(id)a0;
- (void)handleLocationUpdate:(id)a0;
- (void)refreshCountryPlusTimezone:(id /* block */)a0;

@end
