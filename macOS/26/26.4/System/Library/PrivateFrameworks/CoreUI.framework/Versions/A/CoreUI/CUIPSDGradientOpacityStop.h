@interface CUIPSDGradientOpacityStop : CUIPSDGradientStop <NSCoding> {
    double opacity;
}

+ (void)initialize;
+ (id)opacityStopWithLocation:(double)a0 opacity:(double)a1;

- (double)opacity;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (double)opacityLocation;
- (id)initWithLocation:(double)a0 opacity:(double)a1;
- (BOOL)isOpacityStop;

@end
