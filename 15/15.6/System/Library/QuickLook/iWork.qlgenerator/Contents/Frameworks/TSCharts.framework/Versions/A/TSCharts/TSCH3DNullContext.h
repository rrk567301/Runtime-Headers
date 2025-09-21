@interface TSCH3DNullContext : TSCH3DContext

@property (nonatomic) long long virtualScreen;
@property (nonatomic) struct box<glm::detail::tvec2<int>> { struct tvec2<int> { union { int x; int r; int s; } ; union { int y; int g; int t; } ; } _min; struct tvec2<int> { union { int x; int r; int s; } ; union { int y; int g; int t; } ; } _max; } viewport;

+ (id)currentSystemContext;

- (id).cxx_construct;
- (void)performBlock:(id /* block */)a0;
- (void)present;
- (void)enableSharing;
- (char)canFlushResourceHandles;
- (char)clearIfBoundAsCurrentContext;
- (void)flushBufferedCommandsForCurrentThread;
- (id)framebufferWithSize:(void *)a0 attributes:(const struct FramebufferAttributes { int x0; long long x1; int x2; int x3; int x4; char x5; char x6; char x7; } *)a1 textureAttributes:(const struct FramebufferAttributes { int x0; long long x1; int x2; int x3; int x4; char x5; char x6; char x7; } *)a2 resource:(id)a3;
- (char)isCurrentSystemContext;
- (void)prepareFramebufferForMetalBinding;
- (id)renderProcessorWithSession:(id)a0;
- (id)sharedID;
- (void)viewport:(void *)a0;

@end
