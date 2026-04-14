@class NSData, MTLRasterizationRateMapDescriptor;
@protocol MTLBuffer;

@interface CCRasterizationRateMapState : NSObject <NSCopying, NSSecureCoding> {
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _rasterizationRateMapLayersPhysicalSize[2];
    id<MTLBuffer> _rasterizationRateMapBuffer;
    struct { unsigned long long size; unsigned long long align; } _parameterBufferSizeAndAlign;
    MTLRasterizationRateMapDescriptor *_rasterizationRateMapDescriptor;
    long long _layerCount;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _screenSize;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _physicalGranularity;
    int _lutSize;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *rasterizationRateMapBufferData;

- (void)acceptVisitor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)deserializeRateMapBuffer:(id)a0;
- (id)initWithMTLRasterizationRateMap:(id)a0 rasterizationRateMapBuffer:(id)a1;
- (id)reconstructApproximateRateMap;
- (void)serializeRateMapBuffer:(id)a0;

@end
