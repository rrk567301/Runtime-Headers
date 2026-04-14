@class NSDate;

@interface GetSleepAnalysisIntent : INIntent

@property (nonatomic, copy) NSDate *start;
@property (nonatomic, copy) NSDate *end;

- (id)init;
- (id)initWithCoder:(id)a0;

@end
