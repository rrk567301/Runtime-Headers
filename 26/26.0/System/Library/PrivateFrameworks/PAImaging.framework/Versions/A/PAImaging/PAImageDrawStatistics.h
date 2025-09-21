@class NSMutableArray;

@interface PAImageDrawStatistics : PAImageDrawStatItem

@property (readonly, nonatomic) NSMutableArray *items;

- (void)addItem:(id)a0;
- (id)init;
- (id)description;
- (double)sharpness;
- (void).cxx_destruct;

@end
