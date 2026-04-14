@class WCDeviceLookup;

@interface WCCloudMigrator : NSObject

@property (readonly, nonatomic) WCDeviceLookup *deviceLookup;

+ (BOOL)isRunningInTheWeatherAppProcess;

- (BOOL)storeRequiresMigration:(id)a0;
- (void)migrateStore:(id)a0 toStore:(id)a1 completionBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (void)eraseStoreIfNeeded:(id)a0;
- (id)init;

@end
