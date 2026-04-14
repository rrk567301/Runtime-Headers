@interface TSTPivotGroupingColumnOptionsMap : TSPObject <NSCopying> {
    struct map<TSKUIDStruct, TSTPivotGroupingColumnOptions *, std::less<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, TSTPivotGroupingColumnOptions *>>> { struct __tree<std::__value_type<TSKUIDStruct, TSTPivotGroupingColumnOptions *>, std::__map_value_compare<TSKUIDStruct, std::__value_type<TSKUIDStruct, TSTPivotGroupingColumnOptions *>, std::less<TSKUIDStruct>>, std::allocator<std::__value_type<TSKUIDStruct, TSTPivotGroupingColumnOptions *>>> { void *__begin_node_; struct { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; } ; struct { unsigned long long __size_; } ; } __tree_; } _optionsForUidMap;
}

- (void)clear;
- (BOOL)hasContent;
- (unsigned long long)count;
- (struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *x0; struct TSKUIDStruct *x1; struct { struct TSKUIDStruct *x0; } x2; })keys;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)description;
- (void)enumerateOptionsUsingBlock:(id /* block */)a0;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (id)pivotOptionsForUID:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0;
- (id)prunedCopyWithUids:(void *)a0;
- (void)setPivotOptions:(id)a0 forUid:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a1;

@end
