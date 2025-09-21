@class NSMutableArray;

@interface VMUClassInfoMap : NSObject <NSSecureCoding> {
    struct unordered_map<unsigned long long, unsigned int, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, unsigned int>>> { struct __hash_table<std::__hash_value_type<unsigned long long, unsigned int>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, unsigned int>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, unsigned int>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, unsigned int>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned int>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned int>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned int>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _isaAddressToIndexMap;
    struct unordered_map<VMUClassInfo *, unsigned int, std::hash<VMUClassInfo *>, std::equal_to<VMUClassInfo *>, std::allocator<std::pair<VMUClassInfo *const, unsigned int>>> { struct __hash_table<std::__hash_value_type<VMUClassInfo *, unsigned int>, std::__unordered_map_hasher<VMUClassInfo *, std::__hash_value_type<VMUClassInfo *, unsigned int>, std::hash<VMUClassInfo *>, std::equal_to<VMUClassInfo *>>, std::__unordered_map_equal<VMUClassInfo *, std::__hash_value_type<VMUClassInfo *, unsigned int>, std::equal_to<VMUClassInfo *>, std::hash<VMUClassInfo *>>, std::allocator<std::__hash_value_type<VMUClassInfo *, unsigned int>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<VMUClassInfo *, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<VMUClassInfo *, unsigned int>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<VMUClassInfo *, unsigned int>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<VMUClassInfo *, unsigned int>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _classInfoToIndexMap;
    NSMutableArray *_linearClassInfos;
    struct unordered_map<SwiftFieldKey, unsigned int, std::hash<SwiftFieldKey>, std::equal_to<SwiftFieldKey>, std::allocator<std::pair<const SwiftFieldKey, unsigned int>>> { struct __hash_table<std::__hash_value_type<SwiftFieldKey, unsigned int>, std::__unordered_map_hasher<SwiftFieldKey, std::__hash_value_type<SwiftFieldKey, unsigned int>, std::hash<SwiftFieldKey>, std::equal_to<SwiftFieldKey>>, std::__unordered_map_equal<SwiftFieldKey, std::__hash_value_type<SwiftFieldKey, unsigned int>, std::equal_to<SwiftFieldKey>, std::hash<SwiftFieldKey>>, std::allocator<std::__hash_value_type<SwiftFieldKey, unsigned int>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SwiftFieldKey, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SwiftFieldKey, unsigned int>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SwiftFieldKey, unsigned int>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<SwiftFieldKey, unsigned int>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _swiftFieldToIndexMap;
    struct unordered_map<VMUFieldInfo *, unsigned int, std::hash<VMUFieldInfo *>, std::equal_to<VMUFieldInfo *>, std::allocator<std::pair<VMUFieldInfo *const, unsigned int>>> { struct __hash_table<std::__hash_value_type<VMUFieldInfo *, unsigned int>, std::__unordered_map_hasher<VMUFieldInfo *, std::__hash_value_type<VMUFieldInfo *, unsigned int>, std::hash<VMUFieldInfo *>, std::equal_to<VMUFieldInfo *>>, std::__unordered_map_equal<VMUFieldInfo *, std::__hash_value_type<VMUFieldInfo *, unsigned int>, std::equal_to<VMUFieldInfo *>, std::hash<VMUFieldInfo *>>, std::allocator<std::__hash_value_type<VMUFieldInfo *, unsigned int>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<VMUFieldInfo *, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<VMUFieldInfo *, unsigned int>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<VMUFieldInfo *, unsigned int>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<VMUFieldInfo *, unsigned int>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _fieldInfoToIndexMap;
    NSMutableArray *_linearFieldInfos;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int count;
@property (readonly, nonatomic) unsigned int fieldInfoCount;
@property (readonly, nonatomic) BOOL hasClassInfosDerivedFromStackBacktraces;

+ (void)_destroyRetainedLinearArray:(id *)a0 withCount:(unsigned int)a1;

- (id)classInfoForAddress:(unsigned long long)a0;
- (id)classInfoForIndex:(unsigned int)a0;
- (void)memoizeSwiftField:(id)a0 withName:(const char *)a1 offset:(unsigned int)a2 kind:(unsigned int)a3 typeref:(unsigned long long)a4;
- (id)fieldInfoForIndex:(unsigned int)a0;
- (unsigned int)addClassInfo:(id)a0 forAddress:(unsigned long long)a1;
- (void)_applyTypeOverlay:(id)a0;
- (unsigned int)addFieldInfo:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)enumerateInfosWithBlock:(id /* block */)a0;
- (id)init;
- (unsigned int)indexForClassInfo:(id)a0;
- (id *)_retainedLinearArrayWithReturnedCount:(unsigned int *)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (id)swiftFieldWithName:(const char *)a0 offset:(unsigned int)a1 kind:(unsigned int)a2 typeref:(unsigned long long)a3;
- (void)addClassInfosFromMap:(id)a0;
- (unsigned int)indexForFieldInfo:(id)a0;
- (void).cxx_destruct;

@end
