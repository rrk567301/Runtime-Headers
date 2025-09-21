@class NSDictionary;

@interface FI_TKindFormatter : NSFormatter {
    double _width;
    NSDictionary *_stringAttributes;
    struct unordered_map<TString, std::vector<TruncationTableElement>, TStringCaseInsensitiveHash, TStringCaseInsensitiveCompare, std::allocator<std::pair<const TString, std::vector<TruncationTableElement>>>> { struct __hash_table<std::__hash_value_type<TString, std::vector<TruncationTableElement>>, std::__unordered_map_hasher<TString, std::__hash_value_type<TString, std::vector<TruncationTableElement>>, TStringCaseInsensitiveHash, TStringCaseInsensitiveCompare>, std::__unordered_map_equal<TString, std::__hash_value_type<TString, std::vector<TruncationTableElement>>, TStringCaseInsensitiveCompare, TStringCaseInsensitiveHash>, std::allocator<std::__hash_value_type<TString, std::vector<TruncationTableElement>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TString, std::vector<TruncationTableElement>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TString, std::vector<TruncationTableElement>>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TString, std::vector<TruncationTableElement>>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<TString, std::vector<TruncationTableElement>>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _truncationTables;
}

+ (id)sharedFormatter;

- (id)stringForObjectValue:(id)a0;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct unordered_set<TString, std::hash<TString>, std::equal_to<TString>, std::allocator<TString>> { struct __hash_table<TString, std::hash<TString>, std::equal_to<TString>, std::allocator<TString>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<TString, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TString, void *> *> *>>> { void **x0; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TString, void *> *> *>> { unsigned long long x0; } x1; } x0; struct __hash_node_base<std::__hash_node<TString, void *> *> { void *x0; } x1; unsigned long long x2; float x3; } x0; })kindStringSetForFullKindString:(const void *)a0;
- (double)measureTemplate:(const void *)a0 forAttributes:(id)a1;
- (void)setWidth:(double)a0 forAttributes:(id)a1;

@end
