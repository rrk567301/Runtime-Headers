@class _TtC12GameStoreKit14JSArcadeObject, _TtC12GameStoreKit21ClientOrderingWrapper, _TtC12GameStoreKit12JSGameCenter, _TtC12GameStoreKit28JSPersonalizationStoreObject, _TtC12GameStoreKit15JSAMSEngagement, NSDictionary, _TtC12GameStoreKit16JSTimeoutManager, _TtC12GameStoreKit15JSStorageObject, _TtC12GameStoreKit16JSTreatmentStore, _TtC12GameStoreKit14JSFeatureFlags, _TtC12GameStoreKit26JSMetricsIdentifiersObject, _TtC12GameStoreKit20JSStoreMetricsObject, _TtC12GameStoreKit38AppStoreOnDeviceRecommendationsManager, _TtC12GameStoreKit20JSResilientDeepLinks, _TtC12GameStoreKit12AppleSilicon, _TtC12GameStoreKit14JSUserDefaults, ASKClient, _TtC12GameStoreKit12JSUserObject;
@protocol _TtP12GameStoreKit17LocalizerProtocol_, JSExport;

@interface GameStoreKit.ASKGlobal : NSObject <GameStoreKit.ASKGlobalExports> {
    void /* function */ props;
    void /* unknown type, empty encoding */ ads;
    void /* unknown type, empty encoding */ onDeviceSearchHistoryManager;
}

@property (nonatomic, readonly) ASKClient *client;
@property (nonatomic, readonly) id<_TtP12GameStoreKit17LocalizerProtocol_> loc;
@property (nonatomic, readonly) id<JSExport> adsLoc;
@property (nonatomic, readonly) _TtC12GameStoreKit20JSStoreMetricsObject *storeMetrics;
@property (nonatomic, readonly) _TtC12GameStoreKit15JSAMSEngagement *amsEngagement;
@property (nonatomic, readonly) _TtC12GameStoreKit12JSUserObject *user;
@property (nonatomic, readonly) _TtC12GameStoreKit26JSMetricsIdentifiersObject *metricsIdentifiers;
@property (nonatomic, readonly) NSDictionary *props;
@property (nonatomic, readonly) _TtC12GameStoreKit14JSFeatureFlags *featureFlags;
@property (nonatomic, readonly) _TtC12GameStoreKit21ClientOrderingWrapper *clientOrdering;
@property (nonatomic, readonly) _TtC12GameStoreKit28JSPersonalizationStoreObject *personalizationStore;
@property (nonatomic, readonly) _TtC12GameStoreKit20JSResilientDeepLinks *resilientDeepLinks;
@property (nonatomic, readonly) _TtC12GameStoreKit14JSArcadeObject *arcade;
@property (nonatomic, readonly) _TtC12GameStoreKit12JSGameCenter *gameCenter;
@property (nonatomic, readonly) _TtC12GameStoreKit12AppleSilicon *appleSilicon;
@property (nonatomic, readonly) _TtC12GameStoreKit15JSStorageObject *storage;
@property (nonatomic, readonly) _TtC12GameStoreKit38AppStoreOnDeviceRecommendationsManager *onDeviceRecommendationsManager;
@property (nonatomic, readonly) _TtC12GameStoreKit16JSTimeoutManager *timeoutManager;
@property (nonatomic, readonly) _TtC12GameStoreKit16JSTreatmentStore *treatmentStore;
@property (nonatomic, readonly) _TtC12GameStoreKit14JSUserDefaults *userDefaults;

- (id)init;
- (void).cxx_destruct;

@end
