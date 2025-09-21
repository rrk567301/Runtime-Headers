@class CIImage, UniKernel;
@protocol MTLTexture, MTLCommandBuffer;

@interface UniImage : NSObject

@property (readonly, nonatomic) CIImage *image;
@property (retain, nonatomic) id<MTLTexture> texture;
@property (retain, nonatomic) UniKernel *kernel;
@property (retain, nonatomic) id<MTLCommandBuffer> buffer;

+ (id)imageWithObject:(id)a0;
+ (id)imageWithCIImage:(id)a0;
+ (id)_cleanupParameterDescription:(id)a0;
+ (id)_objectsForNames:(id)a0 forKernel:(id)a1;
+ (id)_orderedInputNamesForKernel:(id)a0 inputImageSet:(id)a1 outputImageSet:(id)a2 showNonImageParams:(BOOL)a3;
+ (void)_spewDot:(id)a0 filename:(id)a1;
+ (id)_stringForObject:(id)a0 objectToStringMap:(id)a1;
+ (id)_textureDescriptionForDot:(id)a0;
+ (id)imageWithMTLTexture:(id)a0;
+ (void)metalRenderImageArray:(id)a0 queue:(id)a1 waitUntilScheduled:(char)a2 waitUntilCompleted:(char)a3;

- (id)description;
- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })extent;
- (id)initWithCIImage:(id)a0;
- (id)debugQuickLookObject;
- (id)initWithKernel:(id)a0;
- (id)coreImageRender:(id)a0;
- (id)coreImageRender:(id)a0 subRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 outputTexture:(id)a2;
- (id)initWithMTLTexture:(id)a0;
- (void)metalRender;
- (void)metalRender:(id)a0 waitUntilScheduled:(char)a1 waitUntilCompleted:(char)a2;

@end
