@interface TNPageCoordinateDictionary : NSObject {
    struct map<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>, std::less<TSUCellCoord>, std::allocator<std::pair<const TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>>>> { struct __tree<std::__value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>>, std::__map_value_compare<TSUCellCoord, std::__value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>>, std::less<TSUCellCoord>>, std::allocator<std::__value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>>>> { void *__begin_node_; struct { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; } ; struct { unsigned long long __size_; } ; } __tree_; } _pageCoordinateDictionary;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwlock;
}

- (id)init;
- (id)allObjects;
- (void).cxx_destruct;
- (void)dealloc;
- (void)removeAllObjects;
- (id).cxx_construct;
- (id)objectForPageCoordinate:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0;
- (void)setObject:(id)a0 forPageCoordinate:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a1;

@end
