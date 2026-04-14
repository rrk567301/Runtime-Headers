@interface MicroLocationDaemon.ULVisionUtilities : NSObject

+ (id)reduceFormatTo:(id)a0;
+ (struct __CVBuffer { } *)createPixelBufferFrom:(id)a0 format:(unsigned int)a1;
+ (struct __CVBuffer { } *)createPixelBufferFrom:(id)a0 size:(struct CGSize { double x0; double x1; })a1 format:(unsigned int)a2;
+ (struct __CVBuffer { } *)createPixelBufferRotatedUpFrom:(struct __CVBuffer { } *)a0 fromOrientation:(unsigned int)a1;
+ (struct __CVBuffer { } *)createPixelBufferWithSize:(struct CGSize { double x0; double x1; })a0 format:(unsigned int)a1;
+ (BOOL)writePixelBufferTo:(id)a0 from:(struct __CVBuffer { } *)a1 fileType:(id)a2 error:(id *)a3;

- (id)init;

@end
