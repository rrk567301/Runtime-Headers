@interface TSCHChartGridCountAdapter : TSCHChartGridAdapter

@property (nonatomic) BOOL countFromOne;
@property (nonatomic) unsigned long long indexFactor;

- (void)setValue:(id)a0 atIndex:(unsigned long long)a1;
- (unsigned long long)count;
- (id)valueAtIndex:(unsigned long long)a0;
- (id)initWithCount:(unsigned long long)a0;

@end
