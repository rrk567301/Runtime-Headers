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
- (void)migratePersonalizedAdsFromLAT;
- (id)currentBundleID;
- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void)pushDisable;
- (BOOL)isSearchAdsEnabled;
- (void)migratePersonalizedAdsOnboarding;
- (long long)latestPersonalizedConsentVersion;
- (void)forceExpiration;
- (BOOL)isNewsOrStocksEnabledLocality;
- (void)refreshConfiguration:(id /* block */)a0;
- (void)handleAccountChange;
- (void)handleConfiguration;
- (void)dealloc;
- (void)pushEnable;
- (BOOL)_shouldSaveConfig;
- (BOOL)isAdEnabledLocality;
- (void).cxx_destruct;
- (void)setStateForProtoAccount;
- (void)setSessionManagementDefaults;
- (BOOL)isSearchOrSegmentEnabled;
- (id)init;
- (id)retrieveNewsRecord:(id *)a0;

@end
