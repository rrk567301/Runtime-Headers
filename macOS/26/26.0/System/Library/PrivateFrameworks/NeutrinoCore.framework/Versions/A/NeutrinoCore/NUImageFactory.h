@interface NUImageFactory : NSObject

+ (struct CGImage { } *)newCGImageFromImageBuffer:(id)a0;
+ (id)_newCIImageFromImage:(id)a0;
+ (id)bufferImageWithLayout:(id)a0 format:(id)a1 colorSpace:(id)a2;
+ (id)bufferImageWithLayout:(id)a0 format:(id)a1 colorSpace:(id)a2 headroom:(float)a3;
+ (struct CGImage { } *)newCGImageFromBufferImage:(id)a0;
+ (struct CGImage { } *)newCGImageFromImageStorage:(id)a0 colorSpace:(id)a1;
+ (id)newCIImageFromBufferImage:(id)a0;
+ (id)surfaceImageWithLayout:(id)a0 format:(id)a1 colorSpace:(id)a2;
+ (id)surfaceImageWithLayout:(id)a0 format:(id)a1 colorSpace:(id)a2 headroom:(float)a3;

@end
