@interface CNUIUserActionItemComparator : NSObject

+ (id)scoreForUserAction:(id)a0;
+ (id /* block */)comparatorWithActionItemGrouping;
+ (id /* block */)comparatorWithPreferredLabelsFirst;
+ (id /* block */)comparatorWithAlphabeticalOrderByLabel;
+ (id /* block */)comparatorWithAlphabeticalOrderByTargetHandle;

@end
