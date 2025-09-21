@class NSArray;
@protocol MTLTexture;

@interface CCWorldDepthData : CCData {
    id<MTLTexture> _depthTexturesArray[2];
    struct CCCameraStruct { struct { void /* unknown type, empty encoding */ columns[4]; } projectionMatrix; struct { void /* unknown type, empty encoding */ columns[4]; } viewMatrix; unsigned long long timestamp; struct CCGazeDataStruct { void /* unknown type, empty encoding */ gazeUV; void /* unknown type, empty encoding */ gazeDirection; void /* unknown type, empty encoding */ gazeTanAngles; float gazeUncertainty; } gaze; struct CCTextureViewStruct { struct { double originX; double originY; double width; double height; double znear; double zfar; } viewport; long long sliceIndex; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } physicalViewportSize; } textureView; } _depthCameraTargetArray[2];
    long long depthVisualizationType;
    struct { void /* unknown type, empty encoding */ columns[3]; } _leftIntrinsics;
    struct { void /* unknown type, empty encoding */ columns[3]; } _rightIntrinsics;
}

@property (retain, nonatomic) NSArray *depthTextureStorage;

+ (BOOL)supportsSecureCoding;

- (void)acceptVisitor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)dataWithSerializedMetalObjects:(id)a0 deviceGroup:(id)a1;
- (void)deserializeMetalObjects:(id)a0 deviceGroup:(id)a1;

@end
