@interface TSCH3DExtrusionDoubleBevelGenerator : NSObject {
    struct vector<glm::detail::tvec3<float>, std::allocator<glm::detail::tvec3<float>>> { void *__begin_; void *__end_; struct __compressed_pair<glm::detail::tvec3<float> *, std::allocator<glm::detail::tvec3<float>>> { void *__value_; } __end_cap_; } _inputSpinePoints;
    struct vector<glm::detail::tvec3<float>, std::allocator<glm::detail::tvec3<float>>> { void *__begin_; void *__end_; struct __compressed_pair<glm::detail::tvec3<float> *, std::allocator<glm::detail::tvec3<float>>> { void *__value_; } __end_cap_; } _spinePoints;
    struct vector<glm::detail::tvec2<float>, std::allocator<glm::detail::tvec2<float>>> { void *__begin_; void *__end_; struct __compressed_pair<glm::detail::tvec2<float> *, std::allocator<glm::detail::tvec2<float>>> { void *__value_; } __end_cap_; } _scaleValues;
}

@property (nonatomic) float bevelHeight;
@property (nonatomic) long long bevelSlices;
@property (nonatomic) BOOL enableBevelEdges;
@property (readonly, nonatomic) long long bottomNonBevelStartIndex;
@property (readonly, nonatomic) long long bottomBevelStartIndex;

+ (id)generator;
+ (id)namedBevelInterpolationShaderFunction;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)generate;
- (void *)inputSpinePoints;
- (const void *)spinePoints;
- (const void *)scaleValues;
- (float)spineUValueAtIndex:(long long)a0;
- (void)createSpinePointArray;
- (long long)topBevelStartIndex;
- (void)generateTop;
- (struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })bottomDirection;
- (void)generateBottom;
- (void)adjustBottomOffset;
- (float)scaleUValueAtIndex:(long long)a0;
- (void)resetAllScales;
- (void)adjustTopScales;
- (void)adjustBottomScales;
- (long long)topSlices;
- (long long)bottomSlices;

@end
