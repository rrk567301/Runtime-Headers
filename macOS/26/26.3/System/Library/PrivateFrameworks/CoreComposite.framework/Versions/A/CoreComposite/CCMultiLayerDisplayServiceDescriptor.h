@class NSArray;

@interface CCMultiLayerDisplayServiceDescriptor : CCServiceDescriptor

@property (retain, nonatomic) NSArray *layerServices;
@property (nonatomic) BOOL useStencil;
@property (nonatomic) unsigned long long initialNHighDepthRangeLayerCount;
@property (nonatomic) BOOL enableGazeBasedDimming;

+ (id)new;
+ (BOOL)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isSupported;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;

@end
