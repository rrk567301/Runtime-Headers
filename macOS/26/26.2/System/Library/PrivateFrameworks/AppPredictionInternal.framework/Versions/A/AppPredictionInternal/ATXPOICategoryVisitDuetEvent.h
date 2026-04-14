@class NSOrderedSet;

@interface ATXPOICategoryVisitDuetEvent : ATXDuetEvent

@property (readonly, nonatomic) NSOrderedSet *possibleCategoryNames;
@property (readonly, nonatomic) BOOL hasExited;

- (id)identifier;
- (BOOL)isEqual:(id)a0;
- (id)initWithCurrentContextStoreValues;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPossibleCategoryNames:(id)a0 startDate:(id)a1 endDate:(id)a2 hasExited:(BOOL)a3;
- (id)initWithPossibleCategoryNames:(id)a0 startDate:(id)a1 endDate:(id)a2;
- (BOOL)isEqualToATXPOICategoryVisitDuetEvent:(id)a0;

@end
