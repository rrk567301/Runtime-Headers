@class NSMutableArray;

@interface WRM_iRATInterface : WRMClientInterface {
    NSMutableArray *mAppLists;
    BOOL mClientSupportsMultipleAppTypes;
    id /* block */ mObserver;
    id /* block */ mOppModeObserver;
    id /* block */ mProximitySubscribeLinkRecommendationHandler;
    id /* block */ mProximityGetLinkRecommendationHandler;
    id /* block */ mGetLinkRecommendationMetricsHandler;
    id /* block */ mOppBtLQMObserver;
    id /* block */ mLowPowerModePeriodicWakeUpCb;
    id /* block */ mVoiceLqmCb;
    BOOL mLinkPreferenceSubscriptionEnabled;
    BOOL mTelephoneAssertionEnabled;
    BOOL mTelephonyStateEnabled;
    BOOL mLocationAssertionEnabled;
    BOOL mProximitySubscribeLinkRecommendationEnabled;
    BOOL mVoiceLqmCbEnabled;
    BOOL mProximityGetLinkRecommendationEnabled;
    BOOL mGetLinkRecommendationMetricsHandlerEnabled;
    int mLocationState;
    NSMutableArray *mProximityLinkRecommendationList;
    BOOL mBBAssertionBGAppActive;
}

- (void)reConnect;
- (void)statusUpdateAppType:(int)a0 linkType:(int)a1 serviceStatus:(BOOL)a2;
- (void)expediteCellularForReason:(BOOL)a0 reason:(id)a1;
- (void)handleNotification:(id)a0 :(BOOL)a1;
- (void)unregisterClient;
- (void)getLinkRecommendationMetrics:(id /* block */)a0;
- (void)subscribeAppType:(struct { int x0; int x1; int x2; int x3; })a0 observer:(id /* block */)a1;
- (void)subscribeStandaloneLinkRecommendation:(id /* block */)a0;
- (void)processOperatingModeNotification:(id)a0;
- (void)expediteBBAssertionBGAppActive:(BOOL)a0 handler:(id /* block */)a1;
- (void)subscribeVoiceLqmNotification:(id /* block */)a0;
- (void)_expediteBBAssertionBGAppActive_sync:(BOOL)a0 handler:(id /* block */)a1;
- (void)subscribeBtLqmScoreNotification:(id /* block */)a0;
- (void)addAppType:(id)a0;
- (void)subscribeDataLinkRecommendation:(id /* block */)a0;
- (void)getMLPredictedThroughput:(id /* block */)a0 options:(id)a1;
- (void)removeAppType:(id)a0;
- (void)processBTLQMNotification:(id)a0;
- (void).cxx_destruct;
- (void)subscribeOperatingModeChangeNotification:(id /* block */)a0;
- (void)subscribeMultipleAppTypes:(id)a0 observer:(id /* block */)a1;
- (void)setTelephonyEnabled:(BOOL)a0;
- (void)processNotificationList:(id)a0 :(unsigned long long)a1;
- (void)registerClient:(int)a0 queue:(id)a1;
- (void)getProximityLinkRecommendation:(BOOL)a0 recommendation:(id /* block */)a1;
- (id)init;
- (void)subscribeProximityLinkRecommendation:(id /* block */)a0;
- (void)statusUpdateAppLinkPreference:(int)a0 status:(BOOL)a1;
- (void)assertCommCenterBaseBand:(int)a0;
- (void)assertCommCenterBaseBandMode:(int)a0;
- (int)getStatusUpdateMessageType:(int)a0;
- (void)getVoiceLqmValue:(long long)a0 completionHandler:(id /* block */)a1;
- (void)removeProximityLinkRecommendationType:(id)a0;
- (void)processLowPowerModePeriodicWakeUpNotification;
- (void)processNotificationListForTerminus:(id)a0;
- (void)subscribeLowPowerModePeriodicWakeupNotification:(id /* block */)a0;
- (void)getStreamingInfo:(id /* block */)a0 linkType:(int)a1;
- (void)processVoiceLqmNotification:(id)a0;
- (void)addProximityLinkRecommendationType:(id)a0;
- (int)getSubscribeMessageType:(int)a0;
- (void)processMetricsNotificationReport:(id)a0;

@end
