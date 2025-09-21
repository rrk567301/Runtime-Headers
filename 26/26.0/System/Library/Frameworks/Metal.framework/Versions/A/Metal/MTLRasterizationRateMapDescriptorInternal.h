@class NSString, MTLRasterizationRateLayerArrayInternal, __cap_, __end_;

@interface MTLRasterizationRateMapDescriptorInternal : MTLRasterizationRateMapDescriptor <MTLRasterizationRateMapDescriptorSPI> {
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _screenSize;
    NSString *_label;
    struct vector<MTLRasterizationRateLayerDescriptor *, std::allocator<MTLRasterizationRateLayerDescriptor *>> { __end_ **__begin_; __cap_ **x0; id *x1; } _layers;
    MTLRasterizationRateLayerArrayInternal *_layerAccessor;
}

@property (nonatomic) BOOL skipSampleValidationAndInterpolation;
@property (nonatomic) BOOL skipSampleValidationAndApplySampleAtTileGranularity;
@property (nonatomic) unsigned long long mutability;
@property (nonatomic) float minFactor;

- (oneway void)dealloc;
- (id)formattedDescription:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)label;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })screenSize;
- (id)description;
- (id)layers;
- (id).cxx_construct;
- (void)setLabel:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)layerCount;
- (const id *)layerPointer:(unsigned long long *)a0;
- (id)initWithScreenSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (id)layerAtIndex:(unsigned long long)a0;
- (void)setLayer:(id)a0 atIndex:(unsigned long long)a1;
- (void)setScreenSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;

@end
