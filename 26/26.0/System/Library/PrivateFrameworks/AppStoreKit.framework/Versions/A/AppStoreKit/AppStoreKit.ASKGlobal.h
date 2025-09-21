@class _TtC11AppStoreKit14JSUserDefaults, _TtC11AppStoreKit12JSUserObject, _TtC11AppStoreKit20JSStoreMetricsObject, _TtC11AppStoreKit20JSResilientDeepLinks, NSDictionary, _TtC11AppStoreKit28JSPersonalizationStoreObject, _TtC11AppStoreKit12JSGameCenter, _TtC11AppStoreKit16JSTimeoutManager, _TtC11AppStoreKit15JSAMSEngagement, _TtC11AppStoreKit38AppStoreOnDeviceRecommendationsManager, _TtC11AppStoreKit26JSMetricsIdentifiersObject, _TtC11AppStoreKit16JSTreatmentStore, _TtC11AppStoreKit12AppleSilicon, _TtC11AppStoreKit14JSFeatureFlags, _TtC11AppStoreKit15JSStorageObject, _TtC11AppStoreKit21ClientOrderingWrapper, ASKClient, _TtC11AppStoreKit14JSArcadeObject;
@protocol _TtP11AppStoreKit17LocalizerProtocol_, JSExport;

@interface AppStoreKit.ASKGlobal : NSObject <AppStoreKit.ASKGlobalExports> {
    void /* function */ props;
    void /* unknown type, empty encoding */ ads;
    void /* unknown type, empty encoding */ onDeviceSearchHistoryManager;
}

@property (nonatomic, readonly) ASKClient *client;
@property (nonatomic, readonly) id<_TtP11AppStoreKit17LocalizerProtocol_> loc;
@property (nonatomic, readonly) id<JSExport> adsLoc;
@property (nonatomic, readonly) _TtC11AppStoreKit20JSStoreMetricsObject *storeMetrics;
@property (nonatomic, readonly) _TtC11AppStoreKit15JSAMSEngagement *amsEngagement;
@property (nonatomic, readonly) _TtC11AppStoreKit12JSUserObject *user;
@property (nonatomic, readonly) _TtC11AppStoreKit26JSMetricsIdentifiersObject *metricsIdentifiers;
@property (nonatomic, readonly) NSDictionary *props;
@property (nonatomic, readonly) _TtC11AppStoreKit14JSFeatureFlags *featureFlags;
@property (nonatomic, readonly) _TtC11AppStoreKit21ClientOrderingWrapper *clientOrdering;
@property (nonatomic, readonly) _TtC11AppStoreKit28JSPersonalizationStoreObject *personalizationStore;
@property (nonatomic, readonly) _TtC11AppStoreKit20JSResilientDeepLinks *resilientDeepLinks;
@property (nonatomic, readonly) _TtC11AppStoreKit14JSArcadeObject *arcade;
@property (nonatomic, readonly) _TtC11AppStoreKit12JSGameCenter *gameCenter;
@property (nonatomic, readonly) _TtC11AppStoreKit12AppleSilicon *appleSilicon;
@property (nonatomic, readonly) _TtC11AppStoreKit15JSStorageObject *storage;
@property (nonatomic, readonly) _TtC11AppStoreKit38AppStoreOnDeviceRecommendationsManager *onDeviceRecommendationsManager;
@property (nonatomic, readonly) _TtC11AppStoreKit16JSTimeoutManager *timeoutManager;
@property (nonatomic, readonly) _TtC11AppStoreKit16JSTreatmentStore *treatmentStore;
@property (nonatomic, readonly) _TtC11AppStoreKit14JSUserDefaults *userDefaults;

- (id)init;
- (void).cxx_destruct;

@end
