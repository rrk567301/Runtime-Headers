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

- (void)connection:(id)a0 didReceiveToken:(id)a1 forTopic:(id)a2 identifier:(id)a3;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (void)setStateForProtoAccount;
- (void)pushEnable;
- (BOOL)_shouldSaveConfig;
- (BOOL)isNewsOrStocksEnabledLocality;
- (BOOL)isSearchOrSegmentEnabled;
- (void)setSessionManagementDefaults;
- (void)handleConfiguration;
- (void)migratePersonalizedAdsFromLAT;
- (void)handleAccountChange;
- (void)migratePersonalizedAdsOnboarding;
- (void).cxx_destruct;
- (BOOL)isAdEnabledLocality;
- (id)retrieveNewsRecord:(id *)a0;
- (void)pushDisable;
- (void)forceExpiration;
- (BOOL)isSearchAdsEnabled;
- (id)currentBundleID;
- (void)refreshConfiguration:(id /* block */)a0;
- (id)init;
- (long long)latestPersonalizedConsentVersion;
- (void)dealloc;

@end
