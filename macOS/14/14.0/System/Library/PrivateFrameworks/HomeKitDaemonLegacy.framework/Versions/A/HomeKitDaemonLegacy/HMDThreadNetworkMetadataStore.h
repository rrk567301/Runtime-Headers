@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HMDThreadNetworkMetadataStore : HMFObject <HMFLogging, HMDThreadNetworkMetadataStore>

@property (class, readonly, nonatomic) HMDThreadNetworkMetadataStore *_testOnlyStore;
@property (class, readonly, nonatomic) HMDThreadNetworkMetadataStore *defaultStore;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (id)initInternal;
- (void)retrieveMetadataWithCompletion:(id /* block */)a0;
- (void)_checkIfThreadNetworkIsRunningWithCompletion:(id /* block */)a0;
- (void)_removePreferredNetworkWithCompletion:(id /* block */)a0;
- (void)_retrieveMetadataWithCompletion:(id /* block */)a0;
- (void)checkIfThreadNetworkIsRunningWithCompletion:(id /* block */)a0;
- (void)removePreferredNetworkWithCompletion:(id /* block */)a0;
- (void)triggerPreferredNetworkUpdateWithCompletion:(id /* block */)a0;

@end
