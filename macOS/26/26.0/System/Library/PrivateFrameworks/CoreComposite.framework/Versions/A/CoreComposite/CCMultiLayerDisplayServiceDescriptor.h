@class NSArray;

@interface CCMultiLayerDisplayServiceDescriptor : CCServiceDescriptor

@property (retain, nonatomic) NSArray *layerServices;
@property (nonatomic) BOOL useStencil;
@property (nonatomic) unsigned long long initialNHighDepthRangeLayerCount;
@property (nonatomic) BOOL enableGazeBasedDimming;

+ (BOOL)supportsSecureCoding;
+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isSupported;

@end
