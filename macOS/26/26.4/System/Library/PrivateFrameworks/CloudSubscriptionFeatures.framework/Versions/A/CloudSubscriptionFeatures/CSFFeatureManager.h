@class NSString, _TtC25CloudSubscriptionFeatures6Ticket, NSError, _TtC25CloudSubscriptionFeatures12TicketStatus;

@interface CSFFeatureManager : NSObject

+ (unsigned long long)_statusFromSwiftTicketStatus:(id)a0;
+ (BOOL)shouldShowRSVPDataDetectors;
+ (void)getTicketStatusForFeature:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (id)addTicketChangeObserverWithFeatureName:(id)a0 change:(id /* block */)a1;
+ (void)requestGeoClassificationForFeatureID:(id)a0 bundleID:(id)a1 ignoreCache:(BOOL)a2 completion:(id /* block */)a3;
+ (void)refreshGeoclassificationCache;
+ (id)registerForFeatureChangeNotificationsUsingBlock:(id /* block */)a0;
+ (void)gmOptInToggleWithCompletionHandler:(void (^)(BOOL, NSError *))a0;
+ (void)getTicketForFeature:(NSString *)a0 completionHandler:(void (^)(_TtC25CloudSubscriptionFeatures6Ticket *, NSError *))a1;
+ (void)clearCFUWithCompletionHandler:(void (^)(NSError *))a0;
+ (void)processPushNotificationWithDictionary:(id)a0;
+ (void)revalidateCFUWithCompletionHandler:(void (^)(NSError *))a0;
+ (void)requestFeatureWithId:(id)a0 allowStale:(BOOL)a1 completion:(id /* block */)a2;
+ (id)cachedFeatureObjectWithId:(id)a0;
+ (void)removeTicketChangeObserverWithToken:(id)a0;
+ (void)getGMOptInToggleWithCompletion:(id /* block */)a0;
+ (void)clearTicketCacheAndNotify;
+ (void)getTicketStatusFromCacheForFeature:(NSString *)a0 completionHandler:(void (^)(_TtC25CloudSubscriptionFeatures12TicketStatus *, NSError *))a1;
+ (id)urlForRSVPDataDetectorsWithContext:(id)a0;
+ (void)revalidateCFU;
+ (void)postCFUIfEligibleWithCompletionHandler:(void (^)(NSError *))a0;
+ (void)requestGeoClassificationForFeatureID:(id)a0 bundleID:(id)a1 altDSID:(id)a2 ignoreCache:(BOOL)a3 completion:(id /* block */)a4;
+ (void)clearFeatureCacheAndNotify;
+ (id)addFeatureChangeObserverWithChange:(id /* block */)a0;
+ (void)getFeatureEligibilityForFeatureWithId:(id)a0 bundleId:(id)a1 completion:(id /* block */)a2;
+ (void)postCFUIfEligible;
+ (void)getTicketStatusForFeature:(NSString *)a0 completionHandler:(void (^)(_TtC25CloudSubscriptionFeatures12TicketStatus *, NSError *))a1;
+ (void)unregisterForFeatureChangeNotificationsUsingObserver:(id)a0;
+ (void)removeFeatureChangeObserverWithToken:(id)a0;
+ (void)requestFeatureWithId:(id)a0 completion:(id /* block */)a1;
+ (void)processPushNotificationDictionary:(id)a0;
+ (void)refreshAllGeoclassificationCache;
+ (void)getTicketForFeature:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (BOOL)isCloudSubscriber;
+ (void)clearCacheAndNotify;
+ (void)deviceHasAnyTicketWithCompletionHandler:(void (^)(BOOL))a0;
+ (void)deviceHasAnyTicket:(id /* block */)a0;

@end
