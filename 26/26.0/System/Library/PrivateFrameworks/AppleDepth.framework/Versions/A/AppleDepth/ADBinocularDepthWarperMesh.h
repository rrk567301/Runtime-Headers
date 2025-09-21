@interface ADBinocularDepthWarperMesh : NSObject {
    struct maps_uv { float *map_u; float *map_v; struct vImageMapping *mapping; } _undistortMaps;
    struct maps_uv { float *map_u; float *map_v; struct vImageMapping *mapping; } _undistortHalvedMaps;
}

+ (void)rectifyCameraPairForLeftCalib:(id)a0 rightCalib:(id)a1 leftRectifiedCameraToPlatformTransform:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a2 rightRectifiedCameraToPlatformTransform:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a3 prioritization:(long long)a4;
+ (struct { void /* unknown type, empty encoding */ x0[3]; })skew:(SEL)a0;
+ (BOOL)updateWarper:(struct maps_uv { float *x0; float *x1; struct vImageMapping *x2; } *)a0 source:(id)a1 target:(id)a2;

- (void)dealloc;
- (id)init;
- (void)deallocMemory;
- (long long)undistortColorImage:(struct __CVBuffer { } *)a0 undistortedImage:(struct __CVBuffer { } *)a1;
- (BOOL)updateWithSource:(id)a0 target:(id)a1;

@end
