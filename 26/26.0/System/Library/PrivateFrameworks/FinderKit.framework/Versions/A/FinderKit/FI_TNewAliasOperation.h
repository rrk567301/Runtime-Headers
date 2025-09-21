@interface FI_TNewAliasOperation : FI_TRenameOperation {
    struct unordered_map<TFENode, std::vector<std::pair<TFENode, TFENodePropertyList>>, std::hash<TFENode>, std::equal_to<TFENode>, std::allocator<std::pair<const TFENode, std::vector<std::pair<TFENode, TFENodePropertyList>>>>> { struct __hash_table<std::__hash_value_type<TFENode, std::vector<std::pair<TFENode, TFENodePropertyList>>>, std::__unordered_map_hasher<TFENode, std::__hash_value_type<TFENode, std::vector<std::pair<TFENode, TFENodePropertyList>>>, std::hash<TFENode>, std::equal_to<TFENode>>, std::__unordered_map_equal<TFENode, std::__hash_value_type<TFENode, std::vector<std::pair<TFENode, TFENodePropertyList>>>, std::equal_to<TFENode>, std::hash<TFENode>>, std::allocator<std::__hash_value_type<TFENode, std::vector<std::pair<TFENode, TFENodePropertyList>>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TFENode, std::vector<std::pair<TFENode, TFENodePropertyList>>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TFENode, std::vector<std::pair<TFENode, TFENodePropertyList>>>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TFENode, std::vector<std::pair<TFENode, TFENodePropertyList>>>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<TFENode, std::vector<std::pair<TFENode, TFENodePropertyList>>>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _recordsTable;
    struct __hash_map_const_iterator<std::__hash_const_iterator<std::__hash_node<std::__hash_value_type<TFENode, std::vector<std::pair<TFENode, TFENodePropertyList>>>, void *> *>> { struct __hash_const_iterator<std::__hash_node<std::__hash_value_type<TFENode, std::vector<std::pair<TFENode, TFENodePropertyList>>>, void *> *> { void *__node_; } __i_; } _recordsTableIter;
    struct __wrap_iter<const std::pair<TFENode, TFENodePropertyList> *> { void *__i_; } _recordIter;
    BOOL _addAliasSuffix;
    BOOL _creatingAliasInPBF;
    BOOL _isRenaming;
}

@property (readonly, nonatomic, getter=isRedirectedToDesktop) BOOL redirectedToDesktop;

+ (id)operationWithNodes:(const void *)a0 properties:(const void *)a1 destinationNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a2 allowInteraction:(BOOL)a3 addAliasSuffix:(BOOL)a4 allowRedirection:(BOOL)a5 delegate:(id)a6;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })authorizationPrompt;
- (struct shared_ptr<TOperationRecord> { struct TOperationRecord *x0; struct __shared_weak_count *x1; })configureOperationRecordForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (int)createNewAlias:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 properties:(const void *)a1 addAliasSuffix:(BOOL)a2;
- (int)createNewAliases;
- (int)handleSuboperationCompleted:(unsigned int)a0 targetNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;
- (BOOL)isDoneCreatingAliases;
- (id)makeDelegate;
- (void)reconfigureToRenameNodes:(const void *)a0;

@end
