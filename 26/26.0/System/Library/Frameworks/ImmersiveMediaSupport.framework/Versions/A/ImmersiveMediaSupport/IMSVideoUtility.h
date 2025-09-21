@interface IMSVideoUtility : NSObject

+ (unsigned int)getImageFunctionFromFourCC:(unsigned int)a0;
+ (unsigned long long)getMTLPixelFormatFromFourCC:(unsigned int)a0 planeIndex:(unsigned int)a1;
+ (struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; })getTextureSwizzleFromFourCC:(unsigned int)a0;
+ (unsigned int)getUncompressedFourCC:(unsigned int)a0;
+ (unsigned int)getYCbCrMatrixTypeFromString:(id)a0 format:(unsigned int)a1;
+ (BOOL)isVideoFormatFullRangeFromFourCC:(unsigned int)a0;

@end
