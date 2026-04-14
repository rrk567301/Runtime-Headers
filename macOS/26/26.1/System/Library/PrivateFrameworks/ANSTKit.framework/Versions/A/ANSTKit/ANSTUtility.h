@interface ANSTUtility : NSObject

+ (int)createPixelBufferPoolWithCapacity:(unsigned long long)a0 pixelFormat:(unsigned int)a1 width:(unsigned long long)a2 height:(unsigned long long)a3 handle:(struct __CVPixelBufferPool **)a4;
+ (int)createPixelBufferWithPixelFormat:(unsigned int)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 handle:(struct __CVBuffer **)a3;

@end
