@class APSConnection, NSString, ADLoggingProfileMonitor;
@protocol NSObject;

@interface ADAdTrackingSchedulingManager : NSObject <APSConnectionDelegate>

@property (retain, nonatomic) ADLoggingProfileMonitor *loggingProfileMonitor;
@property (retain, nonatomic) id<NSObject> storeFrontNotifyToken;
@property (retain, nonatomic) id<NSObject> accountChangedNotifyToken;
@property (retain, nonatomic) APSConnection *pushConnection;
@property (nonatomic) BOOL isConfigRequestInFlight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (void)connection:(id)a0 didReceiveToken:(id)a1 forTopic:(id)a2 identifier:(id)a3;
- (void)migratePersonalizedAdsOnboarding;
- (void)migratePersonalizedAdsFromLAT;
- (BOOL)isAdEnabledLocality;
- (BOOL)isSearchOrSegmentEnabled;
- (BOOL)isSearchAdsEnabled;
- (id)retrieveNewsRecord:(id *)a0;
- (BOOL)isNewsOrStocksEnabledLocality;
- (long long)latestPersonalizedConsentVersion;
- (BOOL)_shouldSaveConfig;
- (void)handleConfiguration;
- (void)refreshConfiguration:(id /* block */)a0;
- (void)forceExpiration;
- (id)currentBundleID;
- (void)pushEnable;
- (void)pushDisable;
- (void)handleAccountChange;

@end
