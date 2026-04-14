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

- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (void)connection:(id)a0 didReceiveToken:(id)a1 forTopic:(id)a2 identifier:(id)a3;
- (void)pushDisable;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (BOOL)isNewsOrStocksEnabledLocality;
- (BOOL)_shouldSaveConfig;
- (void)pushEnable;
- (void)setStateForProtoAccount;
- (void).cxx_destruct;
- (id)currentBundleID;
- (id)init;
- (void)migratePersonalizedAdsFromLAT;
- (id)retrieveNewsRecord:(id *)a0;
- (void)migratePersonalizedAdsOnboarding;
- (BOOL)isAdEnabledLocality;
- (BOOL)isSearchOrSegmentEnabled;
- (void)setSessionManagementDefaults;
- (void)handleAccountChange;
- (long long)latestPersonalizedConsentVersion;
- (void)forceExpiration;
- (void)dealloc;
- (void)refreshConfiguration:(id /* block */)a0;
- (BOOL)isSearchAdsEnabled;
- (void)handleConfiguration;

@end
