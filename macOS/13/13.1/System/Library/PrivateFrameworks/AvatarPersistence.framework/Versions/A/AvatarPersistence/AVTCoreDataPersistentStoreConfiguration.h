@interface AVTCoreDataPersistentStoreConfiguration : NSObject

+ (id)currentManagedObjectModel;
+ (id)createModel;
+ (id)remoteConfigurationWithEnvironment:(id)a0;
+ (id)remoteConfigurationWithDaemonClient:(id)a0 environment:(id)a1;
+ (id)localConfigurationWithStoreLocation:(id)a0 environment:(id)a1;
+ (id)modelV1;

@end
