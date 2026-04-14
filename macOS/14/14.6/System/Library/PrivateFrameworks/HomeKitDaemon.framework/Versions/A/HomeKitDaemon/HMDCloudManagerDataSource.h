@class HMDHomeManager;

@interface HMDCloudManagerDataSource : HMFObject

@property (readonly, weak) HMDHomeManager *homeManager;

- (void).cxx_destruct;
- (BOOL)isKeychainSyncEnabled;
- (id)initWithHomeManager:(id)a0;
- (unsigned long long)dataMigrationOptions;
- (BOOL)isControllerKeyAvailable;
- (id)queryDatabaseOperationWithBlock:(id /* block */)a0;

@end
