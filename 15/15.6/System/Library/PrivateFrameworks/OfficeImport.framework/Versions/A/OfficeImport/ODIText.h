@interface ODIText : NSObject

+ (void)addTextFromPoint:(id)a0 level:(unsigned int)a1 includeChildren:(char)a2 toShape:(id)a3 baseListStyle:(id)a4 state:(id)a5;
+ (id)baseListStyleForPoint:(id)a0 shape:(id)a1 isCentered:(char)a2 state:(id)a3;
+ (void)mapTextFromPoint:(id)a0 toShape:(id)a1 isCentered:(char)a2 includeChildren:(char)a3 state:(id)a4;
+ (void)mapTextFromPoint:(id)a0 toShape:(id)a1 isCenteredHorizontally:(char)a2 isCenteredVertically:(char)a3 includeChildren:(char)a4 state:(id)a5;

@end
