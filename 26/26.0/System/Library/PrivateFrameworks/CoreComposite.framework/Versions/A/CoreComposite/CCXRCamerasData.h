@class NSString;

@interface CCXRCamerasData : CCData <CCVisitable> {
    struct CCCameraStruct { struct { void /* unknown type, empty encoding */ columns[4]; } projectionMatrix; struct { void /* unknown type, empty encoding */ columns[4]; } viewMatrix; unsigned long long timestamp; struct CCGazeDataStruct { void /* unknown type, empty encoding */ gazeUV; void /* unknown type, empty encoding */ gazeDirection; void /* unknown type, empty encoding */ gazeTanAngles; float gazeUncertainty; } gaze; struct CCTextureViewStruct { struct { double originX; double originY; double width; double height; double znear; double zfar; } viewport; long long sliceIndex; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } physicalViewportSize; } textureView; } _camerasArray[2];
    unsigned long long _cameraCount;
    double _timestamp;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)copyTo:(id)a0;
- (void)acceptVisitor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
