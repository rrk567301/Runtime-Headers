@interface _IFColor : NSObject

@property struct CGColor { } *color;

+ (id)whiteColor;
+ (id)colorWithWhite:(double)a0 alpha:(double)a1;

- (id)initWithCGColor:(struct CGColor { } *)a0;
- (struct CGColor { } *)CGColor;
- (void)dealloc;

@end
