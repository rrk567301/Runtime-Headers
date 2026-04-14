@class ATXLocationOfInterest, NSDate;

@interface ATXPredictedTransition : NSObject

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) ATXLocationOfInterest *loi;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithDate:(id)a0 loi:(id)a1;
- (id)transitionArrayForDate:(id)a0;

@end
