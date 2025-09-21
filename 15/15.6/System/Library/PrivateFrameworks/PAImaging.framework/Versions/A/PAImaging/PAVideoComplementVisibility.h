@interface PAVideoComplementVisibility : NSObject

+ (unsigned short)computeNewVideoComplementState:(unsigned short)a0 implicitlyHidden:(char)a1 hideVideoComplement:(char)a2;
+ (unsigned short)computeNewVideoComplementStateForRevert:(char)a0;
+ (char)isVideoComplementImplicitlyHidden:(id)a0;

@end
