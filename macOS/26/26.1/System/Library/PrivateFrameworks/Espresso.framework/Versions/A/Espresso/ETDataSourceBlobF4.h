@interface ETDataSourceBlobF4 : NSObject <ETDataSource> {
    struct map<std::string, std::shared_ptr<Espresso::blob<float, 4>>, std::less<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<Espresso::blob<float, 4>>>>> { struct __tree<std::__value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } blobs;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)numberOfDataPoints;
- (void)addBlob:(id)a0 forKey:(id)a1;
- (id)dataPointAtIndex:(int)a0;

@end
