@class NSMutableArray;

@interface PAImageDrawStatistics : PAImageDrawStatItem

@property (readonly, nonatomic) NSMutableArray *items;

- (void)addItem:(id)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (double)sharpness;

@end
