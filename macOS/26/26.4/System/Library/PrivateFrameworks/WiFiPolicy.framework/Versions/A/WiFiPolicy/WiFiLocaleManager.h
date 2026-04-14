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

- (BOOL)shouldDetermineNewLocale;
- (unsigned char)getNetworkReachability;
- (id)getRestrictedCountryCodeFromTimezone;
- (void)setCountryCode:(id)a0 source:(int)a1;
- (id)getLocaleUsingReverseGeocoder:(id)a0;
- (id)getRestrictedCountryCodeFromRegionInfo;
- (id)getLocaleCountryCode;
- (id)getLocaleFromTimezone;
- (id)getLocaleUsingBoundingBoxes:(id)a0;
- (void)determineAndSetLocale:(unsigned char)a0;
- (int)getLocaleSource;
- (void)didUpdateLocations:(id)a0;
- (id)getLocaleFromMcc;
- (void).cxx_destruct;
- (id)getLocaleFromLocation:(id)a0;
- (id)getLocaleFromPeer;
- (id)getLocaleUsingGeoLocationCache:(id)a0;
- (void)setLocaleTestParams:(id)a0;
- (id)init;
- (BOOL)isLocaleCheckSuspended;
- (void)determineLocale:(unsigned char)a0;
- (void)didFailWithError:(id)a0;
- (id)getLocaleFromUserDefaults;
- (BOOL)isDefaultCountryCode:(id)a0;
- (void)didChangeAuthorizationStatus;
- (void)retrySetCountryCode:(id)a0 source:(int)a1;
- (double)getLocaleLastUpdatedTime;
- (id)getLocaleFromRemoteClient;
- (id)getLocaleFromCompanion;
- (void)dealloc;
- (id)applySetCountryCodeExceptions:(id)a0;
- (id)getLocaleFromMultiple80211d;

@end
