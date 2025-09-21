@interface VCStringUtils : NSObject

+ (const char *)cStringFromOperatingMode:(int)a0;
+ (const char *)cStringFromTierPickerMode:(unsigned char)a0;
+ (BOOL)convertString:(id)a0 toFourcc:(unsigned int *)a1;

@end
