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
- (id)getLocaleFromMultiple80211d;
- (void)didChangeAuthorizationStatus;
- (void)retrySetCountryCode:(id)a0 source:(int)a1;
- (id)getLocaleFromPeer;
- (id)getRestrictedCountryCodeFromRegionInfo;
- (unsigned char)getNetworkReachability;
- (void)setLocaleTestParams:(id)a0;
- (id)getLocaleFromCompanion;
- (id)getLocaleUsingReverseGeocoder:(id)a0;
- (id)getLocaleFromUserDefaults;
- (void)determineAndSetLocale:(unsigned char)a0;
- (BOOL)isLocaleCheckSuspended;
- (int)getLocaleSource;
- (id)getLocaleCountryCode;
- (id)getLocaleFromRemoteClient;
- (BOOL)isDefaultCountryCode:(id)a0;
- (void)didFailWithError:(id)a0;
- (void)setCountryCode:(id)a0 source:(int)a1;
- (id)getLocaleFromMcc;
- (void).cxx_destruct;
- (double)getLocaleLastUpdatedTime;
- (id)applySetCountryCodeExceptions:(id)a0;
- (id)getLocaleUsingBoundingBoxes:(id)a0;
- (id)getLocaleFromLocation:(id)a0;
- (id)getRestrictedCountryCodeFromTimezone;
- (id)getLocaleUsingGeoLocationCache:(id)a0;
- (id)init;
- (void)determineLocale:(unsigned char)a0;
- (BOOL)shouldDetermineNewLocale;
- (id)getLocaleFromTimezone;
- (void)dealloc;

@end
