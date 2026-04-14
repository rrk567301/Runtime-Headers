@interface FI_IPropertySizeExtractor : FI_IPropertyValueExtractor {
    struct TFENodeVector { struct TFENode *__begin_; struct TFENode *__end_; struct TFENode *__cap_; } _nodesToSize;
    struct map<TFENode, NSMutableDictionary *, std::less<TFENode>, std::allocator<std::pair<const TFENode, NSMutableDictionary *>>> { struct __tree<std::__value_type<TFENode, NSMutableDictionary *>, std::__map_value_compare<TFENode, std::__value_type<TFENode, NSMutableDictionary *>, std::less<TFENode>>, std::allocator<std::__value_type<TFENode, NSMutableDictionary *>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } _nodesAndSizeMap;
}

- (id)value;
- (id)init;
- (void)flush;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)computeValue;
- (int)extractValueFromNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (id)extractValueFromNodes:(const void *)a0;
- (BOOL)isApplicableToNodes:(const void *)a0;
- (BOOL)isWaitingForPendingNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (BOOL)isWaitingForPendingNodes;
- (BOOL)needsUpdateForProperty:(unsigned int)a0;
- (void)prefetchValueOnSecondaryThread:(const void *)a0 cancelled:(const void *)a1;
- (void)setValue:(long long)a0 forProperty:(unsigned int)a1 ofNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a2;
- (long long)sumValueForProperty:(unsigned int)a0;
- (BOOL)updateNeededWithChangedMap:(const void *)a0;
- (BOOL)updateNeededWithUpdateList:(const void *)a0;
- (long long)valueForProperty:(unsigned int)a0 ofNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;

@end
