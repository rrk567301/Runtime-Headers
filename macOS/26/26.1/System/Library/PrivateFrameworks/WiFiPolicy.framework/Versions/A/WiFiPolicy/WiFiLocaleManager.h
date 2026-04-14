@class NSString, NSDateFormatter, WiFiLocationManager, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, WiFiLocaleManagerDelegate;

@interface WiFiLocaleManager : NSObject <WiFiLocationManagerDelegate>

@property BOOL localeCheckSuspended;
@property (retain) NSString *localeCountryCode;
@property int localeSource;
@property double localeTimeout;
@property double localeLastUpdatedTime;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSObject<OS_dispatch_source> *localeTimer;
@property (retain) NSObject<OS_dispatch_source> *retryTimer;
@property int aggressiveRetryAttemptsRemaining;
@property (retain) NSDateFormatter *dateFormatter;
@property (retain) WiFiLocationManager *locationManager;
@property unsigned char isWaitingForLocationUpdate;
@property unsigned char testModeEnabled;
@property int testMcc;
@property (retain) NSString *testHost11d;
@property (retain) NSString *testPeer;
@property (retain) NSString *testTimeZoneCC;
@property (retain) NSString *testUserDefaults;
@property (weak, nonatomic) id<WiFiLocaleManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getStringOfLocaleSource:(int)a0;

- (void)didUpdateLocations:(id)a0;
- (id)applySetCountryCodeExceptions:(id)a0;
- (BOOL)isDefaultCountryCode:(id)a0;
- (id)getLocaleFromPeer;
- (id)getRestrictedCountryCodeFromRegionInfo;
- (int)getLocaleSource;
- (id)getLocaleUsingGeoLocationCache:(id)a0;
- (id)getLocaleFromMcc;
- (BOOL)isLocaleCheckSuspended;
- (id)getLocaleFromMultiple80211d;
- (id)getLocaleFromUserDefaults;
- (void)didChangeAuthorizationStatus;
- (unsigned char)getNetworkReachability;
- (id)getLocaleUsingBoundingBoxes:(id)a0;
- (void)dealloc;
- (id)getLocaleFromCompanion;
- (id)getLocaleFromLocation:(id)a0;
- (void)didFailWithError:(id)a0;
- (void)determineAndSetLocale:(unsigned char)a0;
- (id)getLocaleFromRemoteClient;
- (void).cxx_destruct;
- (id)getLocaleUsingReverseGeocoder:(id)a0;
- (id)getLocaleFromTimezone;
- (id)getRestrictedCountryCodeFromTimezone;
- (void)determineLocale:(unsigned char)a0;
- (void)retrySetCountryCode:(id)a0 source:(int)a1;
- (void)setCountryCode:(id)a0 source:(int)a1;
- (double)getLocaleLastUpdatedTime;
- (BOOL)shouldDetermineNewLocale;
- (void)setLocaleTestParams:(id)a0;
- (id)init;
- (id)getLocaleCountryCode;

@end
