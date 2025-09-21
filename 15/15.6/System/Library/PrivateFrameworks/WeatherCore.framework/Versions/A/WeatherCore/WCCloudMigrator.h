@class WCDeviceLookup;

@interface WCCloudMigrator : NSObject

@property (readonly, nonatomic) WCDeviceLookup *deviceLookup;

+ (char)isRunningInTheWeatherAppProcess;

- (id)init;
- (void).cxx_destruct;
- (void)eraseStoreIfNeeded:(id)a0;
- (void)migrateStore:(id)a0 toStore:(id)a1 completionBlock:(id /* block */)a2;
- (char)storeRequiresMigration:(id)a0;

@end
