@class NSString, NSMutableDictionary;

@interface CCPass : NSObject {
    id /* block */ resourceWillChange;
    id /* block */ resourceDidChange;
    struct unordered_map<std::string, CCResource *, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, CCResource *>>> { struct __hash_table<std::__hash_value_type<std::string, CCResource *>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, CCResource *>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, CCResource *>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, CCResource *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, CCResource *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, CCResource *>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, CCResource *>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, CCResource *>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _resources;
    BOOL _isODC;
    unsigned long long _executionOrder[3];
}

@property (readonly, nonatomic) NSMutableDictionary *resources;
@property (retain, nonatomic) NSString *label;
@property (nonatomic) long long priority;
@property (readonly, nonatomic) BOOL executable;

- (id)formattedDescription:(unsigned long long)a0;
- (id)init;
- (id)description;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)aggregatePass:(id)a0;
- (BOOL)executeWithAccelerateDeviceGroup:(id)a0;
- (BOOL)lateUpdate;
- (BOOL)validateWithAccelerateDeviceGroup:(id)a0 error:(id *)a1;

@end
