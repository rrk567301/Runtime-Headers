@interface AMSCB1PAnyMapBox : NSObject {
    struct map<std::string, AMSCore::Any, std::less<void>, std::allocator<std::pair<const std::string, AMSCore::Any>>> { struct __tree<std::__value_type<std::string, AMSCore::Any>, std::__map_value_compare<std::string, std::pair<const std::string, AMSCore::Any>, std::less<void>>, std::allocator<std::pair<const std::string, AMSCore::Any>>> { void *__begin_node_; struct { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; } ; struct { unsigned long long __size_; } ; } __tree_; } _anyMap;
}

- (void).cxx_destruct;
- (id).cxx_construct;

@end
