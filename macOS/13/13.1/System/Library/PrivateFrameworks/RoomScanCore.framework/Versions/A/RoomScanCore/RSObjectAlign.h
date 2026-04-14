@class RS3DObjectMerger;

@interface RSObjectAlign : NSObject {
    RS3DObjectMerger *merger;
    struct vector<quad3dType2, std::allocator<quad3dType2>> { struct *__begin_; struct *__end_; struct __compressed_pair<quad3dType2 *, std::allocator<quad3dType2>> { struct *__value_; } __end_cap_; } walls;
    struct vector<int, std::allocator<int>> { int *__begin_; int *__end_; struct __compressed_pair<int *, std::allocator<int>> { int *__value_; } __end_cap_; } nearest_wall_indices_;
    struct vector<std::vector<float>, std::allocator<std::vector<float>>> { void *__begin_; void *__end_; struct __compressed_pair<std::vector<float> *, std::allocator<std::vector<float>>> { void *__value_; } __end_cap_; } obj_wall_dists_;
}

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)assignUuidsForNewObjects:(id)a0 withOldObjects:(id)a1;
- (struct vector<Box3d, std::allocator<Box3d>> { struct Box3d *x0; struct Box3d *x1; struct __compressed_pair<Box3d *, std::allocator<Box3d>> { struct Box3d *x0; } x2; })alignBoxesToNearestWall:(const void *)a0 conservative:(BOOL)a1;
- (struct Box3d { struct box3d { void /* unknown type, empty encoding */ x0[8]; } x0; id x1; float x2; id x3; struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; } x4; id x5; short x6; })optimizeBbox:(const void *)a0 intersectWallsIndex:(const void *)a1 nearestWallId:(int)a2 conservative:(BOOL)a3;
- (void)ResizeObjects:(id)a0;
- (void)AlignWithFloor:(id)a0 objects:(id)a1;
- (id)AlignWithWalls:(id)a0 objectAsset:(id)a1 worldPC:(id)a2 beautification:(BOOL)a3 chairBeautification:(BOOL)a4;

@end
