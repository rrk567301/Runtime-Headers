@class NSMutableArray, TSCH3DTextureAtlasTextureResource;

@interface TSCH3DTextureAtlasTexture : NSObject {
    float _samples;
    NSMutableArray *_labels;
    struct vector<glm::detail::tvec2<int>, std::allocator<glm::detail::tvec2<int>>> { void *__begin_; void *__end_; void *__cap_; } _positions;
    long long _currentxpos;
    long long _currentypos;
    long long _currentheight;
    TSCH3DTextureAtlasTextureResource *_resource;
}

@property (readonly, nonatomic) struct tvec2<int> { union { int x; int r; int s; } ; union { int y; int g; int t; } ; } size;

- (id)resource;
- (id).cxx_construct;
- (id)initWithSize:(struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })a0;
- (void).cxx_destruct;
- (struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })addLabel:(id)a0;
- (id)getTextureDataBuffer;
- (void)p_invalidateResource;

@end
