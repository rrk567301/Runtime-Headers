@class DatabaseController, RPBHost, NSString, ADNotificationBusStation, GraphState, NSObject, SoftwareVolumeManager;
@protocol OS_dispatch_queue;

@interface GraphManager : NSObject <RPBHostDelegate, RPBServerListener, NSSecureCoding, DSPModuleControlDelegate> {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    GraphState *_activeState;
    struct list<GraphState *, std::allocator<GraphState *>> { struct __list_node_base<GraphState *, void *> { void *__prev_; void *__next_; } __end_; struct __compressed_pair<unsigned long, std::allocator<std::__list_node<GraphState *, void *>>> { unsigned long long __value_; } __size_alloc_; } _toDelete;
    struct unique_ptr<adm::graph::GraphBuilder, std::default_delete<adm::graph::GraphBuilder>> { struct __compressed_pair<adm::graph::GraphBuilder *, std::default_delete<adm::graph::GraphBuilder>> { struct GraphBuilder *__value_; } __ptr_; } _graphBuilder;
    struct shared_ptr<adm::graph::ParameterStorageInterface> { struct ParameterStorageInterface *__ptr_; struct __shared_weak_count *__cntrl_; } _graphParameterStorage;
    struct shared_ptr<adm::graph::PropertyStorageInterface> { struct PropertyStorageInterface *__ptr_; struct __shared_weak_count *__cntrl_; } _graphPropertyStorage;
    struct ProxyFactory { struct shared_ptr<adm::vp::detail::ProxyFactoryImplementation> { struct ProxyFactoryImplementation *__ptr_; struct __shared_weak_count *__cntrl_; } mImplementation; } _vpProxyFactory;
    SoftwareVolumeManager *_softwareVolumeManager;
    DatabaseController *_databaseController;
    void *_knobController;
    struct unordered_map<unsigned long long, std::vector<adm::DSPModuleParamID>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, std::vector<adm::DSPModuleParamID>>>> { struct __hash_table<std::__hash_value_type<unsigned long long, std::vector<adm::DSPModuleParamID>>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, std::vector<adm::DSPModuleParamID>>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, std::vector<adm::DSPModuleParamID>>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>, std::allocator<std::__hash_value_type<unsigned long long, std::vector<adm::DSPModuleParamID>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<adm::DSPModuleParamID>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<adm::DSPModuleParamID>>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<adm::DSPModuleParamID>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<adm::DSPModuleParamID>>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<adm::DSPModuleParamID>>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<adm::DSPModuleParamID>>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<adm::DSPModuleParamID>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<adm::DSPModuleParamID>>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::vector<adm::DSPModuleParamID>>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, std::vector<adm::DSPModuleParamID>>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, std::vector<adm::DSPModuleParamID>>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>> { float __value_; } __p3_; } __table_; } _ioControllerToParamMap;
    struct unordered_map<unsigned long long, std::unordered_map<adm::DSPModuleParamID, unsigned int>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, std::unordered_map<adm::DSPModuleParamID, unsigned int>>>> { struct __hash_table<std::__hash_value_type<unsigned long long, std::unordered_map<adm::DSPModuleParamID, unsigned int>>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, std::unordered_map<adm::DSPModuleParamID, unsigned int>>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, std::unordered_map<adm::DSPModuleParamID, unsigned int>>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>, std::allocator<std::__hash_value_type<unsigned long long, std::unordered_map<adm::DSPModuleParamID, unsigned int>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::unordered_map<adm::DSPModuleParamID, unsigned int>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::unordered_map<adm::DSPModuleParamID, unsigned int>>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::unordered_map<adm::DSPModuleParamID, unsigned int>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::unordered_map<adm::DSPModuleParamID, unsigned int>>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::unordered_map<adm::DSPModuleParamID, unsigned int>>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::unordered_map<adm::DSPModuleParamID, unsigned int>>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::unordered_map<adm::DSPModuleParamID, unsigned int>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, std::unordered_map<adm::DSPModuleParamID, unsigned int>>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::unordered_map<adm::DSPModuleParamID, unsigned int>>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, std::unordered_map<adm::DSPModuleParamID, unsigned int>>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, std::unordered_map<adm::DSPModuleParamID, unsigned int>>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>> { float __value_; } __p3_; } __table_; } _knobIDMap;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) RPBHost *remoteProcessingBlockHost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) ADNotificationBusStation *busStation;
@property (nonatomic) struct function<void (std::vector<unsigned long long>)> { struct __value_func<void (std::vector<unsigned long long>)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } dspMutation;
@property (nonatomic) unsigned long long dspMutationRequestState;
@property (readonly, nonatomic) unsigned int liveGraphCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerInternalComponents;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)unregisterClient:(unsigned long long)a0;
- (unsigned int)liveGraphCount;
- (void)registerClient:(unsigned long long)a0 moduleParams:(const void *)a1;
- (BOOL)setParameter:(unsigned int)a0 value:(float)a1 ioControllerID:(unsigned long long)a2;
- (void)makeMutationRequest:(const void *)a0;
- (id)initWithDatabaseController:(id)a0 volumeManager:(id)a1;
- (id)createAdaptTransactionWithRequests:(id)a0 dspModuleSettings:(id)a1 notificationBusStation:(id)a2 fileCaptureOptions:(unsigned long long)a3 error:(id *)a4;
- (void)applyGraphStatesTransition:(id)a0 withOriginalGraph:(id)a1;
- (void)applyAdaptTransaction:(id)a0 withConfigRequests:(id)a1;
- (void)visitGraphWithBlock:(id /* block */)a0;
- (void)visitGraphWithBlock:(id /* block */)a0 asynchronously:(BOOL)a1;
- (void)updateModuleControlWithADMGraph:(void *)a0;
- (void)cleanupObsoleteGraphs;
- (void)remoteProcessingBlockServerDidStartRunning:(id)a0;
- (void)remoteProcessingBlockServerDidStopRunning:(id)a0;
- (id)remoteProcessingBlockHost;
- (void)tearDownRemoteProcessingBlockHost;
- (void)setRemoteProcessingBlockHost:(id)a0;
- (void)connectToRemoteProcessingBlock;
- (void)disconnectFromRemoteProcessingBlock;
- (void)setUpRemoteProcessingBlockHostForGraph:(const void *)a0;

@end
