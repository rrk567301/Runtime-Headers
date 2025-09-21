@interface TXRDataConverter : NSObject

+ (id)newImageFromSourceImage:(id)a0 newPixelFormat:(unsigned long long)a1 bufferAllocator:(id)a2 gammaDegamma:(char)a3 error:(id *)a4;
+ (id)newPixelFormatSetForCGImage:(struct CGImage { } *)a0 displayGamut:(unsigned long long)a1 options:(id)a2;
+ (id)newImageFromSourceImage:(id)a0 newPixelFormat:(unsigned long long)a1 bufferAllocator:(id)a2 multiplyAlpha:(char)a3 gammaDegamma:(char)a4 error:(id *)a5;

@end
