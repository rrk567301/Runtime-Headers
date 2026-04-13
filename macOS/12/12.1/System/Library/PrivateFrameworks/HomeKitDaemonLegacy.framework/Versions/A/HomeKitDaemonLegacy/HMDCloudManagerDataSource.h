@class HMDHomeManager;

@interface HMDCloudManagerDataSource : HMFObject

@property (readonly, weak) HMDHomeManager *homeManager;

- (void).cxx_destruct;
- (id)initWithHomeManager:(id)a0;
- (BOOL)isKeychainSyncEnabled;
- (BOOL)supportsKeyTransferServer;
- (BOOL)isControllerKeyAvailable;
- (id)queryDatabaseOperationWithBlock:(id /* block */)a0;
- (id)keyTransferAgent;
- (unsigned long long)dataMigrationOptions;

@end
