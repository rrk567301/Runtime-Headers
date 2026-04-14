@class NSString, CLLocationManager, CLLocation, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, WiFiLocationManagerDelegate;

@interface WiFiLocationManager : NSObject <CLLocationManagerDelegate>

@property (retain, nonatomic) CLLocationManager *clLocationManager;
@property (retain, nonatomic) NSMutableArray *clientsDataArray;
@property (retain, nonatomic) NSMutableArray *visitClientsDataArray;
@property int locationManagerState;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain) CLLocation *latestLocation;
@property unsigned char isAuthorized;
@property (weak, nonatomic) id<WiFiLocationManagerDelegate> delegate;
@property (nonatomic) unsigned char shouldMonitorVisits;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getStringOfCallbackType:(int)a0;
+ (id)sharedWiFiLocationManager;
+ (unsigned char)isLocationValid:(id)a0 uptoSeconds:(double)a1 requiredAccuracy:(double)a2;
+ (id)getStringOfState:(int)a0;
+ (unsigned char)isLocationValid:(id)a0 uptoSeconds:(double)a1 isHighAccuracy:(unsigned char)a2;
+ (void)logLocation:(id)a0 addPrefixString:(id)a1;

- (void)requestHighAccuracyLocationUpdate;
- (void)destroyCoreLocationObjects;
- (void)locationManager:(id)a0 didChangeAuthorizationStatus:(int)a1;
- (void)locationRequestDidTimeOut;
- (void)locationManager:(id)a0 didVisit:(id)a1;
- (void)registerVisitCallbackFunctionPtr:(void /* function */ *)a0 withContext:(void *)a1;
- (void)stopQueryingLocation;
- (void)createCoreLocationObjects;
- (void)requestLeechedAccuracyLocationUpdate;
- (void)setCLLocationUpdateParams:(id)a0;
- (void)invokeClientsCallbackType:(int)a0 withLocation:(id)a1 withError:(id)a2;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;
- (void)registerCallbackFunctionPtr:(void /* function */ *)a0 withContext:(void *)a1;
- (void)requestLowAccuracyLocationUpdate;
- (id)init;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)dealloc;
- (void)cancelLocationRequestTimeOut;

@end
