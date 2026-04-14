@interface OAVTextBodyProperties : NSObject

+ (int)readRotation:(id)a0;
+ (int)readWrapStyle:(id)a0;
+ (int)readAnchor:(id)a0;
+ (unsigned char)flowTypeWithLayoutFlowString:(id)a0 altLayoutFlowString:(id)a1;
+ (void)readFromManager:(id)a0 toShape:(id)a1 state:(id)a2;

@end
