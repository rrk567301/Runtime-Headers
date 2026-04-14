@class NSArray;
@protocol MTLRasterizationRateMap, MTLCommandBuffer;

@interface VFXRenderOptions : NSObject

@property (retain, nonatomic) id<MTLRasterizationRateMap> rasterizationRateMap;
@property (retain, nonatomic) NSArray *viewpoints;
@property (retain, nonatomic) id<MTLCommandBuffer> commandBuffer;
@property (nonatomic) unsigned long long coordinateSpace;
@property (nonatomic) BOOL waitUntilCompleted;

@end
