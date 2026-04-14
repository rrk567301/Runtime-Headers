@class NSString, NSXPCConnection, CLLocationManager, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface WLKLocationManager : NSObject <CLLocationManagerDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clQueue;
@property (copy, nonatomic) id /* block */ locationUpdateBlock;
@property (retain, nonatomic) CLLocationManager *clLocationManager;
@property (nonatomic) int didChangeNotificationToken;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) NSDictionary *lastKnownLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultLocationManager;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_connection;
- (id)_dictionaryRepresentation;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (long long)authorizationStatus;
- (void)requestAuthorization;
- (BOOL)_locationServicesEnabled;
- (void)requestAuthorizationWithForcedPrompt:(BOOL)a0;
- (void)fetchAuthorizationStatus:(id /* block */)a0;
- (void)_networkReachbilityDidChange:(id)a0;
- (BOOL)isAuthorizationApproved;
- (void)_updateLocationIfNeeded;
- (void)_requestActiveLocationChangeUpdates;
- (BOOL)_isIgnorableLocationError:(id)a0;
- (id)_copyLastKnownLocation;
- (BOOL)_isLastKnownLocation:(id)a0 freshForMaxAge:(double)a1 fromNewTimestamp:(double)a2;
- (BOOL)_isLastKnownLocationFresh:(id)a0;
- (BOOL)_shouldLastKnownLocation:(id)a0 beUpdatedTo:(id)a1;
- (BOOL)_isLastKnownLocation:(id)a0 significantlyOlderThanNewLocation:(id)a1;
- (id)_createLocationObjFromLocationDictionary:(id)a0;
- (double)_getDistanceOfLastKnownLocationDictionary:(id)a0 fromLocation:(id)a1;
- (void)_setLastKnownLocation:(id)a0;
- (void)_requestRecentCLLocation:(id /* block */)a0;
- (void)_requestCLLocationUpdates:(id /* block */)a0;
- (id)_dictionaryForCLLocation:(id)a0;
- (long long)_statusForCLAuthorizationStatus:(int)a0;
- (void)_readFromDisk;
- (id)_dictionaryOnDisk;
- (id)_dictionaryOnDisk:(BOOL)a0;
- (void)_encryptLastKnownLocation:(id)a0;
- (id)_decryptLastKnownLocation;
- (void)_deleteLastKnownLocation;
- (id)_locationQueryParameters;
- (void)_locationAuthorizationStatus:(id /* block */)a0;

@end
