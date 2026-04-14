@class NSArray;

@interface CCMultiLayerDisplayServiceDescriptor : CCServiceDescriptor

@property (retain, nonatomic) NSArray *layerServices;
@property (nonatomic) BOOL useStencil;
@property (nonatomic) unsigned long long initialNHighDepthRangeLayerCount;
@property (nonatomic) BOOL enableGazeBasedDimming;

+ (id)new;
+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (BOOL)isSupported;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;

@end
