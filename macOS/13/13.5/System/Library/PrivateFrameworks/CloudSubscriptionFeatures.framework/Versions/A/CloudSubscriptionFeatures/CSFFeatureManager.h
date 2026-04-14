@interface CSFFeatureManager : NSObject

+ (void)getFeatureEligibilityForFeatureWithId:(id)a0 bundleId:(id)a1 completion:(id /* block */)a2;
+ (id)registerForFeatureChangeNotificationsUsingBlock:(id /* block */)a0;
+ (void)requestFeatureWithId:(id)a0 completion:(id /* block */)a1;
+ (void)unregisterForFeatureChangeNotificationsUsingObserver:(id)a0;
+ (void)requestGeoClassificationForFeatureID:(id)a0 bundleID:(id)a1 ignoreCache:(BOOL)a2 completion:(id /* block */)a3;
+ (void)processPushNotificationWithDictionary:(id)a0;
+ (id)addFeatureChangeObserverWithChange:(id /* block */)a0;
+ (void)clearCacheAndNotify;
+ (void)clearFeatureCacheAndNotify;
+ (BOOL)isCloudSubscriber;
+ (void)processPushNotificationDictionary:(id)a0;
+ (void)refreshAllGeoclassificationCache;
+ (void)refreshGeoclassificationCache;
+ (void)removeFeatureChangeObserverWithToken:(id)a0;
+ (void)requestGeoClassificationForFeatureID:(id)a0 bundleID:(id)a1 altDSID:(id)a2 ignoreCache:(BOOL)a3 completion:(id /* block */)a4;

@end
