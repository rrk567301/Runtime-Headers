@class NSString, NSDate;

@interface GetCardioFitnessIntent : INIntent

@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic, copy) NSString *unit;

- (id)init;
- (id)initWithCoder:(id)a0;

@end
