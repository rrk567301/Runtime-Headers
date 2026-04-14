@class HMDHomeManager;

@interface HMDCloudManagerDataSource : HMFObject

@property (readonly, weak) HMDHomeManager *homeManager;

- (void).cxx_destruct;
- (id)initWithHomeManager:(id)a0;
- (BOOL)isKeychainSyncEnabled;
- (id)queryDatabaseOperationWithBlock:(id /* block */)a0;
- (BOOL)isControllerKeyAvailable;
- (unsigned long long)dataMigrationOptions;

@end
