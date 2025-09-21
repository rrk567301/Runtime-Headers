@protocol ETDataSource;

@interface ETDataSourceWithCache : NSObject <ETDataSource> {
    id<ETDataSource> _source;
    struct map<int, ETDataPoint *, std::less<int>, std::allocator<std::pair<const int, ETDataPoint *>>> { struct __tree<std::__value_type<int, ETDataPoint *>, std::__map_value_compare<int, std::__value_type<int, ETDataPoint *>, std::less<int>>, std::allocator<std::__value_type<int, ETDataPoint *>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } _cache;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } dump_path;
    BOOL dump_descriptors;
}

- (id)initWithDataSource:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (int)numberOfDataPoints;
- (id)dataPointAtIndex:(int)a0;
- (id)initWithDataSource:(id)a0 dumpPath:(id)a1;

@end
