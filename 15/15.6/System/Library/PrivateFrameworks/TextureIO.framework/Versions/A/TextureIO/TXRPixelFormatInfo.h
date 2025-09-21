@interface TXRPixelFormatInfo : NSObject

+ (char)isASTC:(unsigned long long)a0;
+ (char)isETC2:(unsigned long long)a0;
+ (char)isGammaEncoded:(unsigned long long)a0;
+ (char)isSRGB:(unsigned long long)a0;
+ (unsigned char)componentsPerPixel:(unsigned long long)a0;
+ (char)hasAlpha:(unsigned long long)a0;
+ (char)isBC1to5:(unsigned long long)a0;
+ (char)isBC6to7:(unsigned long long)a0;
+ (char)isCompressed:(unsigned long long)a0;
+ (char)isFloat:(unsigned long long)a0;
+ (char)isInteger:(unsigned long long)a0;
+ (char)isPVRTC:(unsigned long long)a0;
+ (struct TXRImageMemoryLayout { unsigned long long x0; unsigned long long x1; })packedMemoryLayoutForFormat:(SEL)a0 dimensions:(unsigned long long)a1;
+ (unsigned char)pixelBytes:(unsigned long long)a0;

@end
