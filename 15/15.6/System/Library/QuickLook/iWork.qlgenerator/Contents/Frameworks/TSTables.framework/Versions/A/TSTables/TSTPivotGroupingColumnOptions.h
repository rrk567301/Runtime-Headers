@interface TSTPivotGroupingColumnOptions : NSObject

@property (readonly, nonatomic) long long flags;
@property (readonly, nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } sortingAggregateRuleUid;
@property (readonly, nonatomic) char hideTotals;
@property (readonly, nonatomic) char repeatLabels;
@property (readonly, nonatomic) char sortByGrandTotal;
@property (readonly, nonatomic) char sortDescending;
@property (readonly, nonatomic) char isNotEmpty;

+ (id)emptyOptions;

- (id)initWithFlags:(long long)a0 sortingAggregateRuleUid:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a1;

@end
