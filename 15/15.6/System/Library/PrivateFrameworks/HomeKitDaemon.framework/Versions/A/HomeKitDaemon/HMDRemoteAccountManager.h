@class HMDAccountRegistry, NSArray, NSString, NSObject, NSMutableSet, NSMutableArray, HMDBackingStore;
@protocol HMDIDSService, OS_dispatch_queue;

@interface HMDRemoteAccountManager : HMFObject <HMDAccountManager, HMFLogging, HMFObject, HMDIDSServiceDelegate, NSFastEnumeration> {
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _lock;
    NSMutableSet *_accounts;
}

@property (readonly, nonatomic) id<HMDIDSService> service;
@property (readonly, nonatomic) HMDAccountRegistry *accountRegistry;
@property (nonatomic, getter=isMonitoring) char monitoring;
@property (readonly, nonatomic) NSMutableArray *resolveOperations;
@property (retain, nonatomic) NSArray *accounts;
@property (retain, nonatomic) HMDBackingStore *backingStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

+ (id)sharedManager;
+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)start;
- (void)reset;
- (void)stop;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(char)a3 error:(id)a4 context:(id)a5;
- (void)addAccount:(id)a0;
- (void)removeAccount:(id)a0;
- (id)accountForIdentifier:(id)a0;
- (id)initWithIDSService:(id)a0;
- (id)accountForHandle:(id)a0;
- (void)__handleSendMessageFailureWithError:(id)a0 destination:(id)a1;
- (void)_resolveAccountForHandle:(id)a0 completionHandler:(id /* block */)a1;
- (id)accountForDeviceHandle:(id)a0;
- (id)accountForModelIdentifier:(id)a0;
- (id)accountForSenderContext:(id)a0;
- (void)configureWithAccountRegistry:(id)a0;
- (id)deviceForSenderContext:(id)a0;
- (char)isCurrentDeviceDataOwnerForDevice:(id)a0;
- (void)processAccountModel:(id)a0 message:(id)a1;
- (void)processAccountModelRemove:(id)a0 message:(id)a1;
- (char)shouldAccount:(id)a0 pushbackModel:(id)a1 actions:(id)a2;
- (char)shouldCacheAccount:(id)a0;
- (char)shouldDevice:(id)a0 processModel:(id)a1 actions:(id)a2;
- (char)shouldSyncAccount:(id)a0;
- (char)shouldSyncDevice:(id)a0;

@end
