@interface VCAggregatorUtils : NSObject

+ (int)videoResolutionForWidth:(unsigned int)a0 height:(unsigned int)a1;
+ (id)safeRoundOffNumber:(id)a0 toSignificantDigits:(unsigned char)a1;
+ (id)safeRoundOffNumber:(id)a0 toSignificantDigits:(unsigned char)a1 maxAllowedValue:(id)a2;
+ (struct CGSize { double x0; double x1; })sizeForVideoResolution:(int)a0;
+ (id)validBitmapIndices:(unsigned int)a0 size:(int)a1;

@end
