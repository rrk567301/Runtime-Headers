@class NSOrderedSet, NSDate;

@interface ATXPOICategoryVisitEvent : NSObject

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSOrderedSet *possibleCategoryNames;
@property (readonly, nonatomic) char hasExited;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)identifier;
- (id)initWithPossibleCategoryNames:(id)a0 startDate:(id)a1 endDate:(id)a2 hasExited:(char)a3;
- (char)isEqualToATXPOICategoryVisitEvent:(id)a0;

@end
