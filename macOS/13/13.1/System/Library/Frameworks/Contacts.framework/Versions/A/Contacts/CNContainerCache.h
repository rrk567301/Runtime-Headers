@class CNContactStore, NSObject, ACAccountStore, CNContainer, CNCache;
@protocol OS_dispatch_queue;

@interface CNContainerCache : NSObject

@property (retain, nonatomic) CNContainer *primaryiCloudContainer;
@property (weak, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) ACAccountStore *accountStore;
@property (retain, nonatomic) CNCache *cachedAccounts;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;

+ (id)os_log;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithContactStore:(id)a0;
- (void)accountStoreDidChange;
- (void)contactStoreDidChange;
- (id)onWorkQueue_findPrimaryiCloudContainer;
- (id)accountForContainer:(id)a0;
- (id)cnAccountForContainer:(id)a0;
- (void)resetAccountCache;
- (void)resetPrimaryiCloudContainer;

@end
