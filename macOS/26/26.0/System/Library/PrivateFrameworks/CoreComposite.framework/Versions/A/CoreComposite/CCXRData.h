@class CCTextureData, CCRasterizationRateMapState;
@protocol MTLRasterizationRateMap;

@interface CCXRData : CCData {
    struct CCXRTargetStruct { struct CCCameraStruct { struct { void /* unknown type, empty encoding */ columns[4]; } projectionMatrix; struct { void /* unknown type, empty encoding */ columns[4]; } viewMatrix; unsigned long long timestamp; struct CCGazeDataStruct { void /* unknown type, empty encoding */ gazeUV; void /* unknown type, empty encoding */ gazeDirection; void /* unknown type, empty encoding */ gazeTanAngles; float gazeUncertainty; } gaze; struct CCTextureViewStruct { struct { double originX; double originY; double width; double height; double znear; double zfar; } viewport; long long sliceIndex; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } physicalViewportSize; } textureView; } camera; id<MTLRasterizationRateMap> rasterizationRateMap; CCRasterizationRateMapState *rasterizationRateMapState; CCTextureData *colorTexture; CCTextureData *depthTexture; CCTextureData *motionTexture; struct { struct { void /* unknown type, empty encoding */ columns[4]; } homographyTarget; struct { void /* unknown type, empty encoding */ columns[4]; } homographySource; struct { void /* unknown type, empty encoding */ columns[4]; } homographyClient; struct { void /* unknown type, empty encoding */ columns[4]; } clampPlane; struct { void /* unknown type, empty encoding */ columns[4]; } projectionMatrixWithHomography; } transforms; float constantDepth; BOOL renderedBoundingBoxViewportIsSet; struct { double originX; double originY; double width; double height; double znear; double zfar; } renderedBoundingBoxViewport; struct CCOccupancyPacked { void /* unknown type, empty encoding */ dimensions; void /* unknown type, empty encoding */ occupancy; } renderedOccupancy; long long eyeIndex; } targetsArray[2];
    long long _targetMode;
    unsigned long long _resourceID;
    unsigned long long _frameUID;
    BOOL _needsSanitization;
    BOOL _reverseZ;
    BOOL _isTrackableAnchorEnabled[2];
    struct { void /* unknown type, empty encoding */ columns[4]; } _trackableAnchorTransformMatrix[2];
}

@property (nonatomic) long long targetLayout;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)resourceID;
- (void)acceptVisitor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)dataWithSerializedMetalObjects:(id)a0 deviceGroup:(id)a1;
- (void)deserializeMetalObjects:(id)a0 deviceGroup:(id)a1;
- (BOOL)isSharedInput;
- (BOOL)isVRREnabled;
- (BOOL)isVRRWithDedicatedStereoInputs;

@end
