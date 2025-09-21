@class NSString;

@interface MTLSamplerDescriptor : NSObject <NSCopying>

@property (nonatomic) char forceResourceIndex;
@property (nonatomic) unsigned long long resourceIndex;
@property (nonatomic) float lodBias;
@property (nonatomic) unsigned long long pixelFormat;
@property (nonatomic) unsigned long long reductionMode;
@property (nonatomic) unsigned long long minFilter;
@property (nonatomic) unsigned long long magFilter;
@property (nonatomic) unsigned long long mipFilter;
@property (nonatomic) unsigned long long maxAnisotropy;
@property (nonatomic) unsigned long long sAddressMode;
@property (nonatomic) unsigned long long tAddressMode;
@property (nonatomic) unsigned long long rAddressMode;
@property (nonatomic) unsigned long long borderColor;
@property (nonatomic) char normalizedCoordinates;
@property (nonatomic) float lodMinClamp;
@property (nonatomic) float lodMaxClamp;
@property (nonatomic) char lodAverage;
@property (nonatomic) unsigned long long compareFunction;
@property (nonatomic) char supportArgumentBuffers;
@property (copy, nonatomic) NSString *label;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
