@interface MLPInferenceResult : NSObject {
    struct map<unsigned int, std::map<unsigned int, unsigned int>, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, std::map<unsigned int, unsigned int>>>> { struct __tree<std::__value_type<unsigned int, std::map<unsigned int, unsigned int>>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, std::map<unsigned int, unsigned int>>, std::less<unsigned int>>, std::allocator<std::__value_type<unsigned int, std::map<unsigned int, unsigned int>>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } confusionMatrix;
    float logLikelihood;
    float totalLoss;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end
