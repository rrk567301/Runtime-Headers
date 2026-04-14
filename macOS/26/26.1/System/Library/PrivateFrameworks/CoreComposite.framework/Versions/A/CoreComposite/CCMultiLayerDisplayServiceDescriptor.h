@class NSArray;

@interface CCMultiLayerDisplayServiceDescriptor : CCServiceDescriptor

@property (retain, nonatomic) NSArray *layerServices;
@property (nonatomic) BOOL useStencil;
@property (nonatomic) unsigned long long initialNHighDepthRangeLayerCount;
@property (nonatomic) BOOL enableGazeBasedDimming;

+ (BOOL)supportsSecureCoding;
+ (id)new;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isSupported;
- (id)init;

@end
