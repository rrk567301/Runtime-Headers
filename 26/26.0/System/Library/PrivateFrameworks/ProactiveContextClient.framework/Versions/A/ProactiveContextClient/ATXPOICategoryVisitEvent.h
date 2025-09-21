@class NSOrderedSet, NSDate;

@interface ATXPOICategoryVisitEvent : NSObject

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSOrderedSet *possibleCategoryNames;
@property (readonly, nonatomic) BOOL hasExited;

- (id)identifier;
- (id)initWithPossibleCategoryNames:(id)a0 startDate:(id)a1 endDate:(id)a2 hasExited:(BOOL)a3;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToATXPOICategoryVisitEvent:(id)a0;
- (void).cxx_destruct;

@end
