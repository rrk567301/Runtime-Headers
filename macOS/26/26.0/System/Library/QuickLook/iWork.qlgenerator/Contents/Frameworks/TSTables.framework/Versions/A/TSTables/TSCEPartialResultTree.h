@class __end_, TSCEPartialResult, __cap_;

@interface TSCEPartialResultTree : NSObject {
    struct vector<TSCEPartialResult *, std::allocator<TSCEPartialResult *>> { __end_ **__begin_; __cap_ **x0; id *x1; } _resultStack;
    struct unordered_map<unsigned int, NSString *, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, NSString *>>> { struct __hash_table<std::__hash_value_type<unsigned int, NSString *>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, NSString *>, std::hash<unsigned int>, std::equal_to<unsigned int>>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, NSString *>, std::equal_to<unsigned int>, std::hash<unsigned int>>, std::allocator<std::__hash_value_type<unsigned int, NSString *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, NSString *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, NSString *>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, NSString *>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, NSString *>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _symbolLookup;
    struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *__begin_; unsigned int *__end_; unsigned int *__cap_; } _thunkOffsets;
}

@property (readonly, nonatomic) TSCEPartialResult *root;

- (id)init;
- (id)descriptionWithLocale:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)lookupSymbol:(unsigned int)a0;
- (void *)symbolLookupMap;
- (void)addPartialResult:(id)a0;
- (void)addSymbol:(unsigned int)a0 mappedToIdentifier:(id)a1;
- (unsigned int)currentThunkOffset;
- (void)popThunkOffset;
- (void)pushThunkOffset:(unsigned int)a0;

@end
