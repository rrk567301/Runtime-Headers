@interface CMIStyleEngineProcessorUtilities : NSObject

+ (unsigned long long)getMTLPixelFormatForCVPixelBuffer:(struct __CVBuffer { } *)a0 plane:(unsigned int)a1;
+ (unsigned int)numberOfPixelBufferPlanesThatNeedToBeBoundToMTLTextures:(struct __CVBuffer { } *)a0;
+ (BOOL)textureIsLinearSRGB:(id)a0;

@end
