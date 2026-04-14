@class HMDHomeManager;

@interface HMDCloudManagerDataSource : HMFObject

@property (readonly, weak) HMDHomeManager *homeManager;

- (void).cxx_destruct;
- (id)initWithHomeManager:(id)a0;
- (BOOL)supportsKeyTransferServer;
- (BOOL)isKeychainSyncEnabled;
- (unsigned long long)dataMigrationOptions;
- (BOOL)isControllerKeyAvailable;
- (id)queryDatabaseOperationWithBlock:(id /* block */)a0;
- (id)keyTransferAgent;

@end
