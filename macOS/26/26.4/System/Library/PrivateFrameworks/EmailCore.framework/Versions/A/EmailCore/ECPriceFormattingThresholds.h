@interface ECPriceFormattingThresholds : NSObject

@property (nonatomic) unsigned long long nodeDepthThreshold;
@property (nonatomic) unsigned long long bodyChildCountThreshold;

- (id)initWithNodeDepthThreshold:(unsigned long long)a0 bodyChildCountThreshold:(unsigned long long)a1;

@end
