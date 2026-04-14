@class DSPModuleFactory, RPBHost, NSString, DatabaseController, IOControllerPolicyMaker, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, DSPModuleControlDelegate;

@interface DSPModuleManager : NSObject <RPBHostDelegate, RPBServerListener> {
    DatabaseController *_databaseController;
    DSPModuleFactory *_dspModuleFactory;
    IOControllerPolicyMaker *_ioControllerPolicyMaker;
    struct unordered_map<unsigned int, std::vector<unsigned long long>, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, std::vector<unsigned long long>>>> { struct __hash_table<std::__hash_value_type<unsigned int, std::vector<unsigned long long>>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, std::vector<unsigned long long>>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, std::vector<unsigned long long>>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>, std::allocator<std::__hash_value_type<unsigned int, std::vector<unsigned long long>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::vector<unsigned long long>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::vector<unsigned long long>>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::vector<unsigned long long>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::vector<unsigned long long>>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::vector<unsigned long long>>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::vector<unsigned long long>>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::vector<unsigned long long>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, std::vector<unsigned long long>>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::vector<unsigned long long>>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, std::vector<unsigned long long>>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, std::vector<unsigned long long>>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>> { float __value_; } __p3_; } __table_; } _sessionIOControllersMap;
}

@property (readonly) RPBHost *remoteProcessingBlockHost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSMutableArray *dspModules;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<DSPModuleControlDelegate> controlDelegate;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)connectToRemoteProcessingBlock;
- (void)disconnectFromRemoteProcessingBlock;
- (void)tearDownRemoteProcessingBlockHost;
- (id)initWithDatabaseController:(id)a0;
- (id)simulatedDSPModules:(const void *)a0;
- (id)dspModules:(const void *)a0 simulatedDSPModules:(id)a1;
- (id)descriptionsFromEnabledDSPModules;
- (id)remoteProcessingBlockHost;
- (void)setRemoteProcessingBlockHost:(id)a0;
- (void)remoteProcessingBlockServerDidStartRunning:(id)a0;
- (void)remoteProcessingBlockServerDidStopRunning:(id)a0;
- (void)setUpRemoteProcessingBlockHost;

@end
