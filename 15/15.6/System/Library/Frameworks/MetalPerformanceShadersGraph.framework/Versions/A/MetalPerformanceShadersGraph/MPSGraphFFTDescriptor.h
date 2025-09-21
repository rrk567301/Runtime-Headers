@interface MPSGraphFFTDescriptor : MPSGraphObject <NSCopying>

@property (nonatomic) char inverse;
@property (nonatomic) unsigned long long scalingMode;
@property (nonatomic) char roundToOddHermitean;

+ (id)descriptor;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
