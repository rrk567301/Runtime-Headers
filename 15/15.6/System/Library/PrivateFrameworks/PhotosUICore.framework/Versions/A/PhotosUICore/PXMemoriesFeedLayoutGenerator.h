@class PXMemoriesFeedLayoutMetrics;

@interface PXMemoriesFeedLayoutGenerator : PXLayoutGenerator

@property (nonatomic) char includeDateHeader;
@property (nonatomic) char isFirstHeader;
@property (copy, nonatomic) PXMemoriesFeedLayoutMetrics *metrics;

- (id)initWithMetrics:(id)a0;

@end
