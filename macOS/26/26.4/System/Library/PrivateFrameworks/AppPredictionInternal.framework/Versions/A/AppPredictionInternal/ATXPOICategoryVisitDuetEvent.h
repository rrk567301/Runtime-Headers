@class NSOrderedSet;

@interface ATXPOICategoryVisitDuetEvent : ATXDuetEvent

@property (readonly, nonatomic) NSOrderedSet *possibleCategoryNames;
@property (readonly, nonatomic) BOOL hasExited;

- (id)initWithPossibleCategoryNames:(id)a0 startDate:(id)a1 endDate:(id)a2 hasExited:(BOOL)a3;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCurrentContextStoreValues;
- (id)description;
- (id)identifier;
- (id)initWithPossibleCategoryNames:(id)a0 startDate:(id)a1 endDate:(id)a2;
- (BOOL)isEqualToATXPOICategoryVisitDuetEvent:(id)a0;

@end
