@class NSString;

@interface IOSurfaceTransactionListImpl : NSObject <IOSurfaceTransactionList> {
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _mtx;
    struct shared_ptr<IOSurfaceTransactionSerialized[]> { struct *__ptr_; struct __shared_weak_count *__cntrl_; } _serializedData;
    struct unordered_map<unsigned long, IOSurfaceTransaction *, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, IOSurfaceTransaction *>>> { struct __hash_table<std::__hash_value_type<unsigned long, IOSurfaceTransaction *>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, IOSurfaceTransaction *>, std::hash<unsigned long>, std::equal_to<unsigned long>>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, IOSurfaceTransaction *>, std::equal_to<unsigned long>, std::hash<unsigned long>>, std::allocator<std::__hash_value_type<unsigned long, IOSurfaceTransaction *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, IOSurfaceTransaction *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, IOSurfaceTransaction *>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, IOSurfaceTransaction *>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, IOSurfaceTransaction *>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _txnCache;
}

@property (readonly) unsigned long long length;
@property (readonly) unsigned long long kernelFullListLength;
@property (readonly) unsigned long long selectedLength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned int)eventPortAtIndex:(unsigned long long)a0;
- (id)transactionAtIndex:(unsigned long long)a0;
- (id)initWithSerializedData:(struct shared_ptr<IOSurfaceTransactionSerialized[]> { struct *x0; struct __shared_weak_count *x1; })a0 numWritten:(unsigned long long)a1 actualLength:(unsigned long long)a2 selectedLength:(unsigned long long)a3;

@end
