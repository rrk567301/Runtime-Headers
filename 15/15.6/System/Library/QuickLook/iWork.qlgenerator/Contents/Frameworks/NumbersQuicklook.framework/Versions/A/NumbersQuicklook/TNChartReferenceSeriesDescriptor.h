@interface TNChartReferenceSeriesDescriptor : NSObject

@property (nonatomic) unsigned long long seriesIndex;
@property (nonatomic) char onCategorizedTable;
@property (nonatomic) char spanning;
@property (nonatomic) unsigned char categoryLevel;

- (id)init;

@end
