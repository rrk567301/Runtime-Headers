@interface TSCHSeriesDimension : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long seriesIndex;
@property (readonly, nonatomic) int axisType;

+ (id)seriesDimensionWithSeriesIndex:(unsigned long long)a0 axisType:(int)a1;

- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithSeriesIndex:(unsigned long long)a0 axisType:(int)a1;

@end
