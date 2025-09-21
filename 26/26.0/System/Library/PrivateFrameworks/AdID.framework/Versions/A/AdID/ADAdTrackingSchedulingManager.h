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
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void)connection:(id)a0 didReceiveToken:(id)a1 forTopic:(id)a2 identifier:(id)a3;
- (void)dealloc;
- (void)migratePersonalizedAdsOnboarding;
- (void)handleConfiguration;
- (BOOL)isAdEnabledLocality;
- (BOOL)_shouldSaveConfig;
- (void)pushDisable;
- (id)retrieveNewsRecord:(id *)a0;
- (id)init;
- (void)setSessionManagementDefaults;
- (BOOL)isSearchAdsEnabled;
- (long long)latestPersonalizedConsentVersion;
- (void)handleAccountChange;
- (void)forceExpiration;
- (void)refreshConfiguration:(id /* block */)a0;
- (BOOL)isNewsOrStocksEnabledLocality;
- (void)migratePersonalizedAdsFromLAT;
- (void)setStateForProtoAccount;
- (id)currentBundleID;
- (void)pushEnable;
- (void).cxx_destruct;
- (BOOL)isSearchOrSegmentEnabled;

@end
