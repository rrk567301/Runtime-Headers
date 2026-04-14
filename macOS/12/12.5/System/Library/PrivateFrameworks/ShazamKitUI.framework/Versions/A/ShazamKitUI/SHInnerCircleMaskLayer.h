@interface SHInnerCircleMaskLayer : CALayer

@property double innerCircleRelativeSize;

+ (BOOL)needsDisplayForKey:(id)a0;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void)setup;

@end
