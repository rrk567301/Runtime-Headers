@class NSObject, CAContentStreamOptions;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CAContentStream : NSObject {
    CAContentStreamOptions *_options;
    struct unordered_map<unsigned int, unsigned int, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned int>>> { struct __hash_table<std::__hash_value_type<unsigned int, unsigned int>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, unsigned int>, std::hash<unsigned int>, std::equal_to<unsigned int>>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, unsigned int>, std::equal_to<unsigned int>, std::hash<unsigned int>>, std::allocator<std::__hash_value_type<unsigned int, unsigned int>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _includedContexts;
    struct unordered_map<unsigned int, unsigned int, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned int>>> { struct __hash_table<std::__hash_value_type<unsigned int, unsigned int>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, unsigned int>, std::hash<unsigned int>, std::equal_to<unsigned int>>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, unsigned int>, std::equal_to<unsigned int>, std::hash<unsigned int>>, std::allocator<std::__hash_value_type<unsigned int, unsigned int>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _excludedContexts;
    struct small_vector<ContentStreamClientFrame, 8UL> { struct ContentStreamClientFrame *_begin; struct ContentStreamClientFrame *_end; struct ContentStreamClientFrame *_fixedStorage; unsigned long long _capacity; union { union type { unsigned char __data[16]; } storage[8]; struct ContentStreamClientFrame { struct __IOSurface *iosurface; unsigned int id; unsigned int port; } flat_storage[0]; } ; } _seen_surfaces;
    unsigned int _serverPort;
    struct ClientIPC { unsigned int _port; NSObject<OS_dispatch_queue> *_queue; NSObject<OS_dispatch_source> *_source; } _clientIPC;
    BOOL _started;
    BOOL _warmed_up;
    struct SpinLock { struct { int x; } _l; } _callback_lock;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _handler;
}

+ (id)contentStreamWithOptions:(id)a0 queue:(id)a1 handler:(id /* block */)a2 error:(id *)a3;

- (unsigned int)streamId;
- (void)dealloc;
- (id).cxx_construct;
- (BOOL)stop:(id *)a0;
- (void).cxx_destruct;
- (BOOL)start:(id *)a0;
- (void)clearSeenSurfaces;
- (id)copyOptions;
- (void)produceSurface:(unsigned int)a0 withFrameInfo:(const struct CA_content_stream_frame_info { unsigned long long x0; unsigned long long x1; unsigned int x2; unsigned int x3; float x4; float x5; float x6; float x7; float x8; float x9; unsigned char x10; } *)a1;
- (BOOL)releaseSurface:(struct __IOSurface { } *)a0 error:(id *)a1;
- (BOOL)releaseSurfaceWithId:(unsigned int)a0 error:(id *)a1;
- (BOOL)setExcludedContexts:(id)a0 error:(id *)a1;
- (BOOL)setIncludedContexts:(id)a0 error:(id *)a1;
- (BOOL)updateOptions:(id)a0 error:(id *)a1;

@end
