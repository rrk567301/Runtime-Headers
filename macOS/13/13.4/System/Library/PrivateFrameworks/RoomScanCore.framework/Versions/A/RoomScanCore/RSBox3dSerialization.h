@interface RSBox3dSerialization : NSObject

- (struct Box3d { struct box3d { void /* unknown type, empty encoding */ x0[8]; } x0; id x1; float x2; id x3; struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; } x4; id x5; short x6; })box3dFromDictionary:(id)a0;
- (struct vector<Box3d, std::allocator<Box3d>> { struct Box3d *x0; struct Box3d *x1; struct __compressed_pair<Box3d *, std::allocator<Box3d>> { struct Box3d *x0; } x2; })boxes3dFromDictionary:(id)a0;
- (id)dictionaryFromBox3d:(struct Box3d { struct box3d { void /* unknown type, empty encoding */ x0[8]; } x0; id x1; float x2; id x3; struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; } x4; id x5; short x6; })a0;
- (id)dictionaryFromBoxes3d:(struct vector<Box3d, std::allocator<Box3d>> { struct Box3d *x0; struct Box3d *x1; struct __compressed_pair<Box3d *, std::allocator<Box3d>> { struct Box3d *x0; } x2; })a0;
- (id)dictionaryFromBoxes3dPointCloud:(struct vector<Box3d, std::allocator<Box3d>> { struct Box3d *x0; struct Box3d *x1; struct __compressed_pair<Box3d *, std::allocator<Box3d>> { struct Box3d *x0; } x2; })a0 pointCloud:(id)a1;
- (id)pointCloudFromDictionary:(id)a0;

@end
