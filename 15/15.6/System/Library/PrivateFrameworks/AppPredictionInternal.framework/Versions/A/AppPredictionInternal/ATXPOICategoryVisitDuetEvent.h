@class NSOrderedSet;

@interface ATXPOICategoryVisitDuetEvent : ATXDuetEvent

@property (readonly, nonatomic) NSOrderedSet *possibleCategoryNames;
@property (readonly, nonatomic) char hasExited;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)identifier;
- (id)initWithCurrentContextStoreValues;
- (id)initWithPossibleCategoryNames:(id)a0 startDate:(id)a1 endDate:(id)a2;
- (id)initWithPossibleCategoryNames:(id)a0 startDate:(id)a1 endDate:(id)a2 hasExited:(char)a3;
- (char)isEqualToATXPOICategoryVisitDuetEvent:(id)a0;

@end
