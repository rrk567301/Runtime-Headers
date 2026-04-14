@class NSString, _TtC25CloudSubscriptionFeatures6Ticket, NSError, _TtC25CloudSubscriptionFeatures12TicketStatus;

@interface CSFFeatureManager : NSObject

+ (void)clearTicketCacheAndNotify;
+ (void)requestFeatureWithId:(id)a0 completion:(id /* block */)a1;
+ (void)refreshAllGeoclassificationCache;
+ (void)deviceHasAnyTicketWithCompletionHandler:(void (^)(BOOL))a0;
+ (id)cachedFeatureObjectWithId:(id)a0;
+ (void)requestFeatureWithId:(id)a0 allowStale:(BOOL)a1 completion:(id /* block */)a2;
+ (void)revalidateCFU;
+ (void)removeTicketChangeObserverWithToken:(id)a0;
+ (void)requestGeoClassificationForFeatureID:(id)a0 bundleID:(id)a1 altDSID:(id)a2 ignoreCache:(BOOL)a3 completion:(id /* block */)a4;
+ (void)getTicketStatusFromCacheForFeature:(NSString *)a0 completionHandler:(void (^)(_TtC25CloudSubscriptionFeatures12TicketStatus *, NSError *))a1;
+ (id)urlForRSVPDataDetectorsWithContext:(id)a0;
+ (void)requestGeoClassificationForFeatureID:(id)a0 bundleID:(id)a1 ignoreCache:(BOOL)a2 completion:(id /* block */)a3;
+ (void)processPushNotificationWithDictionary:(id)a0;
+ (void)getFeatureEligibilityForFeatureWithId:(id)a0 bundleId:(id)a1 completion:(id /* block */)a2;
+ (void)removeFeatureChangeObserverWithToken:(id)a0;
+ (void)clearFeatureCacheAndNotify;
+ (void)processPushNotificationDictionary:(id)a0;
+ (void)getTicketStatusForFeature:(NSString *)a0 completionHandler:(void (^)(_TtC25CloudSubscriptionFeatures12TicketStatus *, NSError *))a1;
+ (void)postCFUIfEligibleWithCompletionHandler:(void (^)(NSError *))a0;
+ (id)registerForFeatureChangeNotificationsUsingBlock:(id /* block */)a0;
+ (void)deviceHasAnyTicket:(id /* block */)a0;
+ (void)unregisterForFeatureChangeNotificationsUsingObserver:(id)a0;
+ (unsigned long long)_statusFromSwiftTicketStatus:(id)a0;
+ (id)addFeatureChangeObserverWithChange:(id /* block */)a0;
+ (void)getTicketStatusForFeature:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (void)postCFUIfEligible;
+ (void)gmOptInToggleWithCompletionHandler:(void (^)(BOOL, NSError *))a0;
+ (id)addTicketChangeObserverWithFeatureName:(id)a0 change:(id /* block */)a1;
+ (void)getGMOptInToggleWithCompletion:(id /* block */)a0;
+ (void)clearCacheAndNotify;
+ (void)revalidateCFUWithCompletionHandler:(void (^)(NSError *))a0;
+ (void)getTicketForFeature:(NSString *)a0 completionHandler:(void (^)(_TtC25CloudSubscriptionFeatures6Ticket *, NSError *))a1;
+ (BOOL)isCloudSubscriber;
+ (void)getTicketForFeature:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (void)clearCFUWithCompletionHandler:(void (^)(NSError *))a0;
+ (void)refreshGeoclassificationCache;
+ (BOOL)shouldShowRSVPDataDetectors;

@end
