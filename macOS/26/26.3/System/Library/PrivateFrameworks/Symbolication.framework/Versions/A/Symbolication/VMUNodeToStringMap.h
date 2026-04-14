@class NSMutableArray;

@interface VMUNodeToStringMap : NSObject <NSSecureCoding> {
    NSMutableArray *_strings;
    struct unordered_map<NSString *, unsigned int, NSStringHashFunctor, NSStringEqualsFunctor, std::allocator<std::pair<NSString *const, unsigned int>>> { struct __hash_table<std::__hash_value_type<NSString *, unsigned int>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, unsigned int>, NSStringHashFunctor, NSStringEqualsFunctor>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, unsigned int>, NSStringEqualsFunctor, NSStringHashFunctor>, std::allocator<std::__hash_value_type<NSString *, unsigned int>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, unsigned int>, void *> *> *>>> { struct { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, unsigned int>, void *> *> *>> { struct { unsigned long long __size_; } ; } __deleter_; } ; } __bucket_list_; struct { struct __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, unsigned int>, void *> *> { void *__next_; } __first_node_; } ; struct { unsigned long long __size_; } ; struct { float __max_load_factor_; } ; } __table_; } _stringToIndexMap;
    struct unordered_map<unsigned int, unsigned int, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned int>>> { struct __hash_table<std::__hash_value_type<unsigned int, unsigned int>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, unsigned int>, std::hash<unsigned int>, std::equal_to<unsigned int>>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, unsigned int>, std::equal_to<unsigned int>, std::hash<unsigned int>>, std::allocator<std::__hash_value_type<unsigned int, unsigned int>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> *>>> { struct { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> *>> { struct { unsigned long long __size_; } ; } __deleter_; } ; } __bucket_list_; struct { struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> { void *__next_; } __first_node_; } ; struct { unsigned long long __size_; } ; struct { float __max_load_factor_; } ; } __table_; } _nodeToStringIndexMap;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (unsigned int)count;
- (void)setString:(id)a0 forNode:(unsigned int)a1;
- (unsigned int)_indexForString:(id)a0;
- (void)enumerateHexAddressesInStrings:(id /* block */)a0;
- (id)description;
- (id)init;
- (void)resymbolicateObjectDescriptionStringsWithGraph:(id)a0;
- (id)stringForNode:(unsigned int)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (unsigned int)uniquedStringCount;
- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;

@end
