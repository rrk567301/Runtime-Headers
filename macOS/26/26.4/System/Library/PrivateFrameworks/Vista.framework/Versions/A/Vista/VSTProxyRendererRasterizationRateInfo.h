@class NSArray;

@interface VSTProxyRendererRasterizationRateInfo : NSObject

@property (retain, nonatomic) NSArray *cones;
@property (retain, nonatomic) NSArray *boxes;
@property (nonatomic) float defaultRasterizationRate;
@property (nonatomic) BOOL useOriginalMap;

- (void).cxx_destruct;

@end
