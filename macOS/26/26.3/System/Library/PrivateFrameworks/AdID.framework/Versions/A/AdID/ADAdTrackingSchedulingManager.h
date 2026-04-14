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
- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (BOOL)_shouldSaveConfig;
- (BOOL)isNewsOrStocksEnabledLocality;
- (void)refreshConfiguration:(id /* block */)a0;
- (void)handleAccountChange;
- (void)pushEnable;
- (id)init;
- (id)currentBundleID;
- (void)setSessionManagementDefaults;
- (id)retrieveNewsRecord:(id *)a0;
- (void)forceExpiration;
- (long long)latestPersonalizedConsentVersion;
- (BOOL)isAdEnabledLocality;
- (void).cxx_destruct;
- (void)setStateForProtoAccount;
- (void)migratePersonalizedAdsFromLAT;
- (BOOL)isSearchAdsEnabled;
- (void)dealloc;
- (void)migratePersonalizedAdsOnboarding;
- (void)pushDisable;
- (BOOL)isSearchOrSegmentEnabled;
- (void)handleConfiguration;

@end
