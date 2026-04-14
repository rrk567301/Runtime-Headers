@interface MLMediaTypeCountedSet : NSObject {
    struct map<unsigned int, unsigned long, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned long>>> { struct __tree<std::__value_type<unsigned int, unsigned long>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned long>, std::less<unsigned int>>, std::allocator<std::__value_type<unsigned int, unsigned long>>> { void *__begin_node_; struct { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; } ; struct { unsigned long long __size_; } ; } __tree_; } _map;
}

@property (readonly, nonatomic) unsigned long long count;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)description;
- (void)addMediaType:(unsigned int)a0 count:(unsigned long long)a1;
- (void)enumerateMediaTypesWithBlock:(id /* block */)a0;

@end
