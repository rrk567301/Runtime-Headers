@class NSArray;

@interface CCMultiViewWarpIntraFrameData : CCData {
    struct CCMultiViewSourceCameraStruct { long long sizeX; long long sizeY; NSArray *position; NSArray *rotation; long long projectionType; NSArray *erpPhiRange; NSArray *erpThetaRange; NSArray *perspectiveFocal; NSArray *perspectiveCenter; NSArray *depthRange; struct { void /* unknown type, empty encoding */ columns[4]; } rotationMatrix; long long pp; } _sourceCameras[2];
    struct CCPatchStruct { char atlasID; char viewID; long long sizeX; long long sizeY; long long positionInViewX; long long positionInViewY; long long positionInAtlasX; long long positionInAtlasY; char rotation; char flip; long long patchID; } _patchesArray[2];
}

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
