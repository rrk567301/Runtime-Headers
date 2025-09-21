@class VFXNode;

@interface VFXHitTestResult : NSObject {
    struct __CFXHitTestResult { } *_result;
}

@property (readonly, nonatomic) VFXNode *node;
@property (readonly, nonatomic) long long meshElementIndex;
@property (readonly, nonatomic) long long geometryIndex;
@property (readonly, nonatomic) long long faceIndex;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ localCoordinates;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ worldCoordinates;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ localNormal;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ worldNormal;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } modelTransform;
@property (readonly, nonatomic) VFXNode *boneNode;

+ (id)hitTestResultsFromHitTestResultRef:(struct __CFArray { } *)a0;

- (id)initWithResult:(struct __CFXHitTestResult { } *)a0;
- (void)dealloc;
- (id)description;
- (id)presentationNode;
- (struct CGPoint { double x0; double x1; })textureCoordinate;
- (struct CGPoint { double x0; double x1; })textureCoordinatesWithMappingChannel:(long long)a0;
- (void /* unknown type, empty encoding */)uv0;
- (id)presentationBoneNode;
- (float)sortingValue;

@end
