@class NSMutableArray;

@interface PAImageDrawStatistics : PAImageDrawStatItem

@property (readonly, nonatomic) NSMutableArray *items;

- (void)addItem:(id)a0;
- (double)sharpness;
- (id)description;
- (void).cxx_destruct;
- (id)init;

@end
