@interface CUIPSDGradientStop : NSObject <NSCoding, NSCopying> {
    double location;
}

+ (void)initialize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (double)location;
- (id)initWithLocation:(double)a0;
- (void)setLocation:(double)a0;
- (BOOL)isColorStop;
- (BOOL)isOpacityStop;
- (BOOL)isDoubleStop;

@end
