@interface PRQuerySynonymsProvider : NSObject {
    struct unordered_map<std::string, std::vector<std::string>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::vector<std::string>>>> { struct __hash_table<std::__hash_value_type<std::string, std::vector<std::string>>, std::__unordered_map_hasher<std::string, std::pair<const std::string, std::vector<std::string>>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::pair<const std::string, std::vector<std::string>>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::pair<const std::string, std::vector<std::string>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<std::string>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<std::string>>, void *> *> *>>> { struct { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<std::string>>, void *> *> *>> { struct { unsigned long long __size_; } ; } __deleter_; } ; } __bucket_list_; struct { struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<std::string>>, void *> *> { void *__next_; } __first_node_; } ; struct { unsigned long long __size_; } ; struct { float __max_load_factor_; } ; } __table_; } _synonyms;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initSynonymsForLanguageCode:(id)a0;
- (struct vector<std::string, std::allocator<std::string>> { void *x0; void *x1; struct { void *x0; } x2; })synonymsForTerm:(const void *)a0;

@end
