@protocol ETDataSource;

@interface ETDataSourceWithCache : NSObject <ETDataSource> {
    id<ETDataSource> _source;
    struct map<int, ETDataPoint *, std::less<int>, std::allocator<std::pair<const int, ETDataPoint *>>> { struct __tree<std::__value_type<int, ETDataPoint *>, std::__map_value_compare<int, std::__value_type<int, ETDataPoint *>, std::less<int>>, std::allocator<std::__value_type<int, ETDataPoint *>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, ETDataPoint *>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, ETDataPoint *>, std::less<int>>> { unsigned long long __value_; } __pair3_; } __tree_; } _cache;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { struct { unsigned char __is_long_ : 1; unsigned char __size_ : 7; } ; char __padding_[0]; char __data_[23]; } __s; struct __long { struct { unsigned char __is_long_ : 1; unsigned long __cap_ : 63; } ; unsigned long long __size_; char *__data_; } __l; } __value_; } __r_; } dump_path;
    BOOL dump_descriptors;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithDataSource:(id)a0;
- (int)numberOfDataPoints;
- (id)dataPointAtIndex:(int)a0;
- (id)initWithDataSource:(id)a0 dumpPath:(id)a1;

@end
