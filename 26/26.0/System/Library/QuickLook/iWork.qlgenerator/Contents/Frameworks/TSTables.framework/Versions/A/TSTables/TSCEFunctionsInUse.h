@class TSCECalculationEngine;

@interface TSCEFunctionsInUse : NSObject {
    struct unordered_map<TSCEFunctionIndex, TSCEReferenceSet *, std::hash<TSCEFunctionIndex>, std::equal_to<TSCEFunctionIndex>, std::allocator<std::pair<const TSCEFunctionIndex, TSCEReferenceSet *>>> { struct __hash_table<std::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, std::__unordered_map_hasher<TSCEFunctionIndex, std::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, std::hash<TSCEFunctionIndex>, std::equal_to<TSCEFunctionIndex>>, std::__unordered_map_equal<TSCEFunctionIndex, std::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, std::equal_to<TSCEFunctionIndex>, std::hash<TSCEFunctionIndex>>, std::allocator<std::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _cellRefsUsingFunction;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
}

@property (readonly, retain, nonatomic) TSCECalculationEngine *calcEngine;

- (void)dealloc;
- (id)description;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addFunctionUsesInFormula:(id)a0 atCellRef:(const struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a1 outContainsVolatileFunction:(BOOL *)a2;
- (void)addUseOfFunctions:(const void *)a0 atCellRef:(const struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a1;
- (void)dirtyCellsUsingFunction:(unsigned short)a0;
- (struct vector<TSCEFunctionIndex, std::allocator<TSCEFunctionIndex>> { unsigned short *x0; unsigned short *x1; unsigned short *x2; })functionsUsed;
- (id)initWithCalcEngine:(id)a0;
- (void)resetCellsUsingFunction:(unsigned short)a0;

@end
