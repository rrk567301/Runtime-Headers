@interface TSCH3DPixelBuffer : NSObject

@property (readonly, nonatomic) struct tvec2<int> { union { int x; int r; int s; } ; union { int y; int g; int t; } ; } size;
@property (readonly, nonatomic) struct box<glm::detail::tvec2<int>> { struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } x0; struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } x1; } bounds;
@property (readonly, nonatomic) unsigned long long components;
@property (readonly, nonatomic) char *buffer;
@property (readonly, nonatomic) struct CGContext { } *context;

+ (id)pixelBufferWithSize:(void *)a0 components:(unsigned long long)a1;
+ (id)pixelBufferFromFramebuffer:(id)a0 processor:(id)a1 session:(id)a2 sourceRegion:(void *)a3 components:(unsigned long long)a4 flipped:(char)a5;

- (void)dealloc;
- (void *)data;
- (id).cxx_construct;
- (void)flip;
- (id)TSUImage;
- (void)copyPixelsFromData:(const void *)a0;
- (char)copyPixelsFromFramebuffer:(id)a0 processor:(id)a1 session:(id)a2 sourceRegion:(void *)a3 targetRegion:(void *)a4 flipped:(char)a5;
- (void)copyPixelsFromSourceBuffer:(id)a0 sourceRegion:(void *)a1 targetRegion:(void *)a2 flipped:(char)a3;
- (id)initWithSize:(void *)a0 components:(unsigned long long)a1;

@end
