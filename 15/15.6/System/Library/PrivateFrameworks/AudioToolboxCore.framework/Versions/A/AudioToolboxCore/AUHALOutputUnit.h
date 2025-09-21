@interface AUHALOutputUnit : AUAudioUnitV2Bridge {
    id /* block */ _outputProvider;
    id /* block */ _inputHandler;
    BOOL _inputWasEnabled;
    BOOL _outputWasEnabled;
    BOOL _inputBusEnabled;
    int _renderObserverToken;
    struct unordered_map<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long), std::hash<long>, std::equal_to<long>, std::allocator<std::pair<const long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>>> { struct __hash_table<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::__unordered_map_hasher<long, std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::hash<long>, std::equal_to<long>>, std::__unordered_map_equal<long, std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::equal_to<long>, std::hash<long>>, std::allocator<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<long, std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::hash<long>, std::equal_to<long>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<long, std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::equal_to<long>, std::hash<long>>> { float __value_; } __p3_; } __table_; } _renderObservers;
}

@property (nonatomic, getter=isInputEnabled) char inputEnabled;
@property (nonatomic, getter=isOutputEnabled) char outputEnabled;
@property (readonly, nonatomic) unsigned int deviceID;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (char)isRunning;
- (char)canPerformInput;
- (id /* block */)_inputHandler;
- (void)addRenderObserver:(void /* function */ *)a0 userData:(void *)a1;
- (char)canPerformOutput;
- (double)deviceInputLatency;
- (double)deviceLatency:(char)a0;
- (double)deviceOutputLatency;
- (int)enableBus:(unsigned int)a0 scope:(unsigned int)a1 enable:(char)a2;
- (void)initAUHALOutputUnit;
- (id)initWithAudioUnit:(struct OpaqueAudioComponentInstance { } *)a0 description:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })a1;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })a0 options:(unsigned int)a1 error:(id *)a2;
- (id /* block */)outputProvider;
- (void)removeRenderObserver:(long long)a0;
- (void)removeRenderObserver:(void /* function */ *)a0 userData:(void *)a1;
- (char)setDeviceID:(unsigned int)a0 error:(id *)a1;
- (void)setInputHandler:(id /* block */)a0;
- (void)setOutputProvider:(id /* block */)a0;
- (char)startHardwareAndReturnError:(id *)a0;
- (void)stopHardware;
- (long long)tokenByAddingRenderObserver:(id /* block */)a0;

@end
