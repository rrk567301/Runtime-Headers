@interface TRIExternalConfigurationChangeProcessor : NSObject

+ (void)_processConfigChangeWithServerContext:(id)a0 withTaskQueue:(id)a1;
+ (void)processAdsBucketIdChangeIfNecessaryForBucketId:(id)a0 withServerContext:(id)a1 withTaskQueue:(id)a2;
+ (void)processMapsBucketIdChangeIfNecessaryForBucketId:(id)a0 withServerContext:(id)a1 withTaskQueue:(id)a2;
+ (void)processStorefrontChangeIfNecessaryForStorefront:(id)a0 withServerContext:(id)a1 withTaskQueue:(id)a2;

@end
