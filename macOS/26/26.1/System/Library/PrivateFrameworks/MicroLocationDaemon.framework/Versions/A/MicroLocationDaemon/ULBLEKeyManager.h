@class ULEnvironment, NSArray, NSMutableSet, ULBleIdentityBridge;

@interface ULBLEKeyManager : NSObject <ULBleIdentityBridgeDelegate> {
    struct unordered_set<ULBleIdentityItem, ULBleIdentityItem::HashItem, ULBleIdentityItem::PredicateItem, std::allocator<ULBleIdentityItem>> { struct __hash_table<ULBleIdentityItem, ULBleIdentityItem::HashItem, ULBleIdentityItem::PredicateItem, std::allocator<ULBleIdentityItem>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<ULBleIdentityItem, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<ULBleIdentityItem, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<ULBleIdentityItem, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<ULBleIdentityItem, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } sameAccountBleIdentitiesInternal;
}

@property (retain, nonatomic) ULEnvironment *environment;
@property (nonatomic) struct ULDatabaseStoreInterface { void /* function */ **x0; } *dbStore;
@property (retain, nonatomic) NSMutableSet *oobKeysInternal;
@property (nonatomic) struct ULBLEKeyManagerDelegate { void /* function */ **x0; } *delegate;
@property (retain, nonatomic) ULBleIdentityBridge *bleIdentityBridge;
@property (readonly, nonatomic) NSArray *oobKeys;
@property (readonly, nonatomic) NSArray *sameAccountBleIdentities;

- (void)startMonitoringEvents;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)stopMonitoringEvents;
- (void)setDependencies:(id)a0;
- (void)_handleULRapportMonitorEventIdentities:(id)a0;
- (void)backupSameAccountBleIdentities;
- (id)initWithDelegate:(struct ULBLEKeyManagerDelegate { void /* function */ **x0; } *)a0 environment:(id)a1 andDbStore:(struct ULDatabaseStoreInterface { void /* function */ **x0; } *)a2;
- (void)loadSameAccountBleIdentitiesFromDb;
- (void)onBleIdentityItem:(const void *)a0;
- (void)resetSameAccountBleIdentities;

@end
