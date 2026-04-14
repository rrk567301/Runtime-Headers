@interface PAVideoComplementVisibility : NSObject

+ (unsigned short)computeNewVideoComplementStateForRevert:(BOOL)a0;
+ (unsigned short)computeNewVideoComplementState:(unsigned short)a0 implicitlyHidden:(BOOL)a1 hideVideoComplement:(BOOL)a2;
+ (BOOL)compositionIsVideoComplementImplicitlyHidden:(id)a0;
+ (BOOL)isVideoComplementImplicitlyHidden:(id)a0 asset:(id)a1;

@end
