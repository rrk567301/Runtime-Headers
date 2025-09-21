@class CIBlendKernel;

@interface CIRenderDestination : NSObject {
    void *_priv;
}

@property (readonly) unsigned long long width;
@property (readonly) unsigned long long height;
@property unsigned long long alphaMode;
@property (getter=isFlipped) char flipped;
@property (getter=isDithered) char dithered;
@property (getter=isClamped) char clamped;
@property (nonatomic) struct CGColorSpace { } *colorSpace;
@property (retain, nonatomic) CIBlendKernel *blendKernel;
@property char blendsInDestinationColorSpace;

+ (int)_crashed_because_nonaddressable_memory_was_passed_to_initWithBitmapData:(void *)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 bytesPerRow:(unsigned long long)a3 format:(int)a4;

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)init;
- (char)isCompressed;
- (id)label;
- (void)setLabel:(id)a0;
- (id)surface;
- (int)format;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)initWithIOSurface:(id)a0;
- (id)_initWithInternalRenderDestination:(void *)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 format:(int)a3 colorspace:(struct CGColorSpace { } *)a4;
- (void *)_internalRenderDestination;
- (struct CIRenderDestinationInternal { struct RenderDestination *x0; unsigned long long x1; unsigned long long x2; int x3; int x4; struct { double x0[3]; double x1[3]; double x2[3]; double x3; double x4; } x5; unsigned long long x6; char x7; char x8; int x9; char x10; char x11; char x12; id x13; } *)_internalRepresentation;
- (void *)_render:(void *)a0 withContext:(void *)a1;
- (void)_set_YCC_matrix:(int)a0 fullRange:(BOOL)a1 depth:(int)a2 isFloat:(float)a3;
- (int)ditherDepth;
- (id)imageRepresentation;
- (id)initWithBitmapData:(void *)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 bytesPerRow:(unsigned long long)a3 format:(int)a4;
- (id)initWithGLTexture:(unsigned int)a0 target:(unsigned int)a1 width:(unsigned long long)a2 height:(unsigned long long)a3;
- (id)initWithMTLTexture:(id)a0 commandBuffer:(id)a1;
- (id)initWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 pixelFormat:(unsigned int)a2 colorSpace:(struct CGColorSpace { } *)a3 pixelBufferProvider:(id /* block */)a4;
- (id)initWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 pixelFormat:(unsigned int)a2 colorSpace:(struct CGColorSpace { } *)a3 surfaceProvider:(id /* block */)a4;
- (id)initWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 pixelFormat:(unsigned long long)a2 commandBuffer:(id)a3 mtlTextureProvider:(id /* block */)a4;
- (void)setCompressed:(char)a0;

@end
