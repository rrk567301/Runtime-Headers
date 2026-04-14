@class NSMutableArray, GTMTLTextureRenderEncoderCommand;
@protocol MTLDevice;

@interface GTMTLTextureRenderEncoder : NSObject {
    GTMTLTextureRenderEncoderCommand *_currentCommand;
}

@property (readonly) id<MTLDevice> device;
@property (readonly) NSMutableArray *commands;

- (void)reset;
- (id)initWithDevice:(id)a0;
- (void)setTransform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a0;
- (void)setAnchor:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)resetCommand;
- (void)drawOverlay:(id)a0 color:(unsigned int)a1 shrinkToFit:(BOOL)a2;
- (void)drawOverlay:(id)a0 color:(unsigned int)a1 shrinkToFit:(BOOL)a2 waitEvent:(id)a3 waitValue:(unsigned long long)a4;
- (void)drawTexture:(id)a0 isDepthStencil:(BOOL)a1 shrinkToFit:(BOOL)a2;
- (void)drawTexture:(id)a0 isDepthStencil:(BOOL)a1 shrinkToFit:(BOOL)a2 waitEvent:(id)a3 waitValue:(unsigned long long)a4;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contentsScale:(double)a1;
- (void)setWaitForEvent:(id)a0 value:(unsigned long long)a1;
- (void)submitCommand;

@end
