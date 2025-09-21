@class NSString;

@interface TSCH3DFramebuffer : NSObject <TSCH3DPipelineLinkable> {
    struct FramebufferAttributes { int type; long long samples; int colorDataType; int colorFormat; int depthDataType; char linearFilter; char discardHint; char useIOSurfaceBacking; } _framebufferAttributes;
}

@property (readonly, nonatomic) unsigned long long uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)framebufferWithFramebufferAttributes:(const struct FramebufferAttributes { int x0; long long x1; int x2; int x3; int x4; char x5; char x6; char x7; } *)a0;

- (void)dealloc;
- (id).cxx_construct;
- (id)output;
- (const struct FramebufferAttributes { int x0; long long x1; int x2; int x3; int x4; char x5; char x6; char x7; } *)framebufferAttributes;
- (id)initWithFramebufferAttributes:(const struct FramebufferAttributes { int x0; long long x1; int x2; int x3; int x4; char x5; char x6; char x7; } *)a0;
- (id)pixelBufferFromViewport:(void *)a0 components:(unsigned long long)a1 flipped:(char)a2 forProcessor:(id)a3 session:(id)a4;
- (id)resolvingFramebuffer;

@end
