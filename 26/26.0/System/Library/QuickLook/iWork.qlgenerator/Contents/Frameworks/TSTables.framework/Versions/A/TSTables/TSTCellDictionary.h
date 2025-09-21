@class TSPTemporaryObjectContextDelegate, TSPObjectContext;

@interface TSTCellDictionary : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock[20];
    struct unordered_map<TSUCellCoord, TSTCell *, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, std::allocator<std::pair<const TSUCellCoord, TSTCell *>>> { struct __hash_table<std::__hash_value_type<TSUCellCoord, TSTCell *>, std::__unordered_map_hasher<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSTCell *>, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>>, std::__unordered_map_equal<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSTCell *>, std::equal_to<TSUCellCoord>, std::hash<TSUCellCoord>>, std::allocator<std::__hash_value_type<TSUCellCoord, TSTCell *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTCell *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTCell *>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTCell *>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTCell *>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _cellsByCoord[20];
    struct TSCECellCoordSet { struct TSUCellRect { struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } origin; struct { unsigned int numberOfColumns; unsigned int numberOfRows; } size; } _rectRepresentation; struct map<unsigned short, TSUIndexSet, std::less<unsigned short>, std::allocator<std::pair<const unsigned short, TSUIndexSet>>> { struct __tree<std::__value_type<unsigned short, TSUIndexSet>, std::__map_value_compare<unsigned short, std::__value_type<unsigned short, TSUIndexSet>, std::less<unsigned short>>, std::allocator<std::__value_type<unsigned short, TSUIndexSet>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } _rowsPerColumn; } _cellCoordsToStyleUpgradeForFormulatext[20];
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _hasRichTextLock;
}

@property (readonly, nonatomic) TSPTemporaryObjectContextDelegate *temporaryObjectContextDelegate;
@property (readonly, nonatomic) TSPObjectContext *temporaryContext;
@property (readonly, nonatomic) BOOL hasAnyRichTextCells;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)removeAllCells;
- (void)applyBlockToAllCells:(id /* block */)a0;
- (id)cellAtCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0;
- (void)setCell:(id)a0 atCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a1;
- (id)cellMap;
- (struct TSCECellCoordSet { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; struct map<unsigned short, TSUIndexSet, std::less<unsigned short>, std::allocator<std::pair<const unsigned short, TSUIndexSet>>> { struct __tree<std::__value_type<unsigned short, TSUIndexSet>, std::__map_value_compare<unsigned short, std::__value_type<unsigned short, TSUIndexSet>, std::less<unsigned short>>, std::allocator<std::__value_type<unsigned short, TSUIndexSet>>> { void *x0; struct __tree_end_node<std::__tree_node_base<void *> *> { void *x0; } x1; unsigned long long x2; } x0; } x1; })allCellCoords;
- (id)concurrentCellMapForTable:(id)a0;
- (BOOL)hasCellAtCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0;
- (BOOL)noLockShouldUpgradeStyleForFormulatextForCellCoord:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a0;
- (void)removeCellAtCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0;
- (BOOL)shouldUpgradeStyleForFormulatextForCellCoord:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a0;
- (void)upgradeStyleForFormulatextForCellCoord:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a0;

@end
