@class NSArray, ETTaskState, ETModelDefinition, ETVariablesDefinition, ETOptimizerDefinition;

@interface ETTaskDefinition : NSObject <ETTaskContext> {
    struct unordered_map<std::string, unsigned long, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, unsigned long>>> { struct __hash_table<std::__hash_value_type<std::string, unsigned long>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned long>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned long>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, unsigned long>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } inference_layer_index;
    ETVariablesDefinition *varsDef;
    unsigned long long runtimePlatform;
    int precision;
    unsigned long long batchSize;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } training_control_name;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } gradient_control_name;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } optimizer_control_name;
    NSArray *infInputNames;
    NSArray *infOutputNames;
    NSArray *trainInputNames;
    NSArray *trainOutputNames;
    struct unordered_map<std::string, Espresso::layer_shape, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, Espresso::layer_shape>>> { struct __hash_table<std::__hash_value_type<std::string, Espresso::layer_shape>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, Espresso::layer_shape>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } infInputBlobShapes;
    struct unordered_map<std::string, Espresso::layer_shape, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, Espresso::layer_shape>>> { struct __hash_table<std::__hash_value_type<std::string, Espresso::layer_shape>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, Espresso::layer_shape>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } trainInputBlobShapes;
    struct unordered_map<std::string, Espresso::layer_shape, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, Espresso::layer_shape>>> { struct __hash_table<std::__hash_value_type<std::string, Espresso::layer_shape>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, Espresso::layer_shape>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } infOutputBlobShapes;
    struct unordered_map<std::string, Espresso::layer_shape, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, Espresso::layer_shape>>> { struct __hash_table<std::__hash_value_type<std::string, Espresso::layer_shape>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, Espresso::layer_shape>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } trainOutputBlobShapes;
}

@property struct shared_ptr<Espresso::net> { struct net *__ptr_; struct __shared_weak_count *__cntrl_; } inferenceGraphNetPtr;
@property struct shared_ptr<Espresso::net> { struct net *__ptr_; struct __shared_weak_count *__cntrl_; } trainingGraphNetPtr;
@property (retain, nonatomic) ETModelDefinition *inferenceModel;
@property (retain, nonatomic) ETOptimizerDefinition *optimizer;
@property (nonatomic) unsigned long long platform;
@property (retain, nonatomic) ETTaskState *taskState;

- (id)description;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)setTensorNamed:(id)a0 withValue:(id)a1 error:(id *)a2;
- (id)getTensorNamed:(id)a0;
- (id)doInferenceOnData:(id)a0 error:(id *)a1;
- (BOOL)doTrainingOnData:(id)a0 forNumberOfEpochs:(unsigned long long)a1 withCallback:(id)a2 error:(id *)a3;
- (id)getParameterOfType:(unsigned long long)a0 forLayerNamed:(id)a1 error:(id *)a2;
- (id)initWithModelDefinition:(id)a0 lossDefinition:(id)a1 variablesDefinition:(id)a2 optimizerDefinition:(id)a3 forPlatform:(unsigned long long)a4 error:(id *)a5;
- (BOOL)saveNetwork:(id)a0 inplace:(BOOL)a1 error:(id *)a2;
- (BOOL)setParameterOfType:(unsigned long long)a0 forLayerNamed:(id)a1 withValue:(id)a2 error:(id *)a3;
- (void)setupShapes:(void *)a0 forBlobs:(id)a1 withError:(id *)a2;
- (void)checkShapes:(const void *)a0 withSample:(const void *)a1 withError:(id *)a2;
- (struct shared_ptr<Espresso::abstract_context> { struct abstract_context *x0; struct __shared_weak_count *x1; })context_for_runtime_platform:(id *)a0;
- (unsigned long long)dataTypeForParameterOfType:(unsigned long long)a0 fromLayerNamed:(id)a1;
- (id)getTensorNamed:(id)a0 directBind:(BOOL)a1;
- (id)initWithTrainingModelDefinition:(id)a0 forPlatform:(unsigned long long)a1 error:(id *)a2;
- (id)namesVectorToFoundationArray:(struct vector<std::string, std::allocator<std::string>> { void *x0; void *x1; void *x2; })a0;
- (unsigned long long)platformForLayerNamed:(id)a0 error:(id *)a1;
- (BOOL)privateDoTrainingOnData:(id)a0 forNumberOfEpochs:(unsigned long long)a1 withCallback:(id)a2 error:(id *)a3;
- (void)reloadOnRuntimePlatform:(id *)a0;
- (BOOL)saveTrainingNetwork:(id)a0 checkpoint:(id)a1 error:(id *)a2;
- (BOOL)setInferenceNetworkWeights:(struct shared_ptr<Espresso::net> { struct net *x0; struct __shared_weak_count *x1; })a0 error:(id *)a1;
- (BOOL)setWeightsOfInferenceNetworkLoadedFrom:(id)a0 AndSaveTo:(id)a1 error:(id *)a2;
- (void)setupInputOutputShapes:(id *)a0;
- (void)shareWeights;

@end
