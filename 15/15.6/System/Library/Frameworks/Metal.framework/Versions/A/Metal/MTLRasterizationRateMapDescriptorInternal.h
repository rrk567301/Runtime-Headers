@class NSString, __end_cap_, MTLRasterizationRateLayerArrayInternal, __end_;

@interface MTLRasterizationRateMapDescriptorInternal : MTLRasterizationRateMapDescriptor <MTLRasterizationRateMapDescriptorSPI> {
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _screenSize;
    NSString *_label;
    struct vector<MTLRasterizationRateLayerDescriptor *, std::allocator<MTLRasterizationRateLayerDescriptor *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<MTLRasterizationRateLayerDescriptor **, std::allocator<MTLRasterizationRateLayerDescriptor *>> { id *__value_; } x1; } _layers;
    MTLRasterizationRateLayerArrayInternal *_layerAccessor;
}

@property (nonatomic) char skipSampleValidationAndInterpolation;
@property (nonatomic) char skipSampleValidationAndApplySampleAtTileGranularity;
@property (nonatomic) unsigned long long mutability;
@property (nonatomic) float minFactor;

- (oneway void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)formattedDescription:(unsigned long long)a0;
- (id)label;
- (unsigned long long)layerCount;
- (const id *)layerPointer:(unsigned long long *)a0;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })screenSize;
- (void)setLabel:(id)a0;
- (id)layers;
- (id)initWithScreenSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (id)layerAtIndex:(unsigned long long)a0;
- (void)setLayer:(id)a0 atIndex:(unsigned long long)a1;
- (void)setScreenSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;

@end
