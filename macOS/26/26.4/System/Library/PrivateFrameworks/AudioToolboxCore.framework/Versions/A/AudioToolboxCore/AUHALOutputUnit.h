@interface AUHALOutputUnit : AUAudioUnitV2Bridge {
    id /* block */ _outputProvider;
    id /* block */ _inputHandler;
    BOOL _inputWasEnabled;
    BOOL _outputWasEnabled;
    BOOL _inputBusEnabled;
    int _renderObserverToken;
    struct unordered_map<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long) __attribute__((nonblocking)), std::hash<long>, std::equal_to<long>, std::allocator<std::pair<const long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long) __attribute__((nonblocking))>>> { struct __hash_table<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long) __attribute__((nonblocking))>, std::__unordered_map_hasher<long, std::pair<const long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long) __attribute__((nonblocking))>, std::hash<long>, std::equal_to<long>>, std::__unordered_map_equal<long, std::pair<const long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long) __attribute__((nonblocking))>, std::equal_to<long>, std::hash<long>>, std::allocator<std::pair<const long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long) __attribute__((nonblocking))>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long) __attribute__((nonblocking))>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long) __attribute__((nonblocking))>, void *> *> *>>> { struct { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long) __attribute__((nonblocking))>, void *> *> *>> { struct { unsigned long long __size_; } ; } __deleter_; } ; } __bucket_list_; struct { struct __hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long) __attribute__((nonblocking))>, void *> *> { void *__next_; } __first_node_; } ; struct { unsigned long long __size_; } ; struct { float __max_load_factor_; } ; } __table_; } _renderObservers;
}

@property (nonatomic, getter=isInputEnabled) BOOL inputEnabled;
@property (nonatomic, getter=isOutputEnabled) BOOL outputEnabled;
@property (readonly, nonatomic) unsigned int deviceID;

- (BOOL)isRunning;
- (void)setOutputProvider:(id /* block */)a0;
- (id /* block */)_inputHandler;
- (void)setInputHandler:(id /* block */)a0;
- (id)initWithAudioUnit:(struct OpaqueAudioComponentInstance { } *)a0 description:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })a1;
- (double)deviceInputLatency;
- (double)deviceOutputLatency;
- (void)removeRenderObserver:(void /* function */ *)a0 userData:(void *)a1;
- (BOOL)canPerformInput;
- (void)removeRenderObserver:(long long)a0;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })a0 options:(unsigned int)a1 error:(id *)a2;
- (void)addRenderObserver:(void /* function */ *)a0 userData:(void *)a1;
- (void).cxx_destruct;
- (long long)tokenByAddingRenderObserver:(id /* block */)a0;
- (int)enableBus:(unsigned int)a0 scope:(unsigned int)a1 enable:(BOOL)a2;
- (BOOL)startHardwareAndReturnError:(id *)a0;
- (id).cxx_construct;
- (void)initAUHALOutputUnit;
- (double)deviceLatency:(BOOL)a0;
- (id /* block */)outputProvider;
- (BOOL)canPerformOutput;
- (BOOL)setDeviceID:(unsigned int)a0 error:(id *)a1;
- (void)stopHardware;
- (void)dealloc;

@end
