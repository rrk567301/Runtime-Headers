@interface _IFColor : NSObject

@property struct CGColor { } *color;

+ (id)whiteColor;
+ (id)colorWithWhite:(double)a0 alpha:(double)a1;

- (void)dealloc;
- (struct CGColor { } *)CGColor;
- (id)initWithCGColor:(struct CGColor { } *)a0;

@end
