@interface CUIPSDGradientOpacityStop : CUIPSDGradientStop <NSCoding> {
    double opacity;
}

+ (void)initialize;
+ (id)opacityStopWithLocation:(double)a0 opacity:(double)a1;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (double)opacity;
- (BOOL)isOpacityStop;
- (id)initWithLocation:(double)a0 opacity:(double)a1;
- (double)opacityLocation;

@end
