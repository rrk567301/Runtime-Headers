@class HMDHomeManager;

@interface HMDCloudManagerDataSource : HMFObject

@property (readonly, weak) HMDHomeManager *homeManager;

- (void).cxx_destruct;
- (BOOL)isKeychainSyncEnabled;
- (id)initWithHomeManager:(id)a0;
- (BOOL)supportsKeyTransferServer;
- (unsigned long long)dataMigrationOptions;
- (BOOL)isControllerKeyAvailable;
- (id)queryDatabaseOperationWithBlock:(id /* block */)a0;
- (id)keyTransferAgent;

@end
