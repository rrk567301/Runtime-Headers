@interface _EAROnDeviceEndpointerInfo : NSObject {
    struct HybridClientConfigs { struct map<int, std::map<std::string, double>, std::less<int>, std::allocator<std::pair<const int, std::map<std::string, double>>>> { struct __tree<std::__value_type<int, std::map<std::string, double>>, std::__map_value_compare<int, std::__value_type<int, std::map<std::string, double>>, std::less<int>>, std::allocator<std::__value_type<int, std::map<std::string, double>>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } hybridEndpointerThresholds; struct map<std::string, int, std::less<std::string>, std::allocator<std::pair<const std::string, int>>> { struct __tree<std::__value_type<std::string, int>, std::__map_value_compare<std::string, std::__value_type<std::string, int>, std::less<std::string>>, std::allocator<std::__value_type<std::string, int>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } hybridEndpointerExtraDelayFrequency; } _hybridClientConfigs;
}

- (id)initWithConfig:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getEndpointerExtraDelayFrequencyForTask:(id)a0;
- (id)getEndpointerThresholdForClientModelVersion:(unsigned int)a0 task:(id)a1;

@end
