@class NSString, _TtC25CloudSubscriptionFeatures6Ticket, NSError, _TtC25CloudSubscriptionFeatures12TicketStatus;

@interface CSFFeatureManager : NSObject

+ (void)deviceHasAnyTicket:(id /* block */)a0;
+ (BOOL)isCloudSubscriber;
+ (void)getTicketForFeature:(NSString *)a0 completionHandler:(void (^)(_TtC25CloudSubscriptionFeatures6Ticket *, NSError *))a1;
+ (void)clearTicketCacheAndNotify;
+ (id)registerForFeatureChangeNotificationsUsingBlock:(id /* block */)a0;
+ (void)requestGeoClassificationForFeatureID:(id)a0 bundleID:(id)a1 altDSID:(id)a2 ignoreCache:(BOOL)a3 completion:(id /* block */)a4;
+ (void)refreshAllGeoclassificationCache;
+ (void)revalidateCFUWithCompletionHandler:(void (^)(NSError *))a0;
+ (void)processPushNotificationWithDictionary:(id)a0;
+ (void)getGMOptInToggleWithCompletion:(id /* block */)a0;
+ (void)getTicketStatusForFeature:(NSString *)a0 completionHandler:(void (^)(_TtC25CloudSubscriptionFeatures12TicketStatus *, NSError *))a1;
+ (void)unregisterForFeatureChangeNotificationsUsingObserver:(id)a0;
+ (void)requestGeoClassificationForFeatureID:(id)a0 bundleID:(id)a1 ignoreCache:(BOOL)a2 completion:(id /* block */)a3;
+ (id)addFeatureChangeObserverWithChange:(id /* block */)a0;
+ (void)clearCFUWithCompletionHandler:(void (^)(NSError *))a0;
+ (void)removeTicketChangeObserverWithToken:(id)a0;
+ (void)getTicketStatusForFeature:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (void)gmOptInToggleWithCompletionHandler:(void (^)(BOOL, NSError *))a0;
+ (id)urlForRSVPDataDetectorsWithContext:(id)a0;
+ (void)removeFeatureChangeObserverWithToken:(id)a0;
+ (id)addTicketChangeObserverWithFeatureName:(id)a0 change:(id /* block */)a1;
+ (void)clearCacheAndNotify;
+ (void)deviceHasAnyTicketWithCompletionHandler:(void (^)(BOOL))a0;
+ (void)postCFUIfEligibleWithCompletionHandler:(void (^)(NSError *))a0;
+ (void)refreshGeoclassificationCache;
+ (id)cachedFeatureObjectWithId:(id)a0;
+ (void)requestFeatureWithId:(id)a0 allowStale:(BOOL)a1 completion:(id /* block */)a2;
+ (BOOL)shouldShowRSVPDataDetectors;
+ (void)postCFUIfEligible;
+ (void)getTicketForFeature:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (void)processPushNotificationDictionary:(id)a0;
+ (unsigned long long)_statusFromSwiftTicketStatus:(id)a0;
+ (void)getTicketStatusFromCacheForFeature:(NSString *)a0 completionHandler:(void (^)(_TtC25CloudSubscriptionFeatures12TicketStatus *, NSError *))a1;
+ (void)requestFeatureWithId:(id)a0 completion:(id /* block */)a1;
+ (void)getFeatureEligibilityForFeatureWithId:(id)a0 bundleId:(id)a1 completion:(id /* block */)a2;
+ (void)clearFeatureCacheAndNotify;
+ (void)revalidateCFU;

@end
