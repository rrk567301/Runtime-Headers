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

+ (unsigned char)isLocationValid:(id)a0 uptoSeconds:(double)a1 requiredAccuracy:(double)a2;
+ (unsigned char)isLocationValid:(id)a0 uptoSeconds:(double)a1 isHighAccuracy:(unsigned char)a2;
+ (id)getStringOfState:(int)a0;
+ (id)getStringOfCallbackType:(int)a0;
+ (id)sharedWiFiLocationManager;
+ (void)logLocation:(id)a0 addPrefixString:(id)a1;

- (void)createCoreLocationObjects;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)setCLLocationUpdateParams:(id)a0;
- (void)locationManager:(id)a0 didChangeAuthorizationStatus:(int)a1;
- (void)locationManager:(id)a0 didVisit:(id)a1;
- (void)invokeClientsCallbackType:(int)a0 withLocation:(id)a1 withError:(id)a2;
- (void)requestLowAccuracyLocationUpdate;
- (void)cancelLocationRequestTimeOut;
- (void)requestHighAccuracyLocationUpdate;
- (void)dealloc;
- (void).cxx_destruct;
- (void)registerVisitCallbackFunctionPtr:(void /* function */ *)a0 withContext:(void *)a1;
- (void)locationRequestDidTimeOut;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)requestLeechedAccuracyLocationUpdate;
- (void)registerCallbackFunctionPtr:(void /* function */ *)a0 withContext:(void *)a1;
- (void)destroyCoreLocationObjects;
- (void)stopQueryingLocation;
- (id)init;

@end
