@interface _IFColor : NSObject

@property struct CGColor { } *color;

+ (id)colorWithWhite:(double)a0 alpha:(double)a1;
+ (id)whiteColor;

- (id)initWithCGColor:(struct CGColor { } *)a0;
- (struct CGColor { } *)CGColor;
- (void)dealloc;

@end
