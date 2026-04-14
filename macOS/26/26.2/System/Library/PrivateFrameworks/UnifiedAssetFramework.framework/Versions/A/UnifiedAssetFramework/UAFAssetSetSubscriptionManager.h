@interface UAFAssetSetSubscriptionManager : NSObject

+ (void)daemonSubscriptionMigration;
+ (id)getSubscribers:(id)a0 storeManager:(id)a1 error:(id *)a2;
+ (id)getSubscription:(id)a0 subscriber:(id)a1 user:(id)a2 storeManager:(id)a3 error:(id *)a4;
+ (id)getSubscriptions:(id)a0 user:(id)a1 storeManager:(id)a2 error:(id *)a3;
+ (void)migrateMBSetupUserSubscriptions:(id)a0 user:(id)a1 node:(id)a2;
+ (void)migrateSubscriptions:(id)a0 user:(id)a1 completion:(id /* block */)a2;

@end
