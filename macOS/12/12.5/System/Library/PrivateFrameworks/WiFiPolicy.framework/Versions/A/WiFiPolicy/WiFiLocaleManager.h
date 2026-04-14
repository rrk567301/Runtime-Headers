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
@property (retain) NSDateFormatter *dateFormatter;
@property (retain) WiFiLocationManager *locationManager;
@property unsigned char isWaitingForLocationUpdate;
@property unsigned char testModeEnabled;
@property int testMcc;
@property (retain) NSString *testHost11d;
@property (retain) NSString *testPeer;
@property (retain) NSString *testTimeZoneCC;
@property (weak, nonatomic) id<WiFiLocaleManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getStringOfLocaleSource:(int)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)didUpdateLocations:(id)a0;
- (void)didFailWithError:(id)a0;
- (void)determineLocale:(unsigned char)a0;
- (BOOL)isDefaultCountryCode:(id)a0;
- (id)getLocaleFromCompanion;
- (id)getLocaleFromMcc;
- (id)getLocaleFromLocation:(id)a0;
- (id)getLocaleFromMultiple80211d;
- (id)getLocaleFromPeer;
- (id)getLocaleFromTimezone;
- (void)setCountryCode:(id)a0 source:(int)a1 retry:(BOOL)a2;
- (id)getLocaleUsingBoundingBoxes:(id)a0;
- (id)getLocaleUsingReverseGeocoder:(id)a0;
- (id)getRestrictedCountryCodeFromTimezone;
- (id)getRestrictedCountryCodeFromRegionInfo;
- (id)applySetCountryCodeExceptions:(id)a0;
- (void)retrySetCountryCode:(id)a0 source:(int)a1;
- (unsigned char)getNetworkReachability;
- (void)didChangeAuthorizationStatus;
- (void)determineAndSetLocale:(unsigned char)a0;
- (id)getLocaleCountryCode;
- (int)getLocaleSource;
- (double)getLocaleLastUpdatedTime;
- (BOOL)isLocaleCheckSuspended;
- (void)setLocaleTestParams:(id)a0;

@end
