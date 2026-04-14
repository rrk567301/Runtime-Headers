@interface ETDataSourceBuf : NSObject <ETDataSource> {
    struct map<std::string, std::shared_ptr<Espresso::blob<float, 2>>, std::less<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<Espresso::blob<float, 2>>>>> { struct __tree<std::__value_type<std::string, std::shared_ptr<Espresso::blob<float, 2>>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::shared_ptr<Espresso::blob<float, 2>>>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::shared_ptr<Espresso::blob<float, 2>>>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } blobs;
    int number_of_data_points;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)numberOfDataPoints;
- (float *)dataAtIndex:(unsigned long long)a0 key:(const void *)a1;
- (id)dataPointAtIndex:(int)a0;
- (void)setBlobs:(const void *)a0 numberOfDataPoints:(int)a1 nonBatches:(const void *)a2;

@end
