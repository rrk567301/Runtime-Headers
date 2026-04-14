@class NSMutableArray;

@interface PAImageDrawStatistics : PAImageDrawStatItem

@property (readonly, nonatomic) NSMutableArray *items;

- (void)addItem:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (double)sharpness;

@end
